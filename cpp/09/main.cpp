#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> vs;
    string s;
    while (cin >> s) {
        vs.push_back(s);
        if (cin.get() == '\n') {
            sort(vs.begin(), vs.end());
            for (auto& s : vs) {
                cout << s << " ";
            }
            cout << endl;
            vs.clear();
        }
    }
    return 0;
}