/**
 *  ����ָ��
 */

#include <iostream>
using namespace std;

int main()
{
    int var = 100;
    int* pVar = &var;    //   C++��������
    int** ppVar = &pVar; //  ����ָ������� ** ������ 

    cout<<"var = "<<var<<endl;              //  var��ֵ
    cout<<"&var = "<<&var<<endl;            //  var �ĵ�ַ
    cout<<"pVar = "<<pVar<<endl;            //  pVar��ŵ�ֵ��var�ĵ�ַ 
    cout<<"&pVar = "<<&pVar<<endl;          //  pVar����ĵ�ַ
    cout<<"*pVar = "<<*pVar<<endl;          //  ȡpVarָ��ĵ�ַ�洢��ֵ��
    cout<<"ppVar = "<<ppVar<<endl;          //  ppVar����洢��ֵ����pVar�ĵ�ַ
    cout<<"&ppVar = "<<&ppVar<<endl;        //  ppVar������ĵ�ַ
    cout<<"*ppVar = "<<*ppVar<<endl;        //  ȡppVar��ŵĵ�ַ(&pVar)�����ֵ����pVar��ŵ�ֵ��
    cout<<"**ppVar = "<<**ppVar<<endl;      //  ȡppVar��ָ��ĵ�ַ(&pVar)�ٴν�����û�õ�ֵ��
    return 0;
}