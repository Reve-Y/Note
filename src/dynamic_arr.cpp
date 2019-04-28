/**
 *  动态数组使用。
 */

#include <iostream>
using namespace std;

int main()
{
  double * p = new double [3] ;
  p[0] = 0.3;
  p[1] = 0.5;
  p[2] = 0.7;
  cout<<" p[1] = "<<p[1]<<endl;   //    将会打印  0.5
  cout<<" p = "<<p<<endl;
  p = p + 1;
  cout<<" p + 1 = "<<p<<endl;    //  实际地址加了八个字节。这是double的长度。
  cout<<" p[1] = "<<p[1]<<endl;   //    将会打印  0.7
  delete [] p;
  return 0;
}