#include <iostream>
using namespace std;

int main()
{
    enum color { red,green,yellow,blue,black,pueple,pink,white};
    color var ;
    var = blue;
    // var = var + 2;   //   int 不能转换为 enum  
    cout<<var;
    return 0;
}