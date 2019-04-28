/**
 *  ch == cin.get() 示例
 */ 

#include <iostream>
using namespace std;

int main()
{
    int ch;
    int count = 0;
    cout<<"Input some characters : \n";
    while( (ch = cin.get()) != EOF )    //  任何一个括号都不能少 否则因为优先级会影响结果
    {
        cout.put(char(ch)); // 强转一下
        ++count;
    }
    cout<<endl<<count<<" characters read\n";
    return 0;
}