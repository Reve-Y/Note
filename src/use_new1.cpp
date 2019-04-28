/**
 *  使用new 操作符来分配内存。
 */

#include <iostream>
using namespace std;

int main()
{
    int * pi = new int;
    *pi = 2019;
    double * pd = new double;
    *pd = 10000.00;

    cout<<"sizeof(pi) = "<<sizeof(pi)<<endl;
    cout<<"sizeof(*pi) = "<<sizeof(*pi)<<endl; //  pi 与 pd 本身所占的字节数一样，因为他们都是指针类型变量
    cout<<"sizeof(pd) = "<<sizeof(pd)<<endl;   //  *pi 与 *pd 不一样，因为一个是int类型一个是double类型。
    cout<<"sizeof(*pd) = "<<sizeof(*pd)<<endl;
    return 0;
}