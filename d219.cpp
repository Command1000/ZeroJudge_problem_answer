#include <iostream>
using namespace std;



long long b,p,m;

int main(void){
while(cin>>b>>p>>m){
long long result=1;
	b=b%m;
while(p>0){
	if(p&1){
	result=(result*b)%m;
	}
	b=(b*b)%m;
	p>>=1;
}
cout<<result<<"\n";
}
return 0;


}

