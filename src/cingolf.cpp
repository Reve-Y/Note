/**
 * cin 遇到不合理的输入
 */

#include <iostream>
using namespace std;
const int Max = 5;

int main()
{
    int golf[Max];
    cout<<"Please enter your golf score:\n";
    int i;
    for( i = 0; i < Max; i++)
    {
        cout<<"round #"<<i+1<<" : ";
        while ( !(cin>>golf[i]) )
        {
            cin.clear();  //  reset input 
            while (cin.get() != '\n')
            {
                continue;           //  get rid of bad input 
            }
            cout<<"Please input a number : ";
        }
    }
    for ( i = 0; i < Max ; i++)
    {
        cout<<golf[i]<<"  ";
    }
    return 0;
}