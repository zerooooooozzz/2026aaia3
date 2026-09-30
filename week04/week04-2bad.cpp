///week04-2bad.cpp SOIT106_ADVANCE_012
///2021-std=C++ ==gnu++11
#include <iostream>
#include <vector>
#include <stdio.h>;
using namespace std;

int main()
{
	vector<int> a;
	int now;
	for(int i=0;i<10;i++){
		cin>>now;
		if(now==0) break;
		a.push_back(now);
	}
	cin>>now;
	int ans=0;
	for(int num:a){
		if(num==now) ans++;
	}
	printf("%d\n",ans);

}
///§âbuild messageÂÅ¦â¤]ºI
