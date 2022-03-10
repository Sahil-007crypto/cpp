
#include <iostream>
using namespace std;

double exp(int x , int n){
	static double p=1 , f=1;
	double r;

	if(n == 0) return 1;
	else{
		r= exp(x , n-1);
		p= p*x;
		f = f*n;

		return r+p/f;
	}
}

int exp1(int x , int n){
	static double s = 1;
	if(n == 0)
		return s;
	s  = 1+x/n*s;
	return exp1(x , n-1);
	
}

int main(){
	cout<<exp1(3,10);
}



