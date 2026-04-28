#include <bits/stdc++.h>



using namespace std;



int main (void){


ios::sync_with_stdio(0);
cin.tie(0);

int ct=0;
int a;
int b;

cin>>a>>b;
for(int i=a;i<=b;i++){

        if((i%4==0&&i%100!=0)||i%400==0){
                ct++;
        }

}


cout<<ct;


return 0 ;

}

