/*
 * 原始字符串
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<R"(A "B" \n  \t  C  )";  // 原始字符串以 "( 和 )" 为定界符。
    cout<<R"+++(dasdasdasd"""""dadasd"()"adsadasd)+++"; //  在 " 和 ( 中可以添加一些字符，后面也须匹配
}