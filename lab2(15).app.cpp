#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double zero=a*a+b*b-c*c;
    double la=sqrt(b*c*((b+c)*(b+c)-a*a))/(b+c);
	cout<<"la="<<la;
	return 0;
}
