#include <bits/stdc++.h>
using namespace std;
int main(void){

int n,w1,w2,h1,h2;
int total=0;
int water=0;
int curr=0;
int max=0;
int dh=0;
cin>>n>>w1>>w2>>h1>>h2;
for(int i=0;i<n;i++){
cin>>water;
total+=water;
	if(total<w1*w1*h1){
	dh=total/(w1*w1);
	}
	else if(total>=w1*w1*h1 &&total < w1*w1*h1+w2*w2*h2){
		dh=h1+(total-w1*w1*h1)/(w2*w2);
	}
	else{
		dh=h1+h2;
	}
if(dh-curr>max){
	max=dh-curr;
}
curr=dh;
}
cout<<max<<'\n';


	return 0;
}
