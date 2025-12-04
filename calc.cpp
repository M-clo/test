#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return b != 0 ? a / b : 0; }

int main() {
    int a = 10, b = 5;
    cout << "10+5=" << add(a, b) << endl;
    cout << "10-5=" << sub(a, b) << endl;
    // 新增两行
    cout << "10*5=" << mul(a, b) << endl;
    cout << "10/5=" << div(a, b) << endl;
    return 0;
}