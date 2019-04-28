#include <iostream>
using namespace std;

/**
 *  cin 将忽略空格与换行符 所以在输出时忽略了空格 
 *  且，发送给cin的字符被缓冲了，只有再输入回车时输入的内容才会发送给程序，
 *  所以你可以在输入'#'后继续输入字符。
 *  而使用cin.get(char)这个方法，可以读取空格
 */ 
int main()
{
    char ch;
    int count = 0;
    cout<<"Input characters and ends with '#' : \n";
    cin>>ch;
    while (ch != '#')
    {
        count++;
        cout<<ch;
        cin>>ch;
    }
    cout<<"\n You have input "<<count<<" characters.\n";
    // ch = NULL;
    cin.clear();
    cin.sync();  //  清空缓冲区
    count = 0;
    cout<<"You can still input some characters and ends with '#': \n";
    cin.get(ch);
    while (ch != '#')
    {
        cout<<ch;
        count++;
        cin.get(ch);
    }
    cout<<"\n You have input "<<count<<" characters.\n";
    return 0;
}