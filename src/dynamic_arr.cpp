/**
 *  ��̬����ʹ�á�
 */

#include <iostream>
using namespace std;

int main()
{
  double * p = new double [3] ;
  p[0] = 0.3;
  p[1] = 0.5;
  p[2] = 0.7;
  cout<<" p[1] = "<<p[1]<<endl;   //    �����ӡ  0.5
  cout<<" p = "<<p<<endl;
  p = p + 1;
  cout<<" p + 1 = "<<p<<endl;    //  ʵ�ʵ�ַ���˰˸��ֽڡ�����double�ĳ��ȡ�
  cout<<" p[1] = "<<p[1]<<endl;   //    �����ӡ  0.7
  delete [] p;
  return 0;
}