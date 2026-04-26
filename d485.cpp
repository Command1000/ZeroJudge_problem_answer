#include <bits/stdc++.h>
using namespace std;
int main(void){
int a,b;
int ct=0;
cin>>a>>b;
for(int i=a;i<=b;i++){

        if(i%2==0){
                ct+=1;
        }
}
cout<<ct;





        return 0;
}
