#include <bits/stdc++.h>
using namespace std;
int main(void){
int n;
int counter=0;
string s;
string smin="";
int min=2147483647;
bool box[26]={0};
cin>>n;
for(int i=0;i<n;i++){
int box[26]={0};
	counter=0;
	cin>>s;
	for(char c:s){
		if(!box[c-'A']){
		box[c-'A']=1;
		counter++;
		}
	}
	if(counter<min||(counter==min&&s<smin)){
		min=counter;
		smin=s;
	}


}
cout<<smin<<'\n';
	return 0;
}
