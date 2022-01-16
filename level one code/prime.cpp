

#include<iostream>
using namespace std;
int main(){

    int i , n , c=0;
    cin >> n;
    for (i = 1 ; i <= n ; i++){
        if (n % i == 0){
            c++;
        }
    }if( c == 2){
        cout << "prime ";
    }else{
        cout << "not";
    }
}

