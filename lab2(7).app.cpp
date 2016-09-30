#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double R1,R2,R3;
	cin>>R1>>R2>>R3;
	double R0=(R1*R2+R1*R3+R2*R3)/(R1*R2*R3);
	cout<<"R0="<<R0;
	return 0;
}
