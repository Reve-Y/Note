/**
 *  方法cin.get(char)的返回值是一个cin对象，
 *  然而，istream类提供了一个可以将istream对象转换为bool值的方法。
 *  当cin出现在需要bool值的地方，这个方法会被调用。
 */

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    cout<<"Input some charcters :\n";
    while(cin.get(ch)){
        cout<<ch;
        ++count;
    }
    cout<<endl<<count<<" characters read\n";
    return 0;
}