#include <iostream>
using namespace std;

int main()
{
    int* pointer ;
    // *pointer = 123;    //  ����Σ�յ�������Ϊ�����ṩ�ռ�Ӧ����һ�������Ĳ��裬ʵ��pointer��û�б���ʼ����
    pointer = (int *)0xB8000000;  //  �������ĵ�ֱַ�Ӹ�ֵ��ָ����C++�����ǺϷ��ġ������Ҫǿ��ת�����ʵ��ĵ�ַ����  
    cout<<pointer<<" ";  
    return 0;
}