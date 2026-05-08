#include <bits/stdc++.h>
using namespace std;
int main(void){

	ios::sync_with_stdio(0);
	cin.tie(0);	
int m;
int x;
int ilog;
int ct=0;
cin>>m;

	while(m--){
	ct=0;
	cin>>x;
		for(int i=2;i<=x;i++){
			ilog=i;
		while(!(ilog%2)){
		ilog/=2;
		}
		while(!(ilog%5)){
		ilog/=5;
		}
		if(ilog==1){		
		ct++;
		}
	}	
	cout<<ct<<'\n';
}
return 0;
}

