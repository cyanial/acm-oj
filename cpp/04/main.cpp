#include <iostream>

using namespace std;

// 输入数据包括多组。
// 每组数据一行,每行的第一个整数为整数的个数n(1 <= n <= 100), n为0的时候结束输入。
// 接下来n个正整数,即需要求和的每个正整数。

// 每组数据输出求和的结果

int main() {

    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
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