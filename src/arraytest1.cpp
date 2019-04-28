#include <iostream>
using namespace std;

int main()
{
    char array[4] {'b','a',112,'\0'};  
    //字符'\0' : ASCII码为0，表示一个字符串结束的标志。这是转义字符。
    for (int i = 0 ; i < 4; i++)
    {
        cout<<array[i]<<"-";
    }
}