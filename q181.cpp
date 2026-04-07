#include <bits/stdc++.h>
using namespace std;
int main(void){




int g,r,n,t;
int w=0;
cin>>g>>r>>n;

for(int i=0;i<n;i++){
	cin>>t;
if(t%(g+r)>=g){
	w+=(r-(t%(g+r)-g));
}


}
cout<<w<<'\n';

	return 0;
}
