//week04-4.cpp 學習計畫 basic 第7題
//leetcode 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();//有幾位數
        //int carry=0;//進位
        int carry=1;//一開始就要在最右邊+1
        for(int i=N-1;i>=0;i--){//倒迴圈
           int now=digits[i]+carry;
           carry=now/10;
           digits[i]=now%10;

        }
        if(carry>0) digits.insert(digits.begin(),carry);
        return digits;
    }
};
