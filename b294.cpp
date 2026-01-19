#include <iostream>
using namespace std;



int main (void){


	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c,x;

	cin>>a;
	b=0;
	x=0;
	while(cin>>c,++b,a--){
	x=b*c+x;

}

cout<<x;

	

return 0 ;
}
