class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set <char> ch;
        int count=0;
        for(char x: J){
            ch.insert(x);
        }
        for(char x: S){
            if(ch.find(x)!=ch.end()){
                count++;
            }
        }
        return count;
    }
};
