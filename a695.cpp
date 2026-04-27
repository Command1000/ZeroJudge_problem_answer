#include <bits/stdc++.h>
using namespace std;
int main(void){

int x;
int y=1;
cin>>x;

for(int i=1;i<x;i++){
if(y==1){
y=__gcd(i,x);
}
else{
	break;
}
}
cout<<x/y;

	return 0;
}
