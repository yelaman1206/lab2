#include<iostream>
#include<cmath>

using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	double G=sqrt(abs(a*b));
	double A=abs((a*b)/2);
	cout <<"the arithmetic mean is"<<A<<endl;
	cout <<"the geometric mean is"<<G;
	return 0;
}
