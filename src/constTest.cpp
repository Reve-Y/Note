#include <iostream>
using namespace std;

int main()
{
    int x = 66;
    const int y = 67;
    char ch = {x};   //  ��������֪��char�ܲ��ܷŵ���int���͵�ֵ�����Ծ���
    char ch2 = x;
    char ch3 = {y};  //   ������������֪���ŵ��£����Բ����档
    cout<<ch<<"  "<<ch2<<"  "<<ch3;  
    cin.get();
    return 0;
}