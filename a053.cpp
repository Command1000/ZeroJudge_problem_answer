#include <bits/stdc++.h>

using namespace std;


int main(void){



	ios::sync_with_stdio(0);
	cin.tie(0);



	int a;


	cin>>a;


	if(a<=10){
	
		cout<<a*6;
	


	}
	else if(a>=11&&a<=20){


		cout<<60+(a-10)*2;


	}
	else if(a>=21&&a<=40){
	
	
		cout<<80+(a-20);

	}
	else{

		cout<<100;

	}




return 0;
}
