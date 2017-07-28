import nltk

class Analyzer():
    # implements sentiments analyzis

    def __init__(self, positives, negatives):
        # initializes analyzer
        
        # makes a set and loads the file into it
        self.positives_set = set()
        file = open(positives, "r")
        
        # reads each line from the file and strips the endline from those not starting with ";" 
        # (comments at the start of the file)
        for line in file:
            if line.startswith(";") == False:
                self.positives_set.add(line.rstrip("\n"))
        file.close()   
        
        # does the same with negative list
        self.negatives_set = set()
        file = open(negatives, "r")
        for line in file:
            if line.startswith(";") == False:
                self.negatives_set.add(line.rstrip("\n"))
        file.close()
        

    def analyze(self, text):
        # analyzes text for sentiment, returning its score
        
        # breaks the tweet into separate words, thanks to nltk module and its function tokenize
        tokenizer = nltk.tokenize.TweetTokenizer()
        tokens = tokenizer.tokenize(text)
        
        # initial sum
        sum = 0
        
        # goes over each word and checks is it in positives or negatives list
        for word in tokens:
            if word.lower() in self.positives_set:
                sum += 1
            elif word.lower() in self.negatives_set:
                sum -= 1
            else:
                continue

        # returns the total score of the tweet
        return sum
