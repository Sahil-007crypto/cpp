
#include<iostream>
using namespace std;

int main(){
    int a = 0 , b =1 ,c ,n ,i;
    cin >> n;

    cout << a << " "<<b <<" ";

    for (i = 1 ; i <= n-2 ; i++){
        
        c = a+b;

        cout<<c <<" ";

        a = b ; 
        b = c;
        
    }
    
}

