#include<iostream>
#include<cmath>

using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	double c=sqrt(a*a+b*b);
	double s=(a*b)/2;
	cout <<"the hypotenuse is"<<c<<endl;
	cout <<"the area is"<<s;
	return 0;
}
