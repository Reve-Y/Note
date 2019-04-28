#include <iostream>
using namespace std;

int main()
{
    enum bits { one , two = 100, third };   
    //  后面没有被初始化的枚举量的值将比前面的枚举量大 1
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