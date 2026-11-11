////week10-2b 學習計畫 MATH 第1題
//leetcode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
    int ans=(high-low)/2;
    if(low%2==1 || high%2==1) ans++;
    return ans;
    }
}; 學習計畫 MATH 第1題
//leetcode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
    int ans=(high-low)/2;
    if(low%2==1 || high%2==1) ans++;
    return ans;
    }
};
