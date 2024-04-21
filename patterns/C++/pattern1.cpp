/*
Pattern to Generate

* * * * *
* * * * *
* * * * *
* * * * *
*/

#include<bits/stdc++.h>
using namespace std;

void pattern_generator(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j ++){
            cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Here is the generated pattern\n";
    pattern_generator(n);

}