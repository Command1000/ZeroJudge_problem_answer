#include <bits/stdc++.h>
using namespace std;

int main(void){

int x,n;
int pos=0;
int eat=0;
cin>>x>>n;
int box[n];
for(int i=0;i<n;i++){
	cin>>box[i];
}

sort(box,box+n,less<int>());
if(x>box[(n-1)/2]){
pos=box[0];	
	for(int i=0;i<n;i++){
	if(box[i]<x){
		eat+=1;
	}

	}
}
else{
pos=box[n-1];
	for(int i=0;i<n;i++){
		if(x<box[i]){
			eat+=1;
		}
	}

}
cout<<eat<<" "<<pos<<'\n';





	return 0;
}
