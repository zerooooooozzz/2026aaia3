//week01-2.cpp SOIT106_ADVANCE_001
#include <iostream> ///C++ 輸入輸出
int main()
{
	int N;
	std::cin>>N; ///C++輸入資料 標準::輸入 送到右邊N
	int b=N,ans=0;
	while(N>0){
		ans =ans*10+N%10;
		N =N/10;
	}

	//std::cout<<b<<ans<<b+ans;//錯
	std::cout<<b<<"+"<<ans<<"="<<b+ans<<std::endl;//法1
	std::cout<<b<<"+"<<ans<<"="<<b+ans<<"\n";//法2
    printf("%d+%d=%d\n",b,ans,b+ans);//法3

}
