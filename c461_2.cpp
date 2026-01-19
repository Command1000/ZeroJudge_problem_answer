#include <bits/stdc++.h>
using namespace std;



int main (void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    bool d = false;
    cin>>a>>b>>c;


    if((a&&b)==c){
        d=true;
        cout<<"AND\n";
    }
    if((a||b)==c){
        d=true;
        cout<<"OR\n";
    }
    if(a^b==c){
        d=true;
        cout<<"XOR\n";
    }
    if(d==false){
        cout<<"IMPOSSIBLE\n";
    }

    return 0;
}
