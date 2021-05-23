//we add a leading space to our sentence and word. 
//Then, we can do a string search, and cout the number of spaces
// before the found word.



class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
    auto sent = " " + sentence, word = " " + searchWord;
    auto pos = sent.find(word);
    if (pos != string::npos)
        return count(begin(sent), begin(sent) + pos + 1, ' ');
    return -1;   
    }
};