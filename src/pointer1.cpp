#include <iostream>
using namespace std;

int main()
{
    int update = 6;
    int *pUpdate = &update;

    cout<<pUpdate<<" "<<&update<<endl;
    cout<<update<<" "<<*pUpdate<<endl;

    *pUpdate = 7;
    cout<<pUpdate<<"-->"<<*pUpdate<<endl;
    cout<<update<<endl;   //   ��Ϊָ��ָ�������ַ ����ֱ���޸��������ַ���ֵ��update����Ҳ�仯��
    cout<<*(pUpdate+1);   
    return 0;
}