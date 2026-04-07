#include <bits/stdc++.h>
using namespace std;
int main(void){

string s;
cin>>s;

int odd=0;
int even=0;
int dec=0;
for(int i=0;i<s.length();i++){

dec=s[i]-'0';
if((i+1)&1){
	odd+=dec;
}
else{
	even+=dec;
}

}
cout<<abs(odd-even)<<'\n';






return 0;

}
