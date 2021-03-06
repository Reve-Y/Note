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

* 面向行的输入：getline():不是像cin一样只读一个单词。它使用通过回车键输入的换行符来确定输入结尾。**cin.getline(array_name,maxNum):在读取到指定数目的字符（maxNum-1个）或者换行符时停止读取,并且丢弃换行符**。如果此时输入的字符超过了maxNum-1，则会影响到下一次读取。而cin.get()可以与getline的参数相同，但是不会丢弃换行符，``cin.get(Name,Size).get()``即可。

* 共用体与结构体不同的是，共用体也可以存储不同的数据类型，**但只能同时存储其中的一种类型（共用内存）**

* 枚举类型更常被用来定义符号常量。enum{red,green,....} red 值为0，依次后推。定义枚举时可以显式地设置枚举量的值，**后面没有初始化的枚举的量的值将比前面的枚举量大1**。 枚举的取值范围定义如下：首先，要找出上限，需要知道枚举量的最大值，找到大于这个最大值的、最小的2的幂，将它减去1得到的便是取值上限。例，101是最大枚举值，则上限为127。要计算下限，需要知道枚举量的最小值，如果它不小于0，则取值范围的下限为0；否则，采用与寻找上限相同的方式，但加上负号。例最小枚举值为-6，则下限为-7。


### 关于指针   
* \* 运算符被称为**间接值**或**解除引用**运算符，将其运用于指针可以得到该地址存储的值。假设有int型变量update和指向它的指针变量p_update,可以将这两个变量看作同一枚硬币的正反面，变量update表示值，并使用&运算符来获得地址；而p_update表示地址，并使用 \* 来获得值。所以将值赋给 \*p_update 时，update变量的值也会改变。 

* 像是 int\* p1,p2 这样的声明，会声明一个指针 p1 和一个int型变量p2。对每个指针变量名，都需要使用一个* 。  警告：一定要在对指针应用解除引用运算符(\*)之前，将指针初始化为一个确定的、适当的地址。  示例：pointer = (int \*)0xB8000000 :将整数的地址直接赋值给指针在C++并不是合法的，因此**需要强制转换成适当的地址类型** 。

* 使用new来分配内存。指针的用处在于，在运行阶段分配未命名的内存以存储值。这种情况下只能通过指针来访问内存。C++中仍然可以像C一样使用malloc()库函数分配内存，但是有更好的方法：new 运算符来分配。为一个数据对象(可以是结构，也可以是基本类型)获得并指定分配内存的通用格式如下：**typeName \* pointer_name = new typeName**。

* 为什么必须声明指针所指向的数据类型呢？以下是原因之一：地址本身只指出了对象存储地址的开始，而没有指出其指向类型所使用的字节数。例如，用cout打印\*pointer时，cout要知道**读取多少个字节**以及如何解释他们。

* 使用new来分配的内存块通常与常规变量声明分配的内存块不同，常规变量的值被存储在 **栈(stack)** 的内存区域中，而new从被称为 **堆(heap)** 或 **自由存储区(free store)** 的内存区域分配内存。

* 使用new分配内存后，可以使用**delete**运算符来回收内存，使其内存归还给内存池。这将释放指针指向的内存，不会删除指针本身。**一定要配对的使用new 和 delete**,否则将发生内存泄漏。不要尝试释放已经释放的内存块。此外，**不能使用delete来释放声明变量所获得的内存**。例：
   ```
    int jugs = 5;
    int * pi = &jugs;
    delete pi ; //  not allowed , 不是通过new分配的内存。 
   ```

* 使用new创建动态数组(在程序运行时而非编译时创建的数组)，示例`` int * psome = new int[10]; `` **new 运算符将会返回第一个元素的地址**。当使用完毕后，也应该用delete释放他们。格式与之前有所不同：`` delete [] psome; `` 。方括号告诉程序，应释放整个数组而不仅是指针指向的元素。如果使用new时不带方括号，那么使用delete释放时也不带方括号；如果使用new时带方括号，则使用delete时也带方括号。 为数组分配内存的通用格式为：
   ``` 
    type_name * pointer_name = new type_name [num_elements] ; 
    //  pointer_name将指向第一个元素。实际上，也可以使用数组名的方式来使用pointer_name 。
   ```

* 总之，使用new和delete时，应遵守以下规则：   
   * 不要使用delete来释放不是new分配的内存
   * 不要使用delete释放同一个内存块两次
   * 如果使用 new [] 为数组分配内存，则应使用delete [] 来释放。
   * 如果使用new为一个实体分配内存，则应使用delete(没有方括号)来释放。
   * 对空指针应用delete是安全的。
   
* 使用动态数组： 接着上面的示例。psome指向第一个元素，分配的内存也是连续的，那么只要将**指针当作数组名**即可。即psome\[0]、psome\[1]..之类的访问方法。下面一段程序是个例子。   
   ```
  double * p = new double [3] ;
  p[0] = 0.3;
  p[1] = 0.5;
  p[2] = 0.7;
  cout<<" p[1] = "<<p[1]<<endl;   //    将会打印  0.5
  p = p + 1;
  cout<<" p[1] = "<<p[1]<<endl;   //    将会打印  0.7
  delete [] p;                    //    不要忘记释放内存
   ```
   实际可以看出数组名和指针的根本差别：不能修改数组名的值，但是指针是变量，因此可以修改。此外，通常double类型的数组相互间隔8个字节，而将p+1后，它将指向下一个元素的地址，这表明指针算数有一些特别之处。

* 数组和指针的特殊关系可以扩展到C风格字符串。**如果给cout提供一个字符的地址，则它将从该字符开始打印，知道遇到空字符为止**。 在cout和多数C++表达式中，char数组名、char指针以及用引号括起的字符串常量都被解释为字符串第一个字符的地址。

* const修饰的指针：不能修改其指向的地址存放的值。 下面是一段示例：
   ```
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
    ```
    一般来说，如果给cout提供一个指针，它将打印地址。但如果指针的类型为char \* ,则cout将显示指向的字符串，，如果想显示地址，就要将这种指针强制转换为另一种指针类型，比如int \*，上面的代码就是这么做的。
    如果要获得一个字符串的副本，你可以像这样做：
    ```
       char animal[20] = "woman_tiger";           //  母老虎
       char * ps = new char[strlen(animal) + 1];  // 获得内存
       strcpy(ps,animal);
    ```
    如果需要将字符串放到数组中，在初始化数组时应该使用 = 运算符，或者strcpy()或者strncpy()。使用strcpy可能会有风险，要复制的字符串过长，函数会将字符串后面的内容复制到后面的内存中。。所以后者更为安全，因为多了一个参数：要复制的最大字符数。要注意的是，如果该函数在到达字符串结尾之前目标内存已经用完，则它不会添加空字符\\0 。应该像下面这样使用：
    ```
       strncpy(word,"aaaaa bbbbb ccccc ddddd eeeee ",19);
       word[20] = '\0';
    ```
    
* 使用new创建动态结构：要创建一个未命名的结构类型，并将其地址赋给一个指针，可以这样做：
   ```
      inflatable * ps = new inflatable; //  假设inflatable定义为结构体
   ```
   创建动态结构时，不能将成员运算符句点（即 . ）用于这个指针名字，因为这种结构没有名称，只是知道他的地址。这时应该使用箭头成员运算符：->   
   它可用于指向结构的指针，就像点运算符可用于结构名一样。简单来说，指针用->，而结构名使用句点.运算符。   
   还有另一种方法可以访问成员，即 `` (*ps).attr ``这种方式。由于C++的运算符优先级规则，这里必须使用括号。
   
#### 模板类   
* 模板类vector:是一种动态数组，声明对象的方式为：
   ```
      #include <vector>  //  头文件
      using namespace std;
      ...
      vector<typeName> vt(n_elem) ; //  n_elem可以是整型常量或者变量，也可以不带它，声明一个长度为0的vt
   ```
   C++11中新增的模板类是array。vector类的效率稍低，如果需要长度固定的数组，可以使用模板类array。像下面这样声明它：
   ```
      #include <array>
      using namespace std;
      ...
      arr<int , 5 >  nums ; 
      array<typeName,n_elem>  arr; 
   ```
   **与vector不同的是，声明array 时的 n_elem 不能是变量。**     
   **无论是数组、vector对象还是array对象，都可使用标准数组表示法来访问各个元素**。只是，array和数组存储在栈，vector存储在堆中。

### 关系表达式    
* C++将赋值表达式的值定义为左侧成员的值。例如：`` x = 20 `` 这个表达式的值为20。下面这样的赋值语句也是可以存在的：
   ```
      x = y = z = 3 ; 
   ```
   赋值运算符是从右向左结合的，详情可以查看优先级表。   
   但是，**像 `` x < y ``这样的关系表达式将被判定为bool值true或false**。看下面的例子：
   ```
      cout<< (x = 100) << endl;          //  x = 100 ，打印 100 
      cout<< (x < 3) <<endl;             //  打印 0 
      cout.setf(ios_base::boolalpha) ;   //  该标记命令cout显示true或false
      cout<< (x < 3) <<endl; //          //  打印false 
   ```
   当判定表达式的值这种操作改变了内存中数据的值时，我们称之为有副作用，判定赋值表达式会带来这样的副作用，即修改被赋值者的值。``++x``这种也有。   
   还有一个概念叫做**顺序点**，是程序执行过程中的一个点，在这里，进入下一步之前将确保对所有的副作用都进行了评估。分好就是一个典型的顺序点。C++11文档中改为使用**顺序**这个概念，旨在更清晰的描述多线程编程。
   
* 关于自增运算符和接触引用运算符：前缀递增、前缀递减和接触引用运算符的优先级相同，以从右到左的方式进行结合；后缀递增和后缀递减的优先级相同，但比前缀运算符的优先级要高，这两个运算符以从左到右的方式进行结合。

#### 逗号运算符     
* 逗号表达式使得原本只允许放一个表达式的地方，可以放两个表达式，使用逗号隔开即可。他还有另外两个特性：1.它确保先计算第一个表达式，在计算第二个表达式，2.C++规定，**逗号表达式的值是第二部分的值**。 在所有的运算符中，逗号运算符的优先级是**最低**的。

#### 文本输入    
* cin 、 cin.get(char) 的用法有所区别。例如，cin 将**忽略空格与换行符**，而使用cin.get(char)这个方法，可以读取空格。下面是一个示例：
   ```
       using namespace std;
       char ch;
       int count = 0;
       cout<<"Input characters and ends with '#' : \n";
       cin>>ch;
       while (ch != '#')
       {
           count++;
           cout<<ch;
           cin>>ch;
       }
       cout<<"\n You have input "<<count<<" characters.\n";    // 并不记录空格数量
       cin.clear();
       cin.sync();  //  清空缓冲区
       count = 0;
       cout<<"You can still input some characters and ends with '#': \n";
       cin.get(ch);
       while (ch != '#')
       {
           cout<<ch;
           count++;
           cin.get(ch);
       }
       cout<<"\n You have input "<<count<<" characters.\n";    // 空格也计录下来
   ```
   上面的代码中，运行时会发现你可以在输入'#'后继续输入字符，这是因为发送给cin的字符被**缓冲**了，只有在输入回车时输入的内容才会发送给程序。   
   实际情况中，用#模拟结束并不能总令人满意的。许多操作系统都支持通过键盘来模拟文件尾条件。**windows是Crtl+Z和Enter**。检测到EOF后，cin将两位(eofbit和failbit)都设置为 1，可以通过成员函数eof()来查看eofbit是否被设置；如果检测到EOF,则cin.eof()将返回true。下面是一个示例：
   ```
       using namespace std;
       char ch;
       int count = 0 ;
       cout<<"Input some characters : \n";
       cin.get(ch);
       while (!cin.fail())
       {
           cout<<ch;
           ++count;
           cin.get(ch);        //  attemp to read a char
       }
       cout<<endl<<count<<" characters read\n";
    ```
    此外，cin.get(char)函数在到达EOF时，不会将一个特殊值赋给ch。
    
* 类似于C语言中的getchar()函数，cin也有类似的函数：
    ```
      ch = cin.get(); // 将字符编码作为int值返回。  cin.get(char)则是返回一个对象，而不是读取的字符。
    ```
   cin.get()处理EOF条件:当该函数达到EOF时，将没有可返回的字符。相反,cin.get()将返回一个符号常量**EOF**标识的特殊值。通常被定义为-1。 
   ```
       using namespace std;
       int ch;
       int count = 0;
       cout<<"Input some characters : \n";
       while( (ch = cin.get()) != EOF )    //  任何一个括号都不能少 否则因为优先级会影响结果
       {
           cout.put(char(ch)); // 强转一下
           ++count;
       }
       cout<<endl<<count<<" characters read\n";
    ```

#### 条件运算符与错误防范   
* 可以将更直观的表达式`` variable == value ``反转为`` value == variable ``这样写，可以捕获将相等运算符误写为赋值运算符的错误。例如：    
   ```
      // if ( flag == 3 ) 
      if ( 3 == flag )
   ```
   
#### 逻辑表达式   
* C++规定，或运算符``||``是个顺序点，也就是说，先修改左侧的值，再对右侧的值进行判定。(C++11的说法是，运算符左边的子表达式先于右边的子表达式）。此外，如果左边的表达式被判定为true，**则C++不回去判定右侧的表达式**。

* 同样的，逻辑AND运算符``&&``也是顺序点，因此将首先判断左侧，并且在右侧被判定之前产生所有的副作用。如果左侧被判定为false，此时整个表达式值为false，**不再对右侧进行判定**。   
   ```
      j++ < 5 || j == i  // 假设 j 的初始值为10，则j进行与i的比较时值将为11。因为||是一个顺序点。
   ```

#### 字符函数库cctype   
* C++从C继承了一个与字符相关的函数库，它可以简化诸如确定字符是否为大写字母、数字、标点符号等工作。   
例如：如果ch是一个字母，则``isalpha(ch)``返回一个非零值，否则返回0。 这些函数返回的类型为int，而不是bool。下面是一种普通的判断字符是否为字母的代码：
   ```
      if ( (ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z') ) 
   ```
   这种判断方式成立的条件是a-z，A-Z的字符编码是连续的。``isalpha()``更易用。下面是一些其他的字符函数：
   
   |函数名称|返回值|
   |:------|:------:|
   |isalnum()|如果参数是字母或数字，返回true|
   |iscntrl()|如果参数是控制字符，该函数返回true|
   |isgraph()|如果参数是除空格之外的打印字符，该函数返回true|
   |islower()/isupper()|如果是小写/大写字母返回true|
   |ispunct()|如果参数是标点符号返回true|
   |isprint()|如果参数是打印字符（包括空格），该函数返回true|
   |isxdigit()|如果参数是十六进制数字，即0~9、a~f、A~F，返回true|
   |tolower()|如果参数是大写字母，返回其小写，否则返回该参数|
   
#### switch语句   
* switch语句的语法格式示例如下：   
   ```
      switch (choice)
      {
         case 1 : cout<<"you choose 1 ...\n";
                  break;
         case 2 : cout<<"you choose 2 ... \n";
                  break;
         case 3 :                //  可以是空的,这样输入3,4都会执行case 4
         case 4 : cout<<"you choose 3 or 4 ... \n";
                  break;
         default : cout<<"that`s not a choice .\n"  //  可选
      }
   ```
   switch的表达式必须是一个结果为整数值的表达式，另外，每个标签都必须是整数常量表达式。，最常见的是int或char常量。default是可选的。   
   需要注意的是,**C++中的case标签只是行标签，而不是选项之间的界限，也就是说，程序跳到特定标签执行代码后，将依次执行之后的所有语句**。因此必要的时候需要用**break语句**来跳出switch。   
   也可以使用枚举量enum定义一组相关的常量，然后在switch语句中使用这些常量。

* switch的每一个标签都必须是一个单独的整数值，因此它无法处理浮点测试，此外case标签值还必须是常量。如果选项涉及取值范围、浮点测试或两个变量的比较，则应使用if else语句。

#### 读取数字的循环   
* 如果n是int类型,那么``cin>>n``时用户输入了一个单词而不是数字会发生什么？将发生4种情况：   
   1. n的值保持不变
   2. 不匹配的输入将被保留在输入队列中
   3. cin对象中的一个错误标记被设置
   4. 对cin方法的调用将返回false（如果被转换为bool类型）
   下面是一段示例：
   ```
       int golf[Max];
       cout<<"Please enter your golf score:\n";
       int i;
       for( i = 0; i < Max; i++)
       {
           cout<<"round #"<<i+1<<" : ";
           while ( !(cin>>golf[i]) )
           {
               cin.clear();  //  重置输入 , 没有这条语句程序将拒绝继续读取输入，
               while (cin.get() != '\n')        //  读取行尾之前的所有输入，从而删除错误输入
               {
                   continue;           //  get rid of bad input 
               }
               cout<<"Please input a number : ";
           }
       }
    ```
    
#### 函數 ``const char *c_str()``   
   c_str()函数返回一个指向正规C字符串的指针, 内容与本string串相同.这是为了与c语言兼容，在c语言中没有string类型，故必须通过string类对象的成员函数c_str()把string 对象转换成c中的字符串样式。   
   注意：一定要使用strcpy()函数 等来操作方法c_str()返回的指针,最好**不要像下面這樣使用**：
   ```
      char* c;
      string s="1234";
      c = s.c_str(); //c最后指向的内容是垃圾，因为s对象被析构，其内容被处理
   ```
   可以這樣使用：
   ```
      char c[20];
      string s="1234";
      strcpy(c,s.c_str());  //  c_str()返回的是一个临时指针，不能对其进行操作
   ```
   
#### 在使用数组作为函数入参时 保护数组   
  示例： `` void show_array ( const int arr[ ] , int length ) ; ``   
  该声明表示，指针 arr 指向的是常量数据，这意味着不能使用 arr 来修改数据，在这个函数中，数组arr的数组具有只读属性。   
  注意，这并不意味着原始数组必须是常量。只是这里的 arr 是一个指向常量的指针，无法通过它修改指向的值，实际上它指向的值不一定就是常量。

#### 使用new操作符分配内存的异常处理   
  使用`new`操作符分配内存失败时，一般不会返回`NULL`，而是会抛出异常`bad_alloc`。可以这样处理：
  ```
     try{
         // to-do
     }
     catch(const bad_alloc& e)
     {
         cerr << e.what() << endl;
         return -1;
     }
  ```
  此外，标准C++还提供了一个方法来抑制`new`抛出异常，而返回空指针:
  ```
     int* p = new (std::nothrow) int;
  ```
  
