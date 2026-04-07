#include <bits/stdc++.h>
using namespace std;
int main(void){
int n;
cin>>n;
int dl=0;
int max=0;
int min=2147483647;
int x[n],y[n];
for(int i=0;i<n;i++){
	cin>>x[i]>>y[i];	
}
for(int i=0;i<n-1;i++){
	dl=abs(x[i]-x[i+1])+abs(y[i]-y[i+1]);
if(dl>max){
	max=dl;

}
if(dl<min){
	min=dl;

}



}
cout<<max<<" "<<min<<'\n';
}
