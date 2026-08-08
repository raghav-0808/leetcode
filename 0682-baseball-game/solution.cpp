class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        int sum=0;
        for(string sh: operations){
            if(sh=="C"){
                s.pop();
            }
            else if(sh=="D"){
                int r=s.top();
                s.push(r*2);
            }
            else if(sh=="+"){
                int k=s.top();
                s.pop();
                int m=s.top();
                s.push(k);
                s.push(m+k);
            }
            else{
                s.push(stoi(sh));
            }
        }
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};
