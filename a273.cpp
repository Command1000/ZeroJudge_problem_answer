#include <bits/stdc++.h>

using namespace std;



int main(void){


	ios::sync_with_stdio(0);
	cin.tie(0);


int a,b;

while(cin>>a>>b){


if (a==0){
	cout<<"Ok!\n";
}
else if (a!=0 && b==0){
	cout<<"Impossib1e!\n";
}
else if(a%b==0){
	cout<<"Ok!\n";

}

else if (a%b!=0){

	cout<<"Impossib1e!\n";



}


}
return 0;
}



