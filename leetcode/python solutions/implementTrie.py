class TrieNode:
    def __init__(self):
        self.children = {}
        self.end_node=0

class WordDictionary:
    
    def __init__(self):
        """
        Initialize your data structure here.
        """
    
        self.root=TrieNode()
        
        

    def addWord(self,words) -> None:
        """
        Adds a word into the data structure.
        """
        
        for word in words:
            curr_dic=self.root
            for letter in word:
                curr_dic=curr_dic.setdefault(letter,TrieNode)
            curr_dic.end_node=1
    def search(self, word: str) -> bool:
        """
        Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter.
        """
        
        def dfs(node,depth):
            if depth==len(word):return node.end_node
            if word[depth]== ".":
                for child in node.children:
                    return dfs(node.children[child], depth+1)
            if word[i] in node.children:
                return dfs(node.children[word[i]],depth+1)
            return False
        return dfs(self.root,0)
       
        
   
obj = TrieTree()
fruits=[]
obj.makeTrie(["apple","ape"])
dixt=obj.search()
print(dixt)




        
        

# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)