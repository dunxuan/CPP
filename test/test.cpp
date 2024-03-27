#include <iostream>
#include <unordered_map>
#include <utility>

int main() {
    std::unordered_map<int, std::pair<int, int>> my_map;

    // 插入元素
    my_map[1] = std::make_pair(2, 3);
    my_map[4] = std::make_pair(5, 6);

    // 访问元素
    std::cout << "my_map[1]: (" << my_map[1].first << ", " << my_map[1].second << ")" << std::endl;
    std::cout << "my_map[4]: (" << my_map[4].first << ", " << my_map[4].second << ")" << std::endl;

    return 0;
}
