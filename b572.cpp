#include <bits/stdc++.h>
using namespace std;
int main(void){

int n,h1,m1,h2,m2,x;
cin>>n;
while(n--){
cin>>h1>>m1>>h2>>m2>>x;

if(h1*60+m1+x<=h2*60+m2){
	cout<<"Yes\n";
}
else{
	cout<<"No\n";
}

}

	return 0;
}
