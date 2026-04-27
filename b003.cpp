#include <bits/stdc++.h>
using namespace std;
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
int x;
int sum=0;
int i=0;
cin >>x;
x=abs(x);
while (sum<x){
i++;
sum=i*(1+i)/2;
}
while((sum-x)&1){
i++;
sum+=i;
}

cout<<i;

	return 0;
}
