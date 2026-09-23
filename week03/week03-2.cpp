//week03-2.cpp 學習計畫Basic 第6題
//Leetcode 283. Move Zeroes
//0移右邊不是0的放左邊補0
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int num:nums){//C++進階for迴圈
            if(num!=0){
                nums[k]=num;
                k++;
            }

        }
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
