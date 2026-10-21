//week07-3.cpp 學習計畫 Simulation 第4題
//leetcode 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,d=0;//北=0東=1南=2西=3
        for(char c:instructions){
            if(c=='R') d=(d+1)%4;
            if(c=='L') d=(d-1+4)%4;
            if(c=='G'){
                if(d==0) y++;//北
                if(d==1) y++;//東
                if(d==2) y--;//南
                if(d==3) y--;//溪
            }

        }
        if (x==0 && y==0)return true;
        if(d!=0)return true;
        return false;
    }
};
