#include <bits/stdc++.h>
using namespace std;

int main(void){

int h,w,n;
int a=0;
a=h*w;
//vector<vector <int> > vdraw(a)={0};
cin>>h>>w>>n;
int v[50][50]={0};
int r,c,t,x;


for(int i=0;i<n;i++){
	cin>>r>>c>>t>>x;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if((abs(i-r)+abs(j-c))<=t){
				v[i][j]+=x;
		}
	}
}
}
for(int i=0;i<h;i++){
	for(int j=0;j<w;j++){
		cout<<v[i][j]<<" ";
	}
	cout<<'\n';
}
return 0;
}
