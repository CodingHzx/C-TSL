// Array: ��������ʽ�����������������
// Array  ��Ԫ�ؽ��ɹ̶���С��array����Ԫ�ظ����޷��޸ģ�ֻ���޸���ֵ���ڴ���ʱ����ָ�����С��

// ���string���͵�һ��arrayʵ����

#include <array>
#include <string>
#include <iostream>
using namespace std;

int main(){

	// ����һ��array������5��string���͵�Ԫ�ء�
	array<string, 5> sarr = { "Hello", "Beijing","Hello", "world" };
	for (int i = 0; i < sarr.size(); i++)
	{
		cout << i <<" : "<< sarr[i] << endl;
	}

	system("pause");
	return 0;
}



