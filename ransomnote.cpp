static vector<int> nums=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return vector<int>{};
}();
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> a(26,0);
        if(ransomNote.size()==0) {
            return true;
        }
        if(magazine.size()<ransomNote.size()) {
            return false;
        }
        for(int i=0;i<ransomNote.size();i++) {
            a[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.size();i++){
            if(a[magazine[i]-'a']>0){
                a[magazine[i]-'a']--;
            }
        }
        if(all_of(a.begin(),a.end(),[] (int c) {return c==0;}))
            return true;
        return false;
    }
};
