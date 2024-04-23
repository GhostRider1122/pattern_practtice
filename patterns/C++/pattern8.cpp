/*
Generate the following pattern
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *
*/

#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i=n+1; i<2*n; i++){
        for(int j=0; j<2*n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }

}

int main(){
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;

    cout << "\nHere is the generated pattern\n";
    pattern8(n);
}