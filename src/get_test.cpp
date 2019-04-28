#include <iostream>
using namespace std;

int main()
{
    const int Size = 10;
    char name[Size];
    char dessert[Size];

    cout<<"Enter name:\n";
    cin.get(name,Size).get();
    cout<<"Enter dessert:\n";
    cin.get(dessert,Size).get();
    cout<<name<<"  "<<dessert;
    return 0;
}