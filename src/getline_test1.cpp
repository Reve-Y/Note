#include <iostream>
using namespace std;

int main()
{
    const int Size = 10;
    char name[Size] ;
    char age[Size];

    cout<<"Please input your name\n";
    cin.getline(name,10);   //  ע�⣬����˴�������ַ�����9�������Ӱ�쵽��һ��getline��
    cout<<"enter your age:\n";
    
    cin.getline(age,10);
    cout<<"Your name : "<<name<<endl;
    cout<<"Your age: "<<age<<endl;
    // cin.get();
    return 0;
}