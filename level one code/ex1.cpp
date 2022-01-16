#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n ,i ,j;
    cin>>n;
    for( i = 1 ; i <= n ; i++){
        for( j = 1 ; j <= i ; j++){
            cout<<j;
        }
        for ( j = i; j < n; j++){
            cout<<"  ";
        }
        for( j = i ; j >= 1 ; j-- ){
            cout<<j;
        }
        cout<<endl;
    } 
    return 0;
}
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321