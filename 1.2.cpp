#include<iostream>
using namespace std;
int main()
{
	const double A = 3.1415926;
	double r, h;
	cout << "����Բ׶�ĵװ뾶��";
	cin >> r;
	cout << "����Բ׶�ĸ�:";
    cin >> h;
	double v = A * r * r * h/3;
	cout << "Բ׶������ǣ�"<<v << endl;

	return 0;
}