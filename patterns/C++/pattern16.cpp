/*
Generate the following pattern
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/

#include<bits/stdc++.h>
using namespace std;

void pattern16(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*" <<" ";
        }

        for(int j=0; j<4*(n-i-1); j++){
            cout << " ";
        }

        for(int j=0; j<=i; j++){
            cout << "*" << " ";
        }

        cout << endl;
    }

    for(int i=n; i<2*n-1; i++){
        for(int j=0; j<(2*n-i-1); j++){
            cout << "*" <<" ";
        }

        for(int j=0; j<4*(i-n+1); j++){
            cout << " ";
        }

        for(int j=0; j<(2*n-i-1); j++){
            cout << "*" << " ";
        }

        cout << endl;
    }

}


int main(){
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;

    cout << "\nHere is the generated pattern\n";
    pattern16(n);
}