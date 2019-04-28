#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char arr[20];
    string str;

    cout<<strlen(arr)<<endl;
    cout<<"input a string :\n";
    getline(cin,str);
    cout<<" the string you input is: "<<str<<endl;
    return 0;
}