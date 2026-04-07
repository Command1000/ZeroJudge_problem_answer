#include <bits/stdc++.h>
using namespace std;
int main(void){
int c;
vector<int> box;
int num[10]={0};
for(int i=0;i<3;i++){
	cin>>c;
	box.push_back(c);
	num[c]+=1;
}

sort(num,num+10,greater<int>());
sort(box.begin(),box.end(),greater<int>());
box.erase(unique(box.begin(),box.end()),box.end());
cout<<num[0];
for(auto x:box){
	cout<<" "<<x;
}



	return 0;
}
