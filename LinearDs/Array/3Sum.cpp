
class Solution {
public:

   vector<vector<int>>result;

   void twoSum(vector<int>&num,int target , int i,int j){

       while(i<j){

            if(num[i] + num[j]>target){

                j--;
            }

            else if(num[i] + num[j]<target){

                i++;
            }

          else {

             while(i<j && num[i] == num[i+1]) i++;
               
             while(i<j && num[j] == num[j-1]) j--;

             result.push_back({-target, num[i], num[j]});

             i++;

             j--;
 
          }

   }

   }
    vector<vector<int>> threeSum(vector<int>& nums) {


        int n = nums.size();

        if(n<3){

            return {};
        }

        result.clear();

        sort(begin(nums), end(nums));

        for(int i =0; i<=n-3; i++){

            if(i>0 && nums[i]==nums[i-1]){

                continue;
            }

            int n1 = nums[i];

            int target = -n1;

            twoSum(nums,target, i+1, n-1);
        }


        return result;

    }
       

    };