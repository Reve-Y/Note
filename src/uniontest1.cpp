#include <iostream>
using namespace std;
/**
 * �������塱��һ��������࣬��һ���������塱�ڿ��Զ�����ֲ�ͬ���������͡�
 * һ��������Ϊ�á������塱���͵ı����У�����װ��á������塱��������κ�һ�����͵����ݣ�
 * ��Щ��ͬ���͵����ݹ���ͬһ���ڴ棬�ﵽ��ʡ�ռ��Ŀ�ģ�����һ����ʡ�ռ�����ͣ�λ�򣩡�
 * ���⣬ͬstructһ��������Ĭ�Ϸ���Ȩ��Ҳ�ǹ��еģ����ң�Ҳ���г�Ա������
 *
 * ��һ������ݽṹ�и���Ա�и��Ե��ڴ�ռ䣬һ���ṹ�������ܳ����Ǹ���Ա����֮�ͣ��սṹ���⣬ͬʱ�����Ǳ߽��������
 * ���ڡ������塱�У�����Ա����һ���ڴ�ռ䣡
 * ����һ�����ϱ����ĳ��ȵ������Ա������Ǹ���Ա�ĳ��ȡ�
 * �ɶ�"������"��������һ��Ա������ֵ����ÿ��ֻ�ܶ�ĳһ��Ա��ֵ��������Ա��ֵҲ�����ڴ�ռ�Ĺ��ö�������ֵ��
 *
 * ��ʾ��������������<br/>
 * uData.sChar.first=A uData.sChar.second=B
 * uData.i=0x6261
 */

int main() {
	union UnionData { /*����һ�� ������*/
		int num;
		struct { /*�� ������ �ж���һ���ṹ*/
			char first;
			char second;
		} sChar;
	} uData;
 
	//������ ��Ա��ֵ
	// ��ֵ��num 0x4241�����ڹ����ڴ棬Ҳ�൱��first��ֵ0x41��second��ֵ0x42
	// ��ascii���ã�first='A' second='B'
    uData.num=0x4241;
    cout << "uData.sChar.first="<< uData.sChar.first << " uData.sChar.second=" << uData.sChar.second << endl;
 
    // ���沽��������
    uData.sChar.first='a'; /*�����нṹ��Ա��ֵ*/
    uData.sChar.second='b';
    cout << "uData.num=0x" << hex << uData.num << endl;
 
	return 0;
}

