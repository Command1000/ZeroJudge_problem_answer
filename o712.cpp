#include <bits/stdc++.h>
using namespace std;
void turn_right(int x,int y);
int nextx=0,nexty=1;
int main(void){
int m,n,k,r,c;
int ct=0;
int ctt=0;
int box[100][100]={0};
cin>>m>>n>>k>>r>>c;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>box[i][j];
	}
}
while(true){
	if(box[r][c]==0){
		break;
	}
	ct+=box[r][c];
	ctt+=1;
	box[r][c]-=1;
	if(ct%k==0){
		turn_right(nextx,nexty);
	}
	while(box[r+nextx][c+nexty]==-1||r+nextx<0||r+nextx==m||c+nexty<0||c+nexty==n){
		turn_right(nextx,nexty);
	}	
	r+=nextx;
	c+=nexty;
}
cout<<ctt;
	return 0;
}
void turn_right(int x,int y){
if(x==1&&y==0){
	nextx=0;
	nexty=-1;
}
else if(x==-1&&y==0){
	nextx=0;	
	nexty=1;
}
else if(x==0&&y==1){
	nextx=1;
	nexty=0;
}
else if(x==0&&y==-1){
	nextx=-1;
	nexty=0;
}
}
