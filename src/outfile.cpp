/*
 * 写入到文本文件中，并读取。
 * 如果 ifstream 与ofstream关联同一个文件，
 *   那么在ofstream对象未close()之前，它读取不到内容。
 * 可能是因为ofstream会将文件原来的内容丢弃（长度截为0）
 */

#include <iostream>
#include <fstream>
using namespace std;
const int Max = 50;

int main()
{
    char words[Max];
    cout<<"Input some words:\n";
    cin.get(words,Max);          // 读取

    ofstream fout;               
    fout.open("words.txt");     //  与这个文件关联:
                                //  重新执行会重写这个文件内容，丢弃原有内容。可修改
    // fout<<endl;                 //  会先换行
    fout<<words;                //  写入到文件中
    fout.close();
    
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