///week03-5.cpp想要認識vector<int>a
#include <iostream>
#include <vector>///本週交C++陣列(伸縮自如的陣列)
using namespace std;

int main()
{
    vector<int>a;///宣告陣列
    a.push_back(99);
    a.push_back(88);
    a.push_back(77);
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<"\n";

    a.push_back(88);
    a.push_back(77);
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<"\n";
}
