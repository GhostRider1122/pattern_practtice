/*
Generate the following pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include<bits/stdc++.h>
using namespace std;

void pattern9(int n){
    int start  = 1;
    for(int i=1; i<=n; i++){
        if(i%2 == 0) start = 0;
        else start = 1;

        for(int j=0; j<i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }

}

int main(){
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;

    cout << "\nHere is the generated pattern\n";
    pattern9(n);
}