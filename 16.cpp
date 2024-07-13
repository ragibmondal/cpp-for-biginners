/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 11:59:04
 ***********************************/
#include <iostream>
using namespace std;
int main(){
  //The Factorial of a number;
  int number;
  cout<<"Number:";
  cin>>number;
  int  factorial=1;
  /*for(int i=1;i<=number;i++){
    factorial=factorial*i;

  }*/
  for(int i=number;i>=1;i--){
    factorial=factorial*i;
  }
  cout<<number<<"!="<<factorial;

return 0;
}
