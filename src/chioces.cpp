/**
 *  演示 array vector 和 普通数组。
 */
#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    int nums[5] = {1,2,3,4,5};
    vector<double> vnums(3) ;
    vnums[0] = 7.20;
    vnums.at(1) = 12.31;   //  另一种访问vector元素的方式
    vnums[2] = 11.18;
    vnums.insert(vnums.begin(),20.18); //  在头部插入
    array <char,10> arr = {'j','i','a','s','h','u'};
    array <char,10> arrcopy = arr; //  array对象可以赋值给另一个array对象，前提是大小一样。
    cout<<nums[1]<<endl;
    cout<<vnums[3]<<endl;
    for(int i = 0; i < arr.size(); i++)
      cout<<arrcopy[i];
    return 0;
}