//week01-3.cpp學習計畫Basic第三題
//Leetcode 28. Find the Index of the First Occurrence in a String
//大海撈針(在一堆稻草裡找針)
class Solution {
public:
    int strStr(string haystack, string needle) {
        //所有程式題目都可以用FOR迴圈、if判斷函式呼叫
        int N1=haystack.length(),N2=needle.length();
        //函式呼叫,字串長度
        for(int i=0; i<=N1-N2;i++){//迴圈
            if(haystack.substr(i,N2)==needle)return i;// 找到答案
            //如果大字串的.substr(開始,長度)=小字串 即找到答案
        }
       return -1;//找不到
    }
};
