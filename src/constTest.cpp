#include <iostream>
using namespace std;

int main()
{
    int x = 66;
    const int y = 67;
    char ch = {x};   //  编译器不知道char能不能放得下int类型的值，所以警告
    char ch2 = x;
    char ch3 = {y};  //   常量，编译器知道放得下，所以不警告。
    cout<<ch<<"  "<<ch2<<"  "<<ch3;  
    cin.get();
    return 0;
}