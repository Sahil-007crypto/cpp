
//switch Statement.....
//
#include<iostream> // header file
#include<cstdlib>
using namespace std; // std input output lib.....
int main(){
  int i,j,n,k,t;
  
  for (i = -n + 1 ; i < n ; i++){
    t = n - abs(i);
    for (j = t ; j < n ; j++){
      cout<<"  ";
    }
    for(j = 1 ; j <= t ; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}


// abs = absolute value  a = -5 
//  abs(a) = 5

//  _ _ _ 1     input = 4
//  _ _ 1 2 1
//  _ 1 2 3 2 1
//  1 2 3 4 3 2 1

// try....
//    1
//   1 2
//  1 2 3
// 1 2 3 4
//  1 2 3
//   1 2
//    1



