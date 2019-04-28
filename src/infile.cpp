/**
 * 从文本文件中读取
 * 如果它与ofstream关联同一个文件，那么在ofstream对象未close()之前，它读取不到内容。
 * 可能是因为ofstream会将文件原来的内容丢弃（长度截为0）
 */

#include <iostream>
#include <fstream>
using namespace std;
const int Max = 50;

int main()
{
    ifstream fin;
    fin.open("words.txt");
    char repeat[Max] = {'\0'};
    cout<<repeat<<endl;
    if (!fin.is_open()){
        cout<<"can not open file ..";
        return -1;
    }else{
        fin>>repeat;                //  从文件读取(误)
        cout<<"The words you input is : "<<repeat<<endl;
    }
    fin.close();
    return 0;
}