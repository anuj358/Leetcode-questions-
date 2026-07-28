class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int i=0,j=0;

        while(i<m){
            result.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            result.push_back(nums2[j]);
            j++;
        }

        sort(result.begin(),result.end());

       for(int k=0;k<m+n;k++){
        nums1[k]=result[k];
       }




    }
};