

#include<iostream>
using namespace std;
int main(){
    int n ,i ,j;
    for( i = 1 ; i <= n ; i++){
        for( j = 1 ; j <= i ; j++){
            cout<<j;
        }
        for ( j = i; j < n; j++){
            cout<<" ";
        }
        for( j = n ; j >= 1 ; j-- ){
            cout<<j;
        }
        cout<<endl;
    } 
    return 0;
}
// i =1 
// j = 1 ....n = 5 
// * 
// i = 2
// j = 1 ....n = 5 
// * *
// *
// **
// ***
// ****
// *****

