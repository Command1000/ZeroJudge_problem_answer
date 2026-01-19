#include <bits/stdc++.h>

using namespace std; 



int main(void){


	ios::sync_with_stdio(0);
	cin.tie(0);


	long long int a,b,x,y;
	
	while(cin>>a){
	y=a/2;

	if(y%2==0){

	x=y/2;
	cout<<x*x<<'\n';

	}

	else{
	
	a=(y-1)/2;
	b=y-a;
	cout<<a*b<<'\n';
	}
	}

	

	return 0 ;
	


}
