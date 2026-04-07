#include <bits/stdc++.h>
using namespace std;
int main (void){
int p=0;
int v=0;
int x1,y1,x2,y2,k;
cin>>k>>x1>>y1>>x2>>y2;
p=k;
while(k>0){

if(p%x1==0){
	k-=y1;

}
if(p%x2==0){
	k-=y2;
	
}
if(k>=0){
v=k;
p+=v;
}
}
cout<<p;



	return 0;
}
