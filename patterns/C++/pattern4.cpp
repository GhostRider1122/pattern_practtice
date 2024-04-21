/*
Generate the following pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include<bits/stdc++.h>
using namespace std;

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows(n): ";
    cin >> n;
    cout << "Here is the generated pattern\n";
    pattern3(n);

}