/**
 *  new��������delete��������ʹ��
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
    delete today;     //  �ͷ��� new ������ڴ档�ͷŷ�ʽ���ɡ�
    cout<<(*today).year<<endl;
    return 0;
}