#include <bits/stdc++.h>
using namespace std;


long long ftable[21];
void ft(){
ftable[0]=1;
for(int i=1;i<21;i++){
ftable[i]=i*ftable[i-1];
}
}
int main(void){
ft();
int k;
cin>>k;
while(k--){

string s;
long long n;
cin>>s>>n;
sort(s.begin(),s.end());
string cs="";
for(int i=s.length()-1;i>=0;i--){
	long long index=n/ftable[i];
	n%=ftable[i];
	cs+=s[index];
	s.erase(s.begin()+index);
}
cout<<cs<<'\n';
}

return 0;
}
