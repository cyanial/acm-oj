#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 输入有两行，第一行n
// 第二行是n个字符串，字符串之间用空格隔开

// 输出一行排序后的字符串，空格隔开，无结尾空格

int main() {
    int n;
    cin >> n;
    vector<string> vs(n);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vs[i] = s;
    }

    sort(vs.begin(), vs.end());

    for (auto& s : vs) {
        cout << s << " ";
    }
}