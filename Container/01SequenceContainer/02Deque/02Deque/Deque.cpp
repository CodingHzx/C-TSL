// Deque ��˫�˶��У����ʣ�Dynamic array
//       ���ڶ�ͷ���߶�β����ɾ��������Ѹ�٣�����λ�ò�����Ҫ�ƶ�����Ԫ�ء�

//��Ը������͵�һ��dequeʵ��������6��ֵ���ٴ�ӡ����Ԫ��

#include <deque>
#include <iostream>
using namespace std;

int main(){

	deque<float> fdeq;
	for (int i = 0; i < 6; i++)
	{                              // 0,1.1,2.2,3.3,4.4,5.5
		fdeq.push_front(i*1.1);    // ��ͷ���룬������Ԫ��λ���±�Ϊ[0]
		//fdeq.push_back(i*1.1);   // ��β���룬������Ԫ��λ���±�Ϊ[fdeq.size()-1]
	}

	for (int i = 0; i < fdeq.size(); i++)
	{
		cout << fdeq[i] << endl;   // 5.5,4.4,3.3,2.2,1.1,0
	}

	system("pause");
	return 0;
}


