#include <iostream>
using namespace std;

int main()
{
    enum bits { one , two = 100, third };   
    //  ����û�б���ʼ����ö������ֵ����ǰ���ö������ 1
    cout<<" one = "<<one<<endl;
    cout<<" two = "<<two<<endl;
    cout<<" third = "<<third<<endl;

    enum bits2 { zero,null = 0 , first , number_one = 1 };  //   0 , 0 , 1 , 1  
    cout<<" zero = "<<zero<<endl;
    cout<<" null = "<<null<<endl;
    cout<<" first = "<<first<<endl;
    cout<<" number_one = "<<number_one<<endl;
    cout<<" false = "<<false<<endl;
    cout<<" true = "<<true;
    return 0;
}