#include <iostream>
using namespace std;
int main() {
	double a, b;
	char sym;
	cout << "�������һ������";
	cin >> a;
	cout << "�����������";
	cin >> sym;
	cout << "������ڶ�������";
	cin >> b;
	switch (sym) {
	case'+':
		cout << a << '+' << b << '=' << a + b << endl;
		break;
	case'-':
		cout << a << '+-' << b << '=' << a - b << endl;
		break;
	case'*':
		cout << a << '*' << b << '=' << a * b << endl;
		break;
	case'/':
		if (b==0) {
			cout << "��������Ϊ0" << endl;

		}
		else { cout << a << '/' << b << '=' << a / b << endl; }
		break;
	case'%':
		if (b==0) {
			cout << "��������Ϊ0" << endl;
		}
		else { cout << a << '%' << b << '=' << int(a) % int(b) << endl; }
		break;
	default:
		cout << "�Ƿ������";
	}
	return 0;
	
	}