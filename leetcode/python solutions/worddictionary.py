class WordDictionary:
    
    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.cache=set()
        self.seen={}
        
        

    def addWord(self, word: str) -> None:
        self.cache.add(word)
    
    def search(self, word: str) -> bool:
        """
        Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter.
        """
        if len(word)==0:return null
        if word in self.seen: return self.seen[word]
        for word_ in self.cache:
            if len(word_)==len(word):
                if self.wordmatch(word,word_):
                    self.seen[word_]=True
                    return True
        self.seen[word_]=False
        return False

    def wordmatch(self,wordi,word_):
        left=0
        right=len(wordi)-1
        while left!=right:
            if word[left]==word
                if wordi[i] != word_[i]:
                    return False
        return True
        




# search=[[[],["bad"],
# ["dad"],["mad"],["pad"],
# ["bad"],[".ad"],["b.."]]]
obj = WordDictionary()
for i in range(len(words)):
    obj.addWord(words[i])
# for i in range(len(searches)):
#     param_2 = obj.search(searches[i])      
param_2 = obj.search("bad")  
print(param_2)