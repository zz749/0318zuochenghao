#include <iostream>
using namespace std;
int main() {
	int D = 0;//����
	int a ;//���һ�����ƻ��
	int b=0 ;//һ�������ƻ��
	double M = 0;
	for (a = 1; b <= 100; D++)
	{
		a=a * 2;
		b = a + b;
	}
	M = 0.80 * (b - a)/(D-1) ;
	cout << "ƽ����Ǯ" << M<< endl;
}