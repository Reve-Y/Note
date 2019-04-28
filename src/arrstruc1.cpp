#include <iostream>
using namespace std;
struct people
{
    char name[20];
    int age;
};

int main()
{
    people arr[3] = { {"jiashu",22},{"xiaowei",21}};
    for(int i = 0 ;i < sizeof(arr)/sizeof(people) ;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].age<<endl;
    }
}
