/**
 *  ʹ��new �������������ڴ档
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
    cout<<"sizeof(*pi) = "<<sizeof(*pi)<<endl; //  pi �� pd ������ռ���ֽ���һ������Ϊ���Ƕ���ָ�����ͱ���
    cout<<"sizeof(pd) = "<<sizeof(pd)<<endl;   //  *pi �� *pd ��һ������Ϊһ����int����һ����double���͡�
    cout<<"sizeof(*pd) = "<<sizeof(*pd)<<endl;
    return 0;
}