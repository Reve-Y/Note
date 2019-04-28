#include <iostream>
using namespace std;

int main()
{
    char dog[10] = "wang wang";  //  长度至少是10 ，因为这种方法初始化数组后面还有 '\0' 
    char cat[] = "miaomiao";        //  用引号括起的字符串隐式的包括结尾的空字符，所以不用显示的包括它
    cout<<sizeof(cat)/sizeof(char);   //  打印 9  ， 即cat数组的长度
}