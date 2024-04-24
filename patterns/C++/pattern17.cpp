/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

#include <iostream>

using namespace std;

void pattern16(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = 2 * (n - 1) - j;
            int bottom = 2 * (n - 1) - i;

            int ans = min(min(top, bottom), min(left, right));
            cout << n - ans;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Here is the generated pattern\n";
    pattern16(n);

    return 0;
}