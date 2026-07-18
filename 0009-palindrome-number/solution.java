class Solution {
    public boolean isPalindrome(int x) {
        int temp=x;
        int y=0,r=0;
        while(x!=0){
            y=x%10;
            r=r*10+y;
            x=x/10;
        }
        if(temp==r&& temp>=0)
            return true;
        else
           return false;
    }
}
