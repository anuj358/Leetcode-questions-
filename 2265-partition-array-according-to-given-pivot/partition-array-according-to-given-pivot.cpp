class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

     int less=0,equal=0;

     for(int i=0;i<nums.size();i++){
        if(nums[i]<pivot){
            less++;
        }
        else if(nums[i]==pivot){
            equal++;
        }

     }

     vector<int>ans(nums.size());

     int i=0;
     int j=less;
     int k=less + equal;

     for(int x=0;x<nums.size();x++){
        if(nums[x]<pivot){
            ans[i]=nums[x];
            i++;
        }
        else if(nums[x]==pivot){
            ans[j]=nums[x];
            j++;
        }
        else{
            ans[k]=nums[x];
            k++;
        }
     }

     return ans;

    }
};