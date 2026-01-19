#include <iostream>
using namespace std;

int main(void){

	long long int n,m,a,b,c;
	bool zero=false;
	a=1;
	b=1;
	c=1;
	while(cin>>n>>m){
		if(n==0){
			a=1;
			zero=true;
		}
		if(m==0){
			b=1;
			zero=true;
		}
		if(n-m==0){
			c=1;
			zero=true;
		}
	if(zero==false){
	for(int i=1;i<=n;i++){
		a*=i;
	}
	for(int i=1;i<=m;i++){
	
		b*=i;
	}
	for(int i=1;i<=n-m;i++){
		c*=i;
	}
}
	cout<<a/(b*c)<<"\n";
	}



	return 0;
}
