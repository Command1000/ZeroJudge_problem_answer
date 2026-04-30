#include <bits/stdc++.h>
using namespace std;
int main(void){

int a,b,N;
int xint;
int xremain;
int x;
while(cin>>a>>b>>N){
vector<int>xtemp;
xint=a/b;
xremain=a%b;

for(int i=0;i<N;i++){
	x=xremain*10/b;	
	xtemp.push_back(x);
	xremain=xremain*10%b;
}
cout<<xint<<".";
for(auto c:xtemp){
	cout<<c;
}
cout<<'\n';
}
	return 0;
}
