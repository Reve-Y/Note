#include <iostream>
using namespace std;

int count = 1; //ȫ�ֱ���

int fun()
{
    static int count = 10; // �ڵ�һ�ν������������ʱ�򣬱��� count ����ʼ��Ϊ 10���������Լ� 1���Ժ�ÿ�ν���ú�����count ��ֵ����һ�κ�������֮���ֵ
    return count--;        // �Ͳ��ᱻ�ٴγ�ʼ���ˣ��������Լ� 1 �Ĳ������� static ����ǰ��Ҫ�ﵽͬ���Ĺ��ܣ���ֻ��ʹ��ȫ�ֱ���
}
 
//int count = 1; //ȫ�ֱ���
 
int main()
{
     cout<<"global  "<<"local staic"<<endl;
     for(; count <= 10; ++count)
        cout<<count<<"        "<<fun()<<endl;
     return 0;
}