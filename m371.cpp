#include <bits/stdc++.h>
using namespace std;
int main(void){

ios::sync_with_stdio(false);
cin.tie(NULL);
int box[25][45]={0};
int n,m;
int ct=0;
bool stay=false;
cin>>n>>m;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	cin>>box[i][j];
	}
}
while(!stay){
	stay=true;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(box[i][j]==-1){
				continue;
			}
			int ctv=box[i][j];
			
		      for(int k=j+1;k<m;k++){
			      if(box[i][k]==-1){
				      continue;
			      }
			      if(box[i][k]==ctv){
				      ct+=ctv;
				      box[i][j]=-1;
				      box[i][k]=-1;
			      	      stay=false;
			      }
			      break;
		      	}
		        if(box[i][j]==-1){
                                continue;
                        }
               
                      for(int k=i+1;k<n;k++){
                              if(box[k][j]==-1){
                                      continue;
                              }
                              if(box[k][j]==ctv){
                                      ct+=ctv;
                                      box[i][j]=-1;
                                      box[k][j]=-1;
                                      stay=false;
                              }
                              break;
                      }
		}
	}
}
cout<<ct;

	return 0;
}
