#include <iostream>

// 递归函数计算第n个斐波那契数
int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    std::cin >> n; // 输入测试数据的组数n

    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a; // 输入每组测试数据中的正整数a
        int result = fibonacci(a); // 计算第a个斐波那契数
        std::cout << result << std::endl; // 输出结果
    }

    return 0;
}
