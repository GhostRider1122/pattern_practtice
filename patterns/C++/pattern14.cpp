/*
Generate the following pattern
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
*/

#include<bits/stdc++.h>
using namespace std;

void pattern14(int n){
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << " ";
        }

        int cnt = 0;
        for(int j=0; j<2*i+1; j++){
            cout << char(65+cnt);

            if(j < (2*i+1)/2) cnt++;
            else cnt --;
        }

        cout << endl;
    }

}


int main(){
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;

    cout << "\nHere is the generated pattern\n";
    pattern14(n);
}