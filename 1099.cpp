#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x, y, ans = 0;
        cin >> x >> y;
        if (x > y) swap(x, y);
        for (int i = x + 1; i < y; ++i) {
            if (i & 1) ans += i;
        }
        cout << ans << endl;
    }

    return 0;
}