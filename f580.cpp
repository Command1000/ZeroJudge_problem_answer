#include <bits/stdc++.h>
using namespace std;
int main(void){

int dice[21][6]={
	{1,2,3,4,5,6}
};
int n,m,a,b;


cin>>n>>m;


for(int i=1;i<=n;i++){
	for(int j=0;j<6;j++){
		dice[i][j]=dice[0][j];
	}
}
for(int z=0;z<m;z++){
	cin>>a>>b;
		if(a>=0&&b>=0){
			for(int j=0;j<6;j++){
				swap(dice[a][j],dice[b][j]);
			}
		}

		if(b==-1){
			swap(dice[a][0],dice[a][2]);
			swap(dice[a][2],dice[a][5]);
			swap(dice[a][5],dice[a][3]);
		}
		if(b==-2){
			swap(dice[a][0],dice[a][4]);
			swap(dice[a][4],dice[a][5]);
			swap(dice[a][5],dice[a][1]);
		}
	}


for(int x=1;x<=n;x++){
	cout<<dice[x][0]<<" ";
}

	return 0;
}
