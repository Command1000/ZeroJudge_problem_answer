#include <bits/stdc++.h>
using namespace std;
int main(void){

ios::sync_with_stdio(false);
cin.tie(NULL);
int a1,a2,a3,a4;
int b1,b2,b3,b4;
int a11,a22,a33,a44;
int b11,b22,b33,b44;
cin>>a1>>a2>>a3>>a4>>b1>>b2>>b3>>b4;
cin>>a11>>a22>>a33>>a44>>b11>>b22>>b33>>b44;

cout<<a1+a2+a3+a4<<":"<<b1+b2+b3+b4<<'\n';
cout<<a11+a22+a33+a44<<":"<<b11+b22+b33+b44<<'\n';

if(a1+a2+a3+a4>b1+b2+b3+b4&&a11+a22+a33+a44>b11+b22+b33+b44){
	cout<<"Win\n";
}
else if(a1+a2+a3+a4<b1+b2+b3+b4&&a11+a22+a33+a44<b11+b22+b33+b44){
	cout<<"Lose\n";
}
else{
	cout<<"Tie\n";
}




	return 0;
}
