#include <iostream>
using namespace std;

int main()
{
    int var1 = 47;    //  decimal  十进制
    int var2 = 047;  // octal 八进制
    // int var3 = 079;  //   十进制整数前不能加0 
    int var4 = 0x2a;  //  hexadecimal  十六进制

    cout<<"var1 = "<<var1<<endl;
    cout<<"var2 = "<<var2<<endl;
    // cout<<"var3 = "<<var3<<endl;
    cout<<"var4 = "<<var4<<endl;

    return 0;

}