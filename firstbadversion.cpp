// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n, int l=1) {
        unsigned int le=l,no=n;
        unsigned int m=(le+no)/2;
        if(isBadVersion(m)){
            if(m==1||!isBadVersion(m-1))
                return m;
            cout<<n<<" if "<<l<<" "<<m<<endl;
            return firstBadVersion(m,l);
        }
        else{
            if(n==1||!isBadVersion(n-1))
                return n;
            cout<<n<<" else "<<l<<" "<<m<<endl;
            return firstBadVersion(n,m);
        }
    }
};
