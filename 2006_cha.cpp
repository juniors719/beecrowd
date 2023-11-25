// https://www.beecrowd.com.br/judge/pt/problems/view/2006

#include <iostream>
using namespace std;
int main() {
    int n, counter{};
    cin >> n;
    for (int i = 0; i < 5; ++i) {
        int x;
        cin >> x;
        if (x == n) ++counter;
    }
    cout << counter << endl;
}