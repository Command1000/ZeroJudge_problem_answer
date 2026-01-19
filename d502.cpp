#include <bits/stdc++.h>

using namespace std;

int main(void){




	ios::sync_with_stdio(0);
	cin.tie(0);


		
	double a,b,c,d;		
	
	while(cin>>a>>b>>c>>d){	
			
	
	


	
	double emptyC= 37*c;
	double bp = (b*8/64);
	double ap = a;	
	double bpp=ceil(bp);
	 
	if(bpp!=bp){

	double emptyB=(64*bpp)-(8*b);
	}

	
	if(bpp==bp){
	double emptyB=0;
    }
	if(ap<=emptyC){
		ap=0;
	}
	if(ap>=emptyC){
		ap=ap-emptyC;
		double emptyB=(64*bpp)-(8*b);
		if(ap>=emptyB){
			ap=ceil((ap-emptyB)/64);
		}
	
	}

	double app= ap;


	cout<<d+c+bpp+app<<"\n";
	
	

	}

	return 0;
}
