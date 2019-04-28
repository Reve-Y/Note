#include <iostream>
using namespace std;

int main()
{
    int * point ;
    *point = 6;
    // cout<<point;
    cout<<" " " "<<*point;  //  指针未初始化  程序会中断
    return 0;
}