#include <bits/stdc++.h>
using namespace std;
int main(void){
int a1,b1,c1;
int a2,b2,c2;
int n;
int sum=0;
int max=-2147483648;
cin>>a1>>b1>>c1>>a2>>b2>>c2>>n;
for(int i=0;i<=n;i++){

sum=a1*(n-i)*(n-i)+b1*(n-i)+c1+a2*(i)*(i)+b2*i+c2;

if(sum>max){
	max=sum;
}
}
cout<<max;

	return 0;
}
