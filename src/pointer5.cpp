/**
 *  ��ָ��Ľ�����õ���һ�ַ�ʽ�� ʹ�������ʾ�������� p[0]
 */

#include <iostream>
using namespace std;

int main()
{
    char * pStr = "abcde";
    int val = 12;
    int * point = &val; 
    cout<<pStr[0]<<endl;
    cout<<"val =  "<<point[0];  
    return 0;
}