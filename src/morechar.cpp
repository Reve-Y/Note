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
    cout<<"the next character is :"<<++ch<<endl;  //  ++ch��ch++��Ч����ͬ ++ch��ִ��++����
    return 0;
}