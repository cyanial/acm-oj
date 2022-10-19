#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    char c;
    string s;
    vector<string> vs;
    while (cin.get(c)) {
        if (c == ',') {
            vs.push_back(s);
            s.clear();
        } else if (c == '\n') {
            vs.push_back(s);
            s.clear();
            sort(vs.begin(), vs.end());
            // for (auto& ss : vs) {
            //     cout << ss << ",";
            // }
            for (int i = 0; i < vs.size(); i++) {
                cout << vs[i];
                if (i != vs.size()-1) {
                    cout << ",";
                }
            }
            cout << endl;
            vs.clear();
        } else {
            s += c;
        }
    }

    return 0;
}