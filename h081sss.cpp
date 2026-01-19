#include <iostream>
using namespace std;

int main(void){
		




	ios::sync_with_stdio(0);
	cin.tie(0);
			

	int priceIHaveNow;
	int priceEnterNext;
	int netProfit=0;
	int n,d;
	bool iHaveStock=true;

	cin>>n>>d;
	cin>>priceIHaveNow;

	for(int i =1;i<n;i++){
		cin>>priceEnterNext;
		if(priceEnterNext>=priceIHaveNow+d&&iHaveStock==true){
			netProfit+=priceEnterNext-priceIHaveNow;
			priceIHaveNow=priceEnterNext;
			iHaveStock=false;

		}		
		if(priceEnterNext<=priceIHaveNow-d&&iHaveStock==false){
			priceIHaveNow=priceEnterNext;
			iHaveStock=true;
		}



	}


		cout<<netProfit;	

	return 0;
}
