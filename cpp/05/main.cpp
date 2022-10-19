#include <iostream>

using namespace std;

// 输入的第一行包括一个正整数t(1 <= t <= 100), 表示数据组数。
// 接下来t行, 每行一组数据。
// 每行的第一个整数为整数的个数n(1 <= n <= 100)。
// 接下来n个正整数, 即需要求和的每个正整数。

// 每组数据输出求和的结果

int main() {
    int t;
    cin >> t;
    for (int z = 0; z < t; z++) {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }

    return 0;
}