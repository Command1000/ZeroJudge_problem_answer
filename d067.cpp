#include <iostream>
using namespace std;
int main(void){
    long longYear;
    //while(cin>>longYear){
    cin>> longYear;
        if((longYear%400==0)||(longYear%100!=0&&longYear%4==0)){
            cout<<"a leap year\n";}
        else{cout<<"a normal year\n";}//}
return 0;}
