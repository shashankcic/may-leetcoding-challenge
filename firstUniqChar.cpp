class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(nullptr);
        if(s=="")
            return -1;
        int count[26];
        int len=s.size();
        memset(count,0,sizeof(count));
        for(int i=0;i<len;i++) {
            count[s[i]-'a']++;
        }
        for(int i=0;i<len;i++){
            if(count[s[i]-'a']==1){
                return i;
            }   
        }
        return -1;
    }
};
