#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "�����������������߳���";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b || a == c || b == c) {
			cout << "���������ǵ���������"<<endl;
		}
		else {
			cout << "�������β��ǵ���������"<<endl;
		}
		cout << "���ܳ�Ϊ" << a + b + c << endl;
	}
	else {
		cout << "�ⲻ��������";
	}
	
}