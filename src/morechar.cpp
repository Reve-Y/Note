#include <iostream>
using namespace std;

int main()
{
    char ch;
    int integer;
    cout<<"input a character and a digital number:"<<endl;
    cin>>ch;
    cin>>integer;
    cout<<"the character you input is :"<<ch<<endl;
    cout<<"the integer you input is :"<<integer<<endl;
    cout<<"the next character is :"<<++ch<<endl;  //  ++ch和ch++的效果不同 ++ch先执行++操作
    return 0;
}