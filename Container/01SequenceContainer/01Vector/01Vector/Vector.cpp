// Vector 属于序列式容器，
// Vectror 将其元素置于一个Dynamic array中管理，允许随机访问。
//                                 在array尾部进行插入删除操作不需移动元素，操作快速。<有可能需要重新分配内存，耗时>

// 针对整数类型的一个vector实例，插入6个值，再打印所有元素

#include <vector>
#include <iostream>
using namespace std;

int main(){

	// 通过构造函数创建一个空对象。
	vector<int> ivec;

	for (int i = 0; i < 6; i++)
	{
		ivec.push_back(i);
	}

	for (int i = 0; i < ivec.size(); i++)
	{
		cout << ivec[i] << endl;
	}

	system("pause");
	return 0;
}