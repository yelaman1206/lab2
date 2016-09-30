#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double Ma = 0.5*sqrt(2*(b*b+c*c)-(a*a));
	cout<<"Ma ="<<Ma;
	return 0;
}
