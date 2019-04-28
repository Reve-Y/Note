/**
 *  new操作符和delete操作符的使用
 */

#include <iostream>
using namespace std;

int main()
{
    struct date
    {
        int year;
        char name[20];
    };
    date * today ;    //  today is not null
    cout<<(*today).year<<endl;
    today = new date;
    (*today).year = 2019;
    cout<<(*today).year<<endl;
    delete today;     //  释放了 new 分配的内存。释放方式存疑。
    cout<<(*today).year<<endl;
    return 0;
}