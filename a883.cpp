#include <iostream>
using namespace std;



int main(void){

	ios::sync_with_stdio(0);
	cin.tie(0);


	int s1,e1,s2,e2,s3,e3;



	cin>>s1>>e1>>s2>>e2>>s3>>e3;
			
	if(s1<=s2&&s2<e1||s1<=e2&&e2<s1||s1<=s3&&s3<e1||s1<=e3&&e3<e1||s2<=s1&&s1<e2||s3<=s1&&s1<e3||s3<=e1&&e1<e3){
		cout<<"QQ";
	}
	else{
		cout<<"Happy";
	}
			




		


	








	return 0 ;
}
