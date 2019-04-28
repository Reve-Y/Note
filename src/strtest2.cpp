#include <iostream>
#include <string>
using namespace std;

int main()
{
    char animal1[20];
    string animal2;
    cout<<"input one wild animal:\n";
    cin>>animal1;
    cout<<"input animal2 : \n";
    cin>>animal2;
    cout<<" "<<animal1<<"  ""  "<<animal2<<endl;
    cout<<"a1 size: "<<sizeof(animal1)<<endl;
    cout<<"a2 size: "<<sizeof(animal2)<<endl;
    cout<<animal2.size()<<"  "<<animal2[0];
    return 0;
}