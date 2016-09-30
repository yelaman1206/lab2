#include<iostream>
#include<cmath>
using namespace std;
 
  int main(){
  	double x,y,z;
  	cin>>x>>y>>z;
  	double a=(sqrt(abs(x-1))-pow(abs(y),1/3))/(1+(x*x/2)+(y*y/4));
  	double b=x*(atan(z)+exp(-x-3));
  	cout<<"a= "<<a<<endl;
  	cout<<"b="<<b;
  	return 0;
  	 }
