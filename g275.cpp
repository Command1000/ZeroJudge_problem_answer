#include <bits/stdc++.h>
using namespace std;
int main(void){

int n;
bool a,b,c;
int boxu[7];
int boxd[7];
bool flag=false;
cin>>n;
while(n--){
a=false,b=false,c=false;
flag=false;

for(int i=0;i<7;i++){
	cin>>boxu[i];
}
for(int i=0;i<7;i++){
	cin>>boxd[i];
}


if(((boxu[1]!=boxu[3])&&(boxu[1]==boxu[5]))&&((boxd[1]!=boxd[3])&&(boxd[1]==boxd[5]))){

	a=true;

}
if(boxu[6]==1&&boxd[6]==0){

	b=true;
}
if((boxu[1]!=boxd[1])&&(boxu[3]!=boxd[3])&&(boxu[5]!=boxd[5])){

	c=true;
}

if(!a){
	cout<<"A";
	flag=true;
}
if(!b){
	cout<<"B";
	flag=true;
}
if(!c){
cout<<"C";
flag=true;
}
if(!flag){
	cout<<"None";
}
cout<<'\n';



}





	return 0;
}
