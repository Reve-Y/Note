/**
 *  const 修饰的指针  存疑
 */

#include <iostream>
using namespace std;

int main()
{
    const char * bird = "wren";   
    const char * animal = &(*bird);     
    cout<<"animal = "<<animal<<endl;
    cout<<"animal p_address = "<<(int *)animal<<endl;
    cout<<"bird = "<<bird<<endl;
    cout<<"bird p_address = "<<(int *)bird<<endl;
    bird = "magpie" ; // 喜鹊  
    cout<<"now change "<<endl;
    cout<<"now bird = "<<bird<<endl;
    cout<<"now bird p_address = "<<(int *)bird<<endl;
    cout<<"now animal = "<<animal<<endl;  
    cout<<"now animal p_address = "<<(int *)animal<<endl;
    //  这里实际上bird指向的地址的内容没有改变，只是bird指向了另一个字符串常量的地址。
    //  依据就是animal之前指向的地址与bird一样，而animal指向内存的值并没改变。
    //  用const修饰的指针，编译器将禁止改变其指向的位置的内容。
    return 0;
}