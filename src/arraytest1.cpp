#include <iostream>
using namespace std;

int main()
{
    char array[4] {'b','a',112,'\0'};  
    //�ַ�'\0' : ASCII��Ϊ0����ʾһ���ַ��������ı�־������ת���ַ���
    for (int i = 0 ; i < 4; i++)
    {
        cout<<array[i]<<"-";
    }
}