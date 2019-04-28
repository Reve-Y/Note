/**
 * 逻辑运算符 
 */ 

#include <iostream>
using namespace std;

int main()
{
    int j = 10;
    int i = 10;

    cout<< ( j++ <5 || j == i );      //  或运算符是一个顺序点。在j与i比较时j已经变成了11，
                                      //  表达式为false ，输出 0
    return 0;
}