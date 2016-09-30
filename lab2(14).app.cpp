#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double Ma = 0.5*sqrt(2*(b*b+c*c)-(a*a));
	double Mb = 0.5*sqrt(2*(a*a+c*c)-(b*b));
	double Mc = 0.5*sqrt(2*(b*b+a*a)-(c*c));
	cout<<"Ma ="<<Ma;
		cout<<"Mb ="<<Mb;
			cout<<"Ma ="<<Mc;

	return 0;
}
