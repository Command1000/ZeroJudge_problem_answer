#include <iostream>

using namespace std;

int main(void){

	ios::sync_with_stdio(0);
	cin.tie(0);

double  a,b,c,d,x;
	cin>>x;
	while(cin>>a>>b>>c>>d,x--){

	if((c/b)==(d/c)){
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(c/b)<<"\n";
	}		
	else{
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+(d-c)<<"\n";
	}

}
	return 0 ; 
}
