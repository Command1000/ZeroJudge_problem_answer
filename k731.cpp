#include <bits/stdc++.h>
using namespace std;
int main(void){


int n;
cin>>n;
int cross=0;
int dot=0;
int L=0;int R=0;int RE=0;
int x1,x2,y1,y2;
vector<pair<int,int> > p(n+1);
for(int i=1;i<=n;i++){
	cin>>p[i].first>>p[i].second;
}
for(int i=0;i<n-1;i++){
x1=p[i+1].first-p[i].first;
y1=p[i+1].second-p[i].second;
x2=p[i+2].first-p[i+1].first;
y2=p[i+2].second-p[i+1].second;

cross=x1*y2-x2*y1;
dot=x1*x2+y1*y2;

if(cross>0){
	L++;
}
if(cross<0){
	R++;
}
if(cross==0&&dot<0){
	RE++;
}

}
cout<<L<<" "<<R<<" "<<RE<<'\n';
	return 0;
}
