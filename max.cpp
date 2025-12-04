#include <iostream>
using namespace std;

int main() {
    // 定义一个整型数组，包含5个元素
    int nums[] = { 12, 45, 7, 89, 23 };
    // 数组长度 = 数组总字节数 / 单个元素字节数
    int len = sizeof(nums) / sizeof(nums[0]);

    int max_num = nums[0];  // 假设第一个元素是最大值

    // 遍历数组（从第二个元素开始比较）
    for (int i = 1; i < len; i++) {
        if (nums[i] > max_num) {
            max_num = nums[i];  // 更新最大值
        }
    }

    cout << "数组中的最大值是：" << max_num << endl;  // 结果：89

    return 0;
}