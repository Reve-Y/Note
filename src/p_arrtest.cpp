#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5};
    cout<<" arr = "<<arr<<endl;      //  arr 数组名被解释为第一个元素的地址
    cout<<" &arr = "<<&arr<<endl;    //  &arr 得到的是整个数组的地址   
    cout<<" arr+1 = "<<arr+1<<endl;  //  加4字节
    cout<<" &arr+1 = "<<&arr+1<<endl;  //  加40字节

    int (*p1)[10] = &arr;    //  p1是指向数组的指针，*p1与arr等价。
    cout<<" p1 = "<<p1<<endl;
    cout<<" &p1 = "<<&p1<<endl;
    cout<<" *p1 = "<<*p1<<endl; 
    for(int i = 0 ; i < 10; i++)
    {
        cout<<" "<<(*p1)[i];
    }
    return 0;
}