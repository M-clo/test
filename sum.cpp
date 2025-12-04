#include <iostream>
using namespace std;

int main() {
    int sum = 0;  // 累加和的初始值为0

    // for循环：从1到100，每次加1
    for (int i = 1; i <= 100; i++) {
        sum += i;  // 等价于 sum = sum + i
    }

    cout << "1到100的和是：" << sum << endl;  // 结果：5050

    return 0;
}