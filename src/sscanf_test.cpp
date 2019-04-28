/**
 * C++中 sscanf函数的使用: int sscanf ( const char * s, const char * format, ...);
 * 这个函数可以接收多个参数.具体介绍 http://www.cplusplus.com/reference/cstdio/sscanf/
 * 第一个参数为const char *，输入为string时需要做格式转换。所以string后面都添加了c_str()
 * sscanf的第二个参数可以理解为正则表达式，要匹配的格式.
 * 后面的参数就是匹配到的内容所对应的存储变量。注意如果是string或者char *的话可以直接写，
 * 但是如果是数字，则要加上&符号，表示取值。 
 */

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    string s = "abc-123-def-456";
    char* pStr1 = new char[10];
    int i = 0;
    char * pStr2 = new char[10];
    double d = 0;

    //  第一个参数为const char *，输入为string时需要做格式转换。所以string后面都添加了c_str()
    //  此外，int  double之类的需要引用，即加上 & 符号,表示取值，如果不加这个符号可能无法运行
    sscanf(s.c_str(), "%3s-%d-%3s-%lf", pStr1, &i, pStr2, &d);

    cout<<"s = "<<s<<endl;
    cout<<"pStr1 = "<<pStr1<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"pStr2 = "<<pStr2<<endl;
    cout<<"d = "<<d<<endl;

    delete [] pStr1;  // 如果使用 new [] 为数组分配内存，则应使用delete [] 来释放。
    delete [] pStr2;

    // string s = "abc-123";
    // char * p = new char[10];
    // int i = 0;

    // sscanf(s.c_str(),"%s-%d",p,&i);
    // cout<<p<<endl;
    // cout<<i;

    // delete [] p;

    return 0;
}
