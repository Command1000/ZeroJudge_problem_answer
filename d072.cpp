#include <bits/stdc++.h>
using namespace std;
int main (void){
ios::sync_with_stdio(0);
cin.tie(0);
int n,y;
cin>>n;
for(int i=1;i<=n;i++){
	cin>>y;
        if((y%4==0&&y%100!=0)||y%400==0){
                cout<<"Case "<<i<<": "<<"a leap year\n";
        }
        else{
                cout<<"Case "<<i<<": "<<"a normal year\n";
        }

}
return 0 ;

}
