//need to optimise

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>mp;

        vector<vector<string>>result;

        int n = strs.size();

        for(int i = 0; i<n; i++){

            string temp = strs[i];

            sort(begin(temp), end(temp));
            
            mp[temp].push_back(strs[i]);


        }

        for(auto x:mp){

            result.push_back(x.second);
        }

        return result;


    }
};