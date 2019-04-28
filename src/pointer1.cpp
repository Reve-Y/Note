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
    cout<<update<<endl;   //   因为指针指向这个地址 所以直接修改了这个地址里的值，update变量也变化了
    cout<<*(pUpdate+1);   
    return 0;
}