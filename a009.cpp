#include <bits/stdc++.h>
using namespace std;
int main (void){
string s;
getline(cin,s);
char box[s.length()];
for(int i=0;i<s.length();i++){
	box[i]=s[i]-7;
}
for(int i=0;i<s.length();i++){
	cout<<box[i];
}

	return 0;
}
