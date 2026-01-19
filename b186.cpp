#include <bits/stdc++.h>
using namespace std;

int main(void){


	ios::sync_with_stdio(0);
	cin.tie(0);

int a,b,c,d,e;

while(cin>>a>>b>>c){


if(a>=10 && c>=2){


d=a/10;
e=c/2;

		if(d==e){


		cout<<a<<" 個餅乾，"<<b+d<<" 盒巧克力，"<<c<<" 個蛋糕。"<<'\n';

		}
		else{
			if(d>e){
				cout<<a<<" 個餅乾，"<<b+e<<" 盒巧克力，"<<c<<" 個蛋糕。"<<'\n';
			}
			else{
				cout<<a<<" 個餅乾，"<<b+d<<" 盒巧克力，"<<c<<" 個蛋糕。"<<'\n';
			}

		}


}

	else{

	cout<<a<<" 個餅乾，"<<b<<" 盒巧克力，"<<c<<" 個蛋糕。"<<'\n';
	}




}
return 0;
}
