#include <iostream>
using namespace std;
int main(void){


int a,b,c,d;
int n;
while(cin>>n){
for(int i=0;i<n;i++){
cin>>a>>b>>c>>d;

if(a==0&&b==1&&c==0&&d==1){
	cout<<"A";
}
if(a==0&&b==1&&c==1&&d==1){
	cout<<"B";
}
if(a==0&&b==0&&c==1&&d==0){
	cout<<"C";
}
if(a==1&&b==1&&c==0&&d==1){
	cout<<"D";
}
if(a==1&&b==0&&c==0&&d==0){
	cout<<"E";
}
if(a==1&&b==1&&c==0&&d==0){
	cout<<"F";
}



}
cout<<'\n';
}

return 0;
}
