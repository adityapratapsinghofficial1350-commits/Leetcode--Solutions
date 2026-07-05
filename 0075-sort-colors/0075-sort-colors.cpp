class Solution {
public:
    void sortColors(vector<int>& nums) {
    int no = nums.size();
    int mid=0;
    int low=0;  
    int high=no-1;
     while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
     } 
    }
};