/**
 *  二级指针
 */

#include <iostream>
using namespace std;

int main()
{
    int var = 100;
    int* pVar = &var;    //   C++风格的声明
    int** ppVar = &pVar; //  二级指针必须用 ** 声明。 

    cout<<"var = "<<var<<endl;              //  var的值
    cout<<"&var = "<<&var<<endl;            //  var 的地址
    cout<<"pVar = "<<pVar<<endl;            //  pVar存放的值：var的地址 
    cout<<"&pVar = "<<&pVar<<endl;          //  pVar本身的地址
    cout<<"*pVar = "<<*pVar<<endl;          //  取pVar指向的地址存储的值。
    cout<<"ppVar = "<<ppVar<<endl;          //  ppVar本身存储的值，即pVar的地址
    cout<<"&ppVar = "<<&ppVar<<endl;        //  ppVar的自身的地址
    cout<<"*ppVar = "<<*ppVar<<endl;        //  取ppVar存放的地址(&pVar)所存的值，即pVar存放的值。
    cout<<"**ppVar = "<<**ppVar<<endl;      //  取ppVar所指向的地址(&pVar)再次解除引用获得的值。
    return 0;
}