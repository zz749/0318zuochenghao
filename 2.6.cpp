#include <iostream>
using namespace std;
int main() {
	int a, b;
		cout << "�������һ��������";
	cin >> a;
	cout << "������ڶ���������";
	cin >> b;
	int tempa = a;
	int  tempb= b;
	while (tempb != 0) {
		int ch = tempa % tempb;
		tempa = tempb;
		tempb = ch;
	}
	cout << "���������������Լ����" << tempa << endl;
	cout << "��������������С��������" << a * b/tempa << endl;
	return 0;
}