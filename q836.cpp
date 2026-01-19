#include <iostream>
using namespace std;



int main (void){


	ios::sync_with_stdio(0);
	cin.tie(0);




	int x1,y1,x2,y2,i,j,k;
	i=0;
	
	cin>>k>>x1>>y1>>x2>>y2;
	
	while(k>0){

		




	i+=k;
	if(i%x1==0){
		k-=y1;
	}
	if(i%x2==0){
		k-=y2;
	}

	
	



	}

	cout<<i;

	return 0;



}
