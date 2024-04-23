/*
Generate the following pattern
A
A B
A B C
A B C D
A B C D E  
*/

#include<bits/stdc++.h>
using namespace std;

void pattern11(int n){
    for(int i=0 ; i<n; i++){
        for(char j='A'; j<='A'+i; j++){
            cout << j <<" ";
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