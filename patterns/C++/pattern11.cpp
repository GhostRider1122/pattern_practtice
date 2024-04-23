/*
Generate the following pattern
1
2 3
4 5 6
7 8 9 10 
11 12 13 14 15 
*/

#include<bits/stdc++.h>
using namespace std;

void pattern11(int n){
    int count = 1;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << count <<" ";
            count++;
        }

        cout << endl;
    }

}


int main(){
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;

    cout << "\nHere is the generated pattern\n";
    pattern11(n);
}