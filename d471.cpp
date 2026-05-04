#include <bits/stdc++.h>
using namespace std;

void bt(int i){
if(i>1){
	bt(i/2);
}
	cout<<i%2;
}


int main(void){	
int n;

while(cin>>n){
	for(int i=0;i<(1<<n);i++){
		int bitck=(i==0)?1:(int)log2(i)+1;
		for(int j=0;j<(n-bitck);j++){
			cout<<"0";
		}
		bt(i);
	cout<<'\n';
	}

}
	return 0;
}
