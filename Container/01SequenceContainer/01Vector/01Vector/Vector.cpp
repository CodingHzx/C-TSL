// Vector ��������ʽ������
// Vectror ����Ԫ������һ��Dynamic array�й�������������ʡ�
//                                 ��arrayβ�����в���ɾ�����������ƶ�Ԫ�أ��������١�<�п�����Ҫ���·����ڴ棬��ʱ>

// ����������͵�һ��vectorʵ��������6��ֵ���ٴ�ӡ����Ԫ��

#include <vector>
#include <iostream>
using namespace std;

int main(){

	// ͨ�����캯������һ���ն���
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