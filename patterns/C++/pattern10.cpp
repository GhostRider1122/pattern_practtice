/*
Generate the following pattern
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

void pattern10(int n){
    for(int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j <<" ";
        }

        for(int j=1; j<=4*(n-i); j++){
            cout << " ";
        }

        for(int j=i; j>0; j--){
            cout << j << " ";
        }

        cout << endl;
    }

}


int main(){
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;

    cout << "\nHere is the generated pattern\n";
    pattern10(n);
}