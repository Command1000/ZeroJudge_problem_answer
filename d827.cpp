#include <bits/stdc++.h>

using namespace std;

int main(void){



	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int A;
	cin>>A;	
	if(A%12==0){
		cout<<(A/12)*50;
	}
	else if (A<12){
		cout<<A*5;
	}
	else{
		cout<<((A%12)*5)+(((A-(A%12))/12)*50);
	}


	return 0;



	



}





