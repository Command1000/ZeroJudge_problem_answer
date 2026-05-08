#include <bits/stdc++.h>
using namespace std;
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
int n,lm,relm;
vector<int> vlm;
cin>>n;
if(n<2){
	cout<<"You are too black!";
	return 0;
}
while(n--){
cin>>lm;
vlm.push_back(lm);
}
cin>>relm;
sort(vlm.begin(),vlm.end());

if(vlm[1]<=relm){
cout<<"You are too black!";
return 0;
}
if(vlm[1]-vlm[0]<=0&&vlm[1]-1>=relm){
	cout<<1;
	return 0;
}
if((vlm[1]-(relm-vlm[0]))>=relm){
	cout<<relm-vlm[0];
}
else{
	cout<<"You are too black!";
}
return 0;
}
