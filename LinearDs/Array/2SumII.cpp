class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {

        int numbers = num.size();

        int i =0; 
        int j = numbers-1;

        while(i<j){

            if(num[i] + num[j]>target){

                j--;
            }

            else if(num[i] + num[j]<target){

                i++;
            }

          else {

             return {i+1, j+1};
          }

        
        
    }

    return {};

    }

    
};