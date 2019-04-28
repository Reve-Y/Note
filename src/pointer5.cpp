/**
 *  对指针的解除引用的另一种方式： 使用数组表示法。例： p[0]
 */

#include <iostream>
using namespace std;

int main()
{
    char * pStr = "abcde";
    int val = 12;
    int * point = &val; 
    cout<<pStr[0]<<endl;
    cout<<"val =  "<<point[0];  
    return 0;
}