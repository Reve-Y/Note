#include <iostream>
using namespace std;
int count = 10;

int main()
{
    const float varf = 200.0f;  //   200f 是非法的 必须包含小数点或者指数
    const double vard = 20.0;
    cout<<vard;
}