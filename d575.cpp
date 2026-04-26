#include <bits/stdc++.h>
using namespace std;
int main(void){


long long cx,cy;
long long kx,ky;
long long range;

while(cin>>cx>>cy>>kx>>ky>>range){

if((abs(cx-kx)+abs(cy-ky))<=range){
	cout<<"die\n";
}
else{
	cout<<"alive\n";
}


}


	return 0;
}
