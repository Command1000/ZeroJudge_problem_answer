#include <bits/stdc++.h>
using namespace std;
int main(void){

int arr[8]={1,2,3,4,5,6,7,8};
int counter=1;
bool first=true;
bool safe;

do{
safe=true;
for(int i=0;safe&&i<8;i++){
	for(int j=i+1;safe&&j<8;j++){
		if(abs(i-j)==abs(arr[i]-arr[j])){
			safe=false;
		}
	}
}
if(safe){
	if(first){
		first=false;
	}
	else{
	cout<<'\n';
	}
	cout<<counter++<<": ";
	for(auto c:arr){
		cout<<c;
	}


}






}while(next_permutation(arr,arr+8));




	return 0;
}
