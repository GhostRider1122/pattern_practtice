/*
Generate the following pattern
* * * * *
* * * *
* * *
* *
*
*/

#include<bits/stdc++.h>
using namespace std;

void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows(n): ";
    cin >> n;
    cout << "Here is the generated pattern\n";
    pattern5(n);

}