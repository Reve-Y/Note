/**
 *  const ���ε�ָ��  ����
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
    bird = "magpie" ; // ϲȵ  
    cout<<"now change "<<endl;
    cout<<"now bird = "<<bird<<endl;
    cout<<"now bird p_address = "<<(int *)bird<<endl;
    cout<<"now animal = "<<animal<<endl;  
    cout<<"now animal p_address = "<<(int *)animal<<endl;
    //  ����ʵ����birdָ��ĵ�ַ������û�иı䣬ֻ��birdָ������һ���ַ��������ĵ�ַ��
    //  ���ݾ���animal֮ǰָ��ĵ�ַ��birdһ������animalָ���ڴ��ֵ��û�ı䡣
    //  ��const���ε�ָ�룬����������ֹ�ı���ָ���λ�õ����ݡ�
    return 0;
}