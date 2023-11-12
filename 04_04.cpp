#include <iostream>

int main() {
    std::string input;

    // 获取用户输入
    std::cout << "请输入一段话：";
    std::getline(std::cin, input);

    // 大小写互换
    for (char &c : input) {
        if (std::islower(c)) {
            // 如果是小写字母，转换为大写
            c = static_cast<char>(c - 'a' + 'A');
        } else if (std::isupper(c)) {
            // 如果是大写字母，转换为小写
            c = static_cast<char>(c - 'A' + 'a');
        }
    }

    // 输出结果
    std::cout << "大小写互换后的结果：" << input << std::endl;

    return 0;
}
