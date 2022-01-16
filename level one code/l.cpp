
#include<iostream> // header file
#include<cstring>
#include<math.h>
using namespace std; // 
int main(){
    int i,j,n,p=1;
    cin >> n;
    for( i = 1; i <= n; i++)
    {
        for(j=1 ; j<= i;j++){
            cout <<j<<" ";
        }
        for (j=1;j< i;j++){
            cout<<p++<<" ";
        }
        for (j=1;j< i;j++){
            cout<<p--<<" \n";
        }
        cout<<" ";
    }
    return 0;

}




