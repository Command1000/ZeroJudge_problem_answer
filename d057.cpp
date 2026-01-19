#include <bits/stdc++.h>

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c,d,e,f;

	while(cin>>a>>b>>c>>d){

	if(a==0&&b==0&&c==0&&d==0){
		return 0;
	}
	

	
	if(a!=c&&b!=d){

		e=abs(a-c);
		f=abs(b-d);


		if(e!=0&&e==f){
			cout<<"1\n";
		}
		else {
			cout<<"2\n";
		}
		
}
    else if ((a==c&&b!=d)||(a!=c&&b==d)){
			cout<<"1\n";
    }
	
	else{

		cout<<"0\n";
	}

	}
	return 0;	

}

