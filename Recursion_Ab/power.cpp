
#include<iostream>

using namespace std;

int power(int m, int n){
	if( n == 0){
		return 1;
	}else{
		return power(m, n-1)*m;
	}
}

// n to power m this one is fast 
int anotherPow(int n , int m){
	if( m == 0)
		return 1;
	if(m % 2 == 0) 
		return anotherPow(n*n , m/2);
	else
		return n * anotherPow(n*n , (m-1)/2);
}

int main(){
	// cout<<power(3,2);
	cout<<anotherPow(2,4);

	}


