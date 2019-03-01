#include<iostream>
#include<windows.h>
int wmain()
{
	SetConsoleTitleA("检测一下");
	std::cout<<"长征时间是由（）开始"<<"\b\b\b\b"<<std::endl;
	int a;
	std::cin>>a;std::cin.get();
	if(a==1934) std::cout<<"对啦！"<<std::endl;
	else std::cout<<"小子，还需努力噢"<<std::endl;
	std::cin.get();
	std::system("cls");
	std::cout<<"什么时候结束？"<<std::endl;
	std::cin>> a;
	if (a==1936) std::cout<<"挺6"<<std::endl;
	else std::cout<<"错啦，小子"<<std::endl;
	std::cin.get();
	std::cin.get();
}