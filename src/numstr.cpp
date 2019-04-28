#include <iostream>
using namespace std;

int main()
{
    cout<<" enter number: \n";
    int num ;
    (cin>>num).get();   //  这种做法可以解决混合输入时，cin.get获取到空串的问题。
    cout<<" enter string \n";
    char str[20];
    cin.get(str,20);
    cout<<num<<"  "<<str;
    return 0;
}