#include <iostream>
using namespace std;


int main (void){



	ios::sync_with_stdio(0);
	cin.tie(0);




	int a,b,c,d,e,f;

	int i=0;



	cin>>a>>b>>c;



	while(c--){
		f=0;
		cin>>d;

		e=d%(a+b);

		if(e>=a){
        	f=b-(e-a); 	;
			}
		
	i+=f;	


	
	




	}





	cout<<i;


return 0;
}

