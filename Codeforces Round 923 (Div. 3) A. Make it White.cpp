
#include <bits/stdc++.h>
using namespace std;

void SL() {
    int n;
    cin >> n;
    string input;
    cin >> input;
    deque<char> s(input.begin(), input.end());
    while (!s.empty() && s.front() == 'W') {
        s.pop_front();
    }
    while (!s.empty() && s.back() == 'W') {
        s.pop_back();
    }
    cout << s.size() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        SL();
    }
    return 0;
}
