#include <bits/stdc++.h>

using namespace std;


int main(void){

	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,c,b;
	cin>>a>>b>>c;
	
	int r1= (-1*b+ sqrt((b*b-(4*a*c))))/(2*a);
	int	r2= (-1*b- sqrt((b*b-(4*a*c))))/(2*a);
	c=(b*b)-(4*a*c);
	if(c<0){
		cout<<"No real root";
	}
	else if (r1==r2){

		cout<<"Two same roots x="<<r1;
	}
	else{
		if(r1>r2){
			cout<<"Two different roots x1="<<r1<<" , x2="<<r2;
		}
		else{
			cout<<"Two different roots x1="<<r2<<" , x2="<<r1;
		}
	}
	

		
	return 0 ;


}
