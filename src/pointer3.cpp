#include <iostream>
using namespace std;

int main()
{
    int* pointer ;
    // *pointer = 123;    //  这是危险的做法，为数据提供空间应该是一个独立的步骤，实际pointer并没有被初始化。
    pointer = (int *)0xB8000000;  //  将整数的地址直接赋值给指针在C++并不是合法的。因此需要强制转换成适当的地址类型  
    cout<<pointer<<" ";  
    return 0;
}