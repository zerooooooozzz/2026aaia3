//week06-3.cpp 學習計畫 simulation 第2題
//leetcode 657. Robot Return to Origin
//機器人上U下D左L右R 是否回歸原位
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char c :moves){
            if(c=='U') y++;
            if(c=='D') y--;
            if(c=='L') x--;
            if(c=='R') x++;
        }
        if(x==0&&y==0) return true;
        else return false;

    }
};
