class Solution {
public:
    string removeStars(string s) {
        int i=0,j=0;
        while(j<s.size()){
            if(s[j]=='*'){
                i--;
            }else{
                s[i++]=s[j];
            }
            j++;
        }
        return s.substr(0,i);
    }
};