#include <iostream>
using namespace std;

int main()
{
    cout<<" enter number: \n";
    int num ;
    (cin>>num).get();   //  �����������Խ���������ʱ��cin.get��ȡ���մ������⡣
    cout<<" enter string \n";
    char str[20];
    cin.get(str,20);
    cout<<num<<"  "<<str;
    return 0;
}