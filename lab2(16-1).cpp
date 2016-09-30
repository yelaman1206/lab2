#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
     double la=sqrt(b*c*((b+c)*(b+c)-a*a))/(b+c);
        if (c=sqrt(a*a+b*b)) 
		cout<<"la="<<la;
	else cout<<"wrong!";
	return 0;
}
