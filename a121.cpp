#include <bits/stdc++.h>
using namespace std;
int main(void){

int a,b;
int ct;
bool flag;
while(cin>>a>>b){
	ct=0;
	for(int i=a;i<=b;i++){
		flag=false;
		if(i<2){
			flag=true;
			continue;
		}
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				flag=true;
				break;
			}
		}
		
		if(!flag){
			ct++;
		}
	}

cout<<ct<<'\n';

}
	return 0;
}
