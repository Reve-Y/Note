#include <iostream>
using namespace std;

/* 测试变量的初始化方法*/ 
int main()
{
    int var1(123);
    int var2{456};
    int var3 = {789};
    int var4 = {};

    cout<<"var1 = "<<var1<<endl;
    cout<<"var2 = "<<var2<<endl;
    cout<<"var3 = "<<var3<<endl;
    cout<<"var4 = "<<var4<<endl;

    return 0;
}