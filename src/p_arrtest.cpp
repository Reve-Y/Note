#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5};
    cout<<" arr = "<<arr<<endl;      //  arr ������������Ϊ��һ��Ԫ�صĵ�ַ
    cout<<" &arr = "<<&arr<<endl;    //  &arr �õ�������������ĵ�ַ   
    cout<<" arr+1 = "<<arr+1<<endl;  //  ��4�ֽ�
    cout<<" &arr+1 = "<<&arr+1<<endl;  //  ��40�ֽ�

    int (*p1)[10] = &arr;    //  p1��ָ�������ָ�룬*p1��arr�ȼۡ�
    cout<<" p1 = "<<p1<<endl;
    cout<<" &p1 = "<<&p1<<endl;
    cout<<" *p1 = "<<*p1<<endl; 
    for(int i = 0 ; i < 10; i++)
    {
        cout<<" "<<(*p1)[i];
    }
    return 0;
}