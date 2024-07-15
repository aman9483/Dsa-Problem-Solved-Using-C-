class Solution {
public:
   bool isValid(string s) {

        stack<char>c;

        for(int i =0; i<s.length(); i++){

             if(c.empty()){

                  c.push(s[i]);

             }

             else if((c.top()=='(' && s[i]==')') 
             ||( c.top()=='[' && s[i]==']') 
             || (c.top()=='{' && s[i]=='}')){

                   c.pop();
             }

             else{

                  c.push(s[i]);
             }

        }

        if(c.empty()){

            return true;
        }

        else{

            return false;
        }
        
    }
};