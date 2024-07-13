/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 12:02:30
 ***********************************/
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
if(n==0)
return 1;
return n*factorial(n-1);


}


int main(){
int n;
cin>>n;
cout<<"Factorial: "<<factorial(n);
return 0;


}