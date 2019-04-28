#include <iostream>
using namespace std;

int main()
{
    int j = 5;
    while ( ++j < 9 )
        cout<< j++ <<endl;      //  6  8 
    int x = (1,024);            //  x = 20
    cout<<"x = "<<x<<endl;
    int y;
    y = 1,024;                  // 逗号表达式   y = 1
    cout<<"y = "<<y<<endl;  
    return 0;
}