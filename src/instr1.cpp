#include <iostream>
using namespace std;

int main()
{
    const int Size = 20;
    char name[Size] ;
    char dessert[Size];

    cout<<"Please enter your name :\n";
    cin>>name;
    cout<<"Please enter your favorite dessert:\n";
    cin>>dessert;
    cout<<"I hava some delicious "<<dessert<<" for you ,"<<name<<"\n";
    cin.get();
    return 0;
}