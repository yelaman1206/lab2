#include<iostream>
#include<cmath>
using namespace std;
 
  int main(){
  	double a,b,angle;
  	cin>>a>>b>>angle;
  	double h = (1/tan(angle))*(a-b)/2;
  	cout<<" the area is  "<<(a+b)*h/2;
  	return 0;
  	 }
