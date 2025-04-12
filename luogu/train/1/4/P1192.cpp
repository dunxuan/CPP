#include <iostream>
using namespace std;

int n, k;

// 修改后的DFS函数
// level: 当前递归深度
// start: 当前处理的位置
// last: 上一组选择的长度
int dfs(int level, int start, int last) {
    if (start == n) {
        return 1;  // 成功到达末尾，算一种有效组合
    } else if (start > n) {
        return 0;  // 超过范围，无效
    }
    
    int count = 0;
    // 尝试选择1到k个连续元素
    for (int j = 1; j <= k; j++) {
        if (start + j > n) break;  // 超过范围则停止
        count += dfs(level + 1, start + j, j);
    }
    return count;
}

int main() {
    cin >> n >> k;
    cout << dfs(0, 0, 0);
}