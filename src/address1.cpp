#include <iostream>
using namespace std;

int main()
{
    int cookie = 20;
    int donuts = 36;
    cout<<" cookie value = "<<cookie;
    cout<<" and cookie address = "<<&cookie<<endl;
    cout<<" donuts value = "<<donuts;
    cout<<" and donuts address = "<<&donuts<<endl;
    cout<<" the memory distance : "<<(int)&donuts-(int)&cookie<<"\n\n";

    int arr[10] = {1,2,3,4,5};
    for(int i = 0 ; i < 12; i++)
    {
        cout<<" arr["<<i<<"] = "<<arr[i]<<" and address = "<<&arr[i]<<endl;
        //  ���ܻ�����涨��ı���Ҳ��ӡ��������Ϊ���ַ�������ġ����ﶼ��int�͵�
    }
    return 0;
}