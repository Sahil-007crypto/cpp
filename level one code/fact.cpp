#include<iostream>
using namespace std;
int main(){
    int n,f,i,fact=1;
    cin >> n;
    for (i = 1 ; i <= n ; i++){
        
        fact = fact *i;
    }
    cout << fact ;
}


