// List ��������ʽ����������classlist<>��class_forward_list<>��ͨ��ָ���ǣ�class list<>
// List Ԫ�ؽ���˫�����������֧��������ʡ�
//      ���ƣ����κ�λ�ò���ɾ���������ǳ�Ѹ�٣�ֻ��ı����ӡ�

// ��Դ���ַ���һ��listʵ��������ֵ���ٴ�ӡ����Ԫ��

#include <list>
#include <iostream>
using namespace std;

int main(){

	list<char> cli;

	for (char c = 'a'; c <= 'z'; c++)
	{
		cli.push_back(c);
	}

	for (auto elem : cli)
	{
		cout << elem << " ";
	}

	system("pause");
	return 0;
}