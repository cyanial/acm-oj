#include <iostream>

using namespace std;

// 输入第一行包括一个数据组数t(1 <= t <= 100)
// 接下来每行包括两个正整数a,b(1 <= a, b <= 1000)

// 输出a+b的结果
int main() {

    int t;
    cin >> t;

    for (int z = 0; z < t; z++) {
        int a, b;
        cin >> a >> b;
        cout << a+b << endl;
    }
    return 0;
}