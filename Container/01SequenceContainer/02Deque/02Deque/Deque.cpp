// Deque ：双端队列，本质：Dynamic array
//       ：在队头或者队尾插入删除操作最迅速，其他位置操作需要移动其他元素。

//针对浮点类型的一个deque实例，插入6个值，再打印所有元素

#include <deque>
#include <iostream>
using namespace std;

int main(){

	deque<float> fdeq;
	for (int i = 0; i < 6; i++)
	{                              // 0,1.1,2.2,3.3,4.4,5.5
		fdeq.push_front(i*1.1);    // 队头插入，最后插入元素位置下标为[0]
		//fdeq.push_back(i*1.1);   // 队尾插入，最后插入元素位置下标为[fdeq.size()-1]
	}

	for (int i = 0; i < fdeq.size(); i++)
	{
		cout << fdeq[i] << endl;   // 5.5,4.4,3.3,2.2,1.1,0
	}

	system("pause");
	return 0;
}


