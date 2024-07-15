class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        stack<int>s;
        int i=0,j=0;
        s.push(pu[0]);
        while(i<pu.size()){
            if(!s.empty()&&po[j]==s.top()){
              s.pop();
              j++;
            }
            else{
                s.push(pu[i]);
                i++;
            }
        }
        while(j<po.size()){
            if(!s.empty() && s.top()==po[j]){
                s.pop();
                j++;
            }
            else{
                return false;
            }
        }
      return true; }
};