class TrieNode {
    public:
    TrieNode* links[26];
    bool isLeaf = false;
};

class Trie {
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* temp = root;
        for(char ch: word) {
            if(!temp-> links[ch-'a']) {
                temp -> links[ch-'a'] = new TrieNode();
            }
            temp = temp->links[ch-'a'];
        }
        temp->isLeaf = true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(char ch : word) {
            if(!curr -> links[ch-'a']) return false;
            curr = curr->links[ch-'a'];
        }
        return curr->isLeaf;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(char ch: prefix) {
            if(!curr ->links[ch-'a']) return false;
            curr = curr->links[ch-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */