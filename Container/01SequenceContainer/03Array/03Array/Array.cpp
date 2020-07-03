// Array: 属于序列式容器，允许随机访问
// Array  将元素交由固定大小的array管理。元素个数无法修改，只可修改其值，在创建时必须指定其大小。

// 针对string类型的一个array实例。

#include <array>
#include <string>
#include <iostream>
using namespace std;

int main(){

	// 创建一个array，带有5个string类型的元素。
	array<string, 5> sarr = { "Hello", "Beijing","Hello", "world" };
	for (int i = 0; i < sarr.size(); i++)
	{
		cout << i <<" : "<< sarr[i] << endl;
	}

	system("pause");
	return 0;
}



