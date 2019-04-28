#include <iostream>
using namespace std;
/**
 * “共用体”是一种特殊的类，在一个“共用体”内可以定义多种不同的数据类型。
 * 一个被声明为该“共用体”类型的变量中，允许装入该“共用体”所定义的任何一种类型的数据，
 * 这些不同类型的数据共享同一段内存，达到节省空间的目的（还有一个节省空间的类型：位域）。
 * 另外，同struct一样，联合默认访问权限也是公有的，并且，也具有成员函数。
 *
 * 在一般的数据结构中各成员有各自的内存空间，一个结构变量的总长度是各成员长度之和（空结构除外，同时不考虑边界调整）。
 * 而在“共用体”中，各成员共享一段内存空间！
 * 所以一个联合变量的长度等于其成员中最长的那个成员的长度。
 * 可对"共用体"变量的任一成员赋予新值，但每次只能对某一成员赋值，其它成员的值也随着内存空间的共用而有了新值。
 *
 * 本示例代码输出结果：<br/>
 * uData.sChar.first=A uData.sChar.second=B
 * uData.i=0x6261
 */

int main() {
	union UnionData { /*定义一个 共用体*/
		int num;
		struct { /*在 共用体 中定义一个结构*/
			char first;
			char second;
		} sChar;
	} uData;
 
	//共用体 成员赋值
	// 赋值给num 0x4241，由于共用内存，也相当对first赋值0x41，second赋值0x42
	// 由ascii码表得：first='A' second='B'
    uData.num=0x4241;
    cout << "uData.sChar.first="<< uData.sChar.first << " uData.sChar.second=" << uData.sChar.second << endl;
 
    // 上面步骤的逆过程
    uData.sChar.first='a'; /*联合中结构成员赋值*/
    uData.sChar.second='b';
    cout << "uData.num=0x" << hex << uData.num << endl;
 
	return 0;
}

