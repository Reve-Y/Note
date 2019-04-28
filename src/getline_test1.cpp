#include <iostream>
using namespace std;

int main()
{
    const int Size = 10;
    char name[Size] ;
    char age[Size];

    cout<<"Please input your name\n";
    cin.getline(name,10);   //  注意，如果此处输入的字符超过9个，则会影响到下一次getline。
    cout<<"enter your age:\n";
    
    cin.getline(age,10);
    cout<<"Your name : "<<name<<endl;
    cout<<"Your age: "<<age<<endl;
    // cin.get();
    return 0;
}