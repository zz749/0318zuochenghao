#include <iostream>
using namespace std;

int main() {
    int letters = 0;
    int spaces = 0;
    int digits = 0;
    int others = 0;
    char c;
    while (1) {
        c = cin.get();
        if (c == '\n') {
            break;
        }
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            letters++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else {
            others++;
        }
    }
    cout << "Ӣ����ĸ������" << letters << endl;
    cout << "�ո������" << spaces << endl;
    cout << "�����ַ�������" << digits << endl;
    cout << "�����ַ�������" << others << endl;
    return 0;
}