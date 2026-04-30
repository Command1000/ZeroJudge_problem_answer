#include <bits/stdc++.h>
using namespace std;
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
vector<int> v;
int x;
while(cin>>x){
auto it = lower_bound(v.begin(), v.end(), x);
v.insert(it, x);
if(v.size()&1){
cout<<v[v.size()/2];
}
else{
cout<<(v[v.size()/2]+v[v.size()/2-1])/2;
}
cout<<'\n';
}
	return 0;
}

