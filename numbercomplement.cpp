class Solution {
public:
    int findComplement(int num) {
        if(num==1){
            return 0;
        }
        if(num==0){
            return 1;
        }
        vector<int> res(32,0);
        int i=0,sum=0;
        while(1){
            if(num==1){
                res[i]=0;
                sum+=pow(2,i)*(res[i]);
                i++;
                break;
            }
            res[i]=abs((num%2)-1);
            sum+=pow(2,i)*(res[i]);
            num/=2;
            i++;
        }              
        return sum;
    }
};
