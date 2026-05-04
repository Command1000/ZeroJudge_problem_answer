#include <bits/stdc++.h>
using namespace std;
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
int n,t=0,s=0;
int maxs=-2147483648;
int ts=0;
int ct=0;
int tt=0;
int ctn;
cin>>n;
ctn=n;
while(n--){
cin>>t>>s;
	if(s>maxs){
		maxs=s;
		tt=t;
	}
	if(s==-1){
		ct++;
	}
}
        ts=maxs-ctn-ct*2;
	if(ts<0){
		ts=0;
	}

cout<<ts<<" "<<tt<<'\n';
	
	return 0;
}
