#include <bits/stdc++.h>
using namespace std;
int main(void){

int r,c,n,i,k;
int lost=0;
int col[51]={0};
char t;


cin>>r>>c>>n;
int empty=r*c;
while(n--){
	cin>>t>>i;
	
if(t=='A'){
	k=max({col[i]+1,col[i+1]+1,col[i+2]+1,col[i+3]+1});
	if(k<=c){
	col[i]=col[i+1]=col[i+2]=col[i+3]=k;
	empty-=4;
	}
        else{
                lost++;
        }
}
else if(t=='B'){
        k=col[i]+3;
        if(k<=c){
        col[i]=k;
	empty-=3;
        }
        else{
                lost++;
        }
}		
else if(t=='C'){
        k=max({col[i]+2,col[i+1]+2});
        if(k<=c){
	col[i]=col[i+1]=k;
	empty-=4;
        }
        else{
                lost++;
        }
}
else if(t=='D'){
        k=max({col[i]+1,col[i+1]+3});
        if(k<=c){
	col[i]=col[i+1]=k;
	empty-=4;
        }
        else{
                lost++;
        }
}
else if(t=='E'){
        k=max({col[i]+1,col[i+1]+2,col[i+2]+2});
        if(k<=c){
	col[i]=col[i+1]=col[i+2]=k;
	empty-=5;
        }
	else{
		lost++;
	}
}		


}



cout<<empty<<" "<<lost;




	return 0;
}
