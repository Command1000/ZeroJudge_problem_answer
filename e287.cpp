#include <bits/stdc++.h>
using namespace std;
int main(void){
int n,m;
int min=2147483647;
int ct=0;
bool safe;
int ni,nj;
int logi,logj;
cin>>n>>m;
vector<vector<int> > box(n,vector<int>(m,0));
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>box[i][j];
		if(box[i][j]<min){
			min=box[i][j];
			logi=i;
			logj=j;
		}
	}
}
ct+=box[logi][logj];
box[logi][logj]=-1;
while(1){
	int minn=1000000;
	safe=false;
		if(logi-1>=0&&logi-1<n){
			if(box[logi-1][logj]<minn&&box[logi-1][logj]!=-1){
				minn=box[logi-1][logj];
				ni=logi-1;
				nj=logj;
				safe=true;
			}
		}
		if(logi+1>=0&&logi+1<n){
			if(box[logi+1][logj]<minn&&box[logi+1][logj]!=-1){
				minn=box[logi+1][logj];
              	ni=logi+1;
                nj=logj;
				safe=true;
			}
		}

                
            if(logj+1>=0&&logj+1<m){
				if(box[logi][logj+1]<minn&&box[logi][logj+1]!=-1){
					minn=box[logi][logj+1];
                	ni=logi;
                 	nj=logj+1;
					safe=true;
				}
            }

                
            if(logj-1>=0&&logj-1<m){
				if(box[logi][logj-1]<minn&&box[logi][logj-1]!=-1){
					minn=box[logi][logj-1];
            		ni=logi;
                	nj=logj-1;
					safe=true;
				}
            }
			if(!safe){
			break;
				}
	logi=ni;
	logj=nj;
	box[logi][logj]=-1;	
	ct+=minn;
}
cout<<ct;
return 0;
}
