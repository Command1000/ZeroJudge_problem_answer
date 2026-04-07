#include <bits/stdc++.h>
using namespace std;
int main(void){
int n;
int x;
int c;
cin>>n;
int v[n];
for(int i=0;i<n;i++){
	cin>>v[i];

}
sort(v,v+n,less<int>());

c=lower_bound(v,v+n,60)-v;

if(c==n){
	

	for(auto z:v){
		cout<<" "<<z;
	}
	cout<<'\n'<<v[c-1]<<'\n';
	cout<<"worst case";




}
else if(c==0){

	for(auto z:v){
		cout<<" "<<z;
	}
	cout<<'\n'<<"best case";
	cout<<'\n'<<v[c];

}
else{

	for(auto z:v){
		cout<<" "<<z;
	}
	cout<<'\n';
	cout<<v[c-1]<<'\n';
	cout<<v[c];

}



	return 0;

}
