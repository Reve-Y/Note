#include <iostream>

int main()
{
    using namespace std;
    for(int i = 0 ; i < 127 ; i++)
    {
        char ch = i;
        cout<<" "<<ch<<" �� ASCII���ǣ� ";
        cout<<(int)ch<<endl;
    } 
    return 0;
}