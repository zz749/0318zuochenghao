#include<iostream>
using namespace std;
int main() {
	double a;
	cout << "������һ����ֵa" << endl;
	cin >> a;
	double xn=a;
	double xn_1;
	while (1) {
		if (a < 0) {
			break;
		}
		else {
			xn_1 = 0.5 * (xn + a / xn);
			if (xn-xn_1<1e-5){
				break;
			}
			xn = xn_1;
		}
	}
		cout << "a��ƽ������" << xn_1<<endl;
}
