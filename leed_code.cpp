class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int nz= 0,nt = size-1;
        int current = 0;
        while(current<nt){
            if(nums[current]==0){
                swap(nums[current],nums[nz]);
                nz++;
                current++;
            }
            else if(nums[current]==1){
                current++;
            }
            else 
                swap(nums[current],nums[nt]);
                nt--;
                current++;
            
        } 
    }
}
;