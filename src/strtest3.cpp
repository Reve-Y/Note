#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int Size  = 20;

int main()
{   
    char arr1[Size] = "qwerasd";
    char arr2[Size] = "aaaaaaa\0";
    string str1 = "qwerasd";
    string str2 = "aaaaaaa\0";

    cout<<strlen(arr1)<<" "
        <<strlen(arr2)<<" "
        <<str1.size()<<" "
        <<str2.size()<<endl;   //  结果全部是7  不计算\0 
}