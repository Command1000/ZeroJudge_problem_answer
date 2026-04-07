#include <bits/stdc++.h>
using namespace std;
int main(void){


int n;
int x;
int counter=1;
int logcounter=1;
vector<int> v;
cin>>n;
for(int i=0;i<n;i++){
	cin>>x;
	v.push_back(x);
}

for(int i=0;i<n-1;i++){
	if(v[i]>v[i+1]){
	counter++;
		if(counter>logcounter){
		logcounter=counter;
		}
	}
	else{
		counter=1;
	}


	
}
cout<<logcounter;
return 0;
}
