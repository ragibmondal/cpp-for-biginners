/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 12:02:19
 ***********************************/
#include <bits/stdc++.h>
using namespace std;
//sum number between m-n
int recursiveSum(int m,int n){
    if(m==n)
    return m;
    return m+recursiveSum(m+1,n);
}
int main(){
int m=1,n=5;
int sum=0;
/*for(int i=m;i<=n;i++){
  sum+=i
}

cout<<"Sum: "<<sum<<endl;*/
cout<<"Sum="<<recursiveSum(m,n);


return 0;
}