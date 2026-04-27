#include <bits/stdc++.h>
using namespace std;
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
int a,b;
int ct=0;
cin>>a>>b;


for(int i=a;i<=b;i++){
	if(!(i&1)){
		ct+=i;
	}
}
cout<<ct;





	return 0;
}
