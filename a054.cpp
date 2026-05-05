#include <bits/stdc++.h>
using namespace std;
int main(void){
string s;
cin>>s;
int dec=0;
int target;
for(int i=0;i<8;i++){
dec+=(s[i]-'0')*(8-i);
}	
dec+=s[8]-'0';
target=(10-dec%10)%10;
string p[10] = {
    "BNZ",    
    "AMW",    
    "KLY",   
    "JVX",    
    "HU",     
    "GT",     
    "FS",     
    "ER",     
    "DOQ",   
    "CIP"     
};

cout<<p[target];

	return 0;
}
