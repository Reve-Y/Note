#include <iostream>
using namespace std;

int count = 1; //全局变量

int fun()
{
    static int count = 10; // 在第一次进入这个函数的时候，变量 count 被初始化为 10！并接着自减 1，以后每次进入该函数，count 的值是上一次函数运行之后的值
    return count--;        // 就不会被再次初始化了，仅进行自减 1 的操作；在 static 发明前，要达到同样的功能，则只能使用全局变量
}
 
//int count = 1; //全局变量
 
int main()
{
     cout<<"global  "<<"local staic"<<endl;
     for(; count <= 10; ++count)
        cout<<count<<"        "<<fun()<<endl;
     return 0;
}