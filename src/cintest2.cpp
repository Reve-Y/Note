/**
 *  不同的操作系统对键盘来模拟文件尾条件定义的操作不同。windows是Crtl+Z和Enter
 *  校测文件尾：检测到EOF后，cin将两位(eofbit和failbit)都设置为 1 
 *  可以通过成员函数eof()来查看eofbit是否被设置；如果检测到EOF,则cin.eof()将返回true. 
 */ 

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0 ;
    cout<<"Input some characters : \n";
    cin.get(ch);
    while (!cin.fail())
    {
        cout<<ch;
        ++count;
        cin.get(ch);        //  attemp to read a char
    }
    cout<<endl<<count<<" characters read\n";
    return 0;
}