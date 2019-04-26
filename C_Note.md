#### 1. memset    
  原型：extern void *memset(void *buffer, int c, int count);  
  功能：把buffer所指内存区域的前count个字节设置成字符c。  
  说明：返回指向buffer的指针
  
#### 2. snprintf    
  函数原型：int snprintf(char* dest_str,size_t size,const char* format,...);  
  所需头文件：#include<stdio.h>  
  函数功能：先将可变参数 “…” 按照format的格式格式化为字符串，然后再将其拷贝至dest_str中。  
  注意事项：如果格式化后的字符串长度小于size，则将字符串全部拷贝至dest_str中，并在字符串结尾处加上‘\0’；   
  如果格式化后的字符串长度大于或等于size，则将字符串的(size-1)拷贝至dest_str中，然后在字符串结尾处加上’\0’.   
  函数返回值是 格式化字符串的长度。
