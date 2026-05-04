#include <bits/stdc++.h>
using namespace std;

void bt(int a){
if(a>1){
bt(a/2);
}
cout<<a%2;
}

int main(void){
int a;
while(cin>>a){
if(a==0){
	cout<<0<<'\n';
}
else{
       	bt(a);
	cout<<'\n';
}
}
	return 0;
}
