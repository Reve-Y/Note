#include <iostream>
using namespace std;

int main()
{
    char dog[10] = "wang wang";  //  ����������10 ����Ϊ���ַ�����ʼ��������滹�� '\0' 
    char cat[] = "miaomiao";        //  ������������ַ�����ʽ�İ�����β�Ŀ��ַ������Բ�����ʾ�İ�����
    cout<<sizeof(cat)/sizeof(char);   //  ��ӡ 9  �� ��cat����ĳ���
}