#include <iostream>

using namespace std;

// 输入包括两个正整数a,b(1 <= a, b <= 10^9),输入数据有多组, 如果输入为0 0则结束输入

// 输出a+b的结果

int main() {
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        cout << a+b << endl;
    }
    return 0;
}