/*
Generate the following pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            cout << j << " ";
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