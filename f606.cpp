#include <bits/stdc++.h>
using namespace std;
int main(void){

int n,m,k;
int cost;
int mincost=2147483647;
cin>>n>>m>>k;
vector<vector<int> > Q(n,vector<int>(m,0));

for(int i=0;i<n;i++){
 	 for(int j=0;j<m;j++){
		cin>>Q[i][j];
	}
}

while(k--){
	cost =0;
	vector<vector<int> > flow(55,vector<int>(55,0));
	vector<int> P(n);
	for(int i=0;i<n;i++){
		cin>>P[i];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		int u=P[i];
		int v=j;

		flow[u][v]+=Q[i][j];
		}
	}
	for(int u=0;u<m;u++){
		for(int v=0;v<m;v++){
			if(u==v){
				cost+=flow[u][v];			
			}
			else{
				if (flow[u][v]<=1000){
					cost+=3*flow[u][v];
				}
				else{
					cost+=3000+(flow[u][v]-1000)*2;
				}
			}
			}
		}
	if(cost<mincost){
		mincost=cost;
	}	



}
cout<<mincost;


	return 0;
}
