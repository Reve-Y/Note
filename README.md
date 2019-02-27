# C++ 笔记

## 基础部分
* 数据类型：short int long char 等等，不同系统可能占用的内存大小不一样，可以用sizeof函数测试。**sizeof**函数返回类型或者变量的长度，单位是字节，例 sizeof(int) 或者 sizeof n_int。无符号类型不能存储负数值，但可以增大能存储的最大值，例：short:-32768\~32767,则无符号的版本可以表示的范围是0\~65535。无符号类型溢出时，其值将为范围另一端的极值。可参考http://www.runoob.com/cplusplus/cpp-data-types.html

* 变量初始化：可以用C++的大括号初始化器：int test = {7},其中等号可省略

* 变量名的命名方案：除基本规则外，可以约定一个前缀来表示这个变量的类型，比如b表示bool值，p表示指针，c表示单个字符等。

* true 和 false 都可以通过提升转换为int类型。true被转换为 1 ，false被转换为 0 .

* const限定符用来定义一个常量，定义后不可修改。如果在声明常量时没有提供值，编译会出错。且C++中允许使用const值来声明数组长度。

* float double 和 long double都属于浮点类型。浮点数的E表示法确保数字以浮点格式存储。例如3.54e+4,-5E-2 等等。指数为负数意味着除以10的乘方。也可以这样理解: d.ddE+n 指的是将小数点向右移n位，反之相反。此外，在书写浮点数常量的时候，最好加上后缀，例如L,f 。**浮点常量在默认情况下为double类型**。

* C++对基本类型进行分类，形成了若干个类。类型signed char 、short、int和long统称为符号整形。它们的无符号版本统称为无符号整型；C++11新增了long long 、bool、char、wchar_t、符号整数和无符号整数统称为整形；C++11新增了char16_t和char32_t。float、double和long double统称为浮点型。整数和浮点型统称为算术（arithmetic）类型。

* 全局变量和和局部变量同名时，**可通过域名(::var)在函数中引用到全局变量，不加域名解析则引用局部变量**。C++ 全局变量、局部变量、静态全局变量、静态局部变量的区别:http://www.runoob.com/cplusplus/cpp-variable-scope.html

* 面向行的输入：getline():不是像cin一样只读一个单词。它使用通过回车键输入的换行符来确定输入结尾。**cin.getline(array_name,maxNum):在读取到指定数目的字符（maxNum-1个）或者换行符时停止读取,并且丢弃换行符**。如果此时输入的字符超过了maxNum-1，则会影响到下一次读取。而cin.get()可以与getline的参数相同，但是不会丢弃换行符，**cin.get(Name,Size).get()**即可。

* 共用体与结构体不同的是，共用体也可以存储不同的数据类型，**但只能同时存储其中的一种类型（共用内存）**

* 枚举类型更常被用来定义符号常量。enum{red,green,....} red 值为0，依次后推。定义枚举时可以显式地设置枚举量的值，**后面没有初始化的枚举的量的值将比前面的枚举量大1**。 枚举的取值范围定义如下：首先，要找出上限，需要知道枚举量的最大值，找到大于这个最大值的、最小的2的幂，将它减去1得到的便是取值上限。例，101是最大枚举值，则上限为127。要计算下限，需要知道枚举量的最小值，如果它不小于0，则取值范围的下限为0；否则，采用与寻找上限相同的方式，但加上负号。例最小枚举值为-6，则下限为-7。

* 
