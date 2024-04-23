/*
Generate the following pattern
A B C D E 
A B C D
A B C
A B 
A  
*/

#include<bits/stdc++.h>
using namespace std;

void pattern13(int n){
    for(int i=0 ; i<n; i++){
        for(char j='A'; j<'A'+(n-i); j++){
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
    pattern13(n);
}