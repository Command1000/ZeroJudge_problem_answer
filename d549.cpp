#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main(void){



	ios::sync_with_stdio(0);
	cin.tie(0);


	double  PA,PB,PC,PD;


	while(cin>>PA>>PB>>PC){
		cout<<fixed<<setprecision(2)<<sqrt(pow(PA,2)+pow(PC,2)-pow(PB,2))<<'\n';
	}





return 0 ;

}
