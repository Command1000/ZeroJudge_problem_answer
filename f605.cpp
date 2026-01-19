#include <iostream>
#include <algorithm>
using namespace std;


int main(void){


	ios::sync_with_stdio(0);
	cin.tie(0);

	
	int n,d,f,g,h,M,mi;
	int k=0;
	int l=0;
	cin>>n>>d;
	while(n--){
	
	cin>>f>>g>>h;
	M=max({f,g,h});
	mi=min({f,g,h});
	if(M-mi>=d){
		k=k+(f+g+h)/3;
		l=l+1;
	}

	}
	cout<<l<<' '<<k;



	return 0;

}
