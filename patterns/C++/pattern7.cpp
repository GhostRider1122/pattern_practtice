/*
Generate the following patterns
      *           |      *
    * * *         |     *** 
  * * * * *       |    ***** 
* * * * * * *     |   ******* 
*/

#include<bits/stdc++.h>
using namespace std;

void pattern7_1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<2*(n-i-1); j++){
            cout << " ";
        }

        for(int k=0; k<2*i+1; k++){
            cout << "* ";
        
        }
        cout << "\n";
    }
}

void pattern7_2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            cout << " ";
        }

        for(int k=0; k<2*i+1; k++){
            cout << "*";
        
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows(n): ";
    cin >> n;
    cout << "Here is the generated pattern\n";
    pattern7_1(n);
    pattern7_2(n);


}