#include <bits/stdc++.h>
using namespace std;


int main(void){
bool flag=true;
int a,b,c;
cin>>a>>b>>c;

if((a&&b)==c){
	cout<<"AND\n";
	flag=false;
}
if((a||b)==c){
	cout<<"OR\n";
	flag=false;
}
if(a^b==c){
	cout<<"XOR\n";
	flag=false;
}
if(flag){
	cout<<"IMPOSSIBLE\n";
}


	return 0;
}
