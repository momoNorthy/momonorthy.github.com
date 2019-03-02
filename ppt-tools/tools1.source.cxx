#include <iostream>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#pragma comment(lib,"winmm.lib")


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
std::cout<<"举手！谢谢！"<<std::endl; 
PlaySound("./Intro： The Dawn - Dreamtale.mp3",0, SND_LOOP|SND_ASYNC);
std::cout<<"中国人受到了哪次最大的伤害？"<<std::endl;
std::cout<<"a.南京大屠杀"<<" b.刚刚入侵"<<std::endl;
char a=_getch();
std::system("cls");
if (a=='a' || a=='A')std::cout<<"好棒呦！！！"<<std::endl;
else std::cout<<"小伙子，要努力哦"<<std::endl;\
_getch();
std::system("cls");
std::cout<<"课外题：共产党成立于____年。\b\b"<<std::endl;
std::cout<<"a.1921 b.1931 c.1941 d.1911"<<std::endl;
char b=_getch();
if (b=='a'||b=='A') std::cout<<"好棒呦！！！"<<std::endl;
else std::cout<<"小伙子，要努力哦"<<std::endl;
_getch();
return 0;
}