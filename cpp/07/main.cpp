#include <iostream>

using namespace std;

// 输入数据有多组, 每行表示一组输入数据。
// 每行不定有n个整数，空格隔开。(1 <= n <= 100)。

// 每组数据输出求和的结果

int main() {
    int n, sum;
    while (cin >> n) {
        sum += n;
        if (cin.get() == '\n') {
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}