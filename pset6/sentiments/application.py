from flask import Flask, redirect, render_template, request, url_for

import helpers
from analyzer import Analyzer
import os
import sys

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/search")
def search():

    # validate screen_name
    # removes the @ in front of the sceen name
    screen_name = request.args.get("screen_name", "").lstrip("@")
    if not screen_name:
        return redirect(url_for("index"))
    
    # absolute paths to lists
    positives = os.path.join(sys.path[0], "positive-words.txt")
    negatives = os.path.join(sys.path[0], "negative-words.txt")

    # instantiate analyzer
    analyzer = Analyzer(positives, negatives)
    
    # get screen_name's most recent 100 tweets
    tweets = helpers.get_user_timeline(screen_name, 100)
    
    # checks if twitter username is valid, if not return to index
    if tweets == None:
        return redirect(url_for("index"))
        
    # initializes positive, negative and neutral counts
    positive, negative, neutral = 0, 0, 0
    
    # analyzes tweets
    for tweet in tweets:
        score = analyzer.analyze(tweet)
        if score > 0.0:
            positive += 1
        elif score < 0.0:
            negative +=1
        else:
            neutral += 1
    
    # generates chart
    chart = helpers.chart(positive, negative, neutral)

    # render results
    return render_template("search.html", chart=chart, screen_name=screen_name)
