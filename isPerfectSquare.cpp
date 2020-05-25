class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        int l=0, r=num/2;
        while(l<=r){
            double m=l+(r-l)/2;
            if(m==num/m)
                return true;
            if(m<num/m)
                l=m+1;
            else 
                r=m-1;;
        }
        return false;        
    }
};
