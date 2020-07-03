// List 属于序列式容器，两种classlist<>、class_forward_list<>，通常指的是：class list<>
// List 元素交由双向链表管理，不支持随机访问。
//      优势：在任何位置插入删除操作都非常迅速，只需改变链接。

// 针对存放字符的一个list实例，插入值，再打印所有元素

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