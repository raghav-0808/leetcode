class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int prod=1;
        while(temp>0){
            int y=temp%10;
            sum+=y;
            prod*=y;
            temp=temp/10;
        }
        return (n%(sum+prod)==0);
    }
};
