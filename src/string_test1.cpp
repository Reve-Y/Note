#include <iostream>
using namespace std;

int main()
{
    char dog[10] = {'w','a','n','g',' ','w','a','n','g','\0'};
    char cat[8] = {'m','i','a','o','\0','a','b','c'};
    char duck[8] = {'g','u','a','\0'};//   后面自动补'\0'
    cout<<" dog say : "<<dog<<endl;
    cout<<" cat say : "<<cat<<endl;
    for(int i = 0; i <= 8;i++)
    {
        cout<<cat[i]<<" ";
    }
}