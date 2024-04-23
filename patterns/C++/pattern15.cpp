/*
Generate the following pattern
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/

#include<bits/stdc++.h>
using namespace std;

void pattern15(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout << "*" <<" ";
        }

        for(int j=0; j<4*i; j++){
            cout << " ";
        }

        for(int j=0; j<(n-i); j++){
            cout << "*" << " ";
        }

        cout << endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*" <<" ";
        }

        for(int j=1; j<=4*(n-i); j++){
            cout << " ";
        }

        for(int j=i; j>0; j--){
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
    pattern15(n);
}