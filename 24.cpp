#include <iostream>
using namespace std;
//Function return statement
bool isPrimeNumber(int number){
  bool isPrimeFlag=true;
for(int i=2;i<number;i++){
 if(number%i==0){
    return false;
    /*isPrimeFlag=false;
    break;*/
 }
}
return true;
}


int main(){
int pn=0;
for(int i=1;i<=1000;i++){
bool isPrime=isPrimeNumber(i);
if(isPrime)
   cout<<i<<"is Prime Number\n";

}
/*int number;
cout<<"Number:";
cin>>number;
bool isPrimeFlag =isPrimeNumber(number);
if(isPrimeFlag)
  cout<<"Prime Number"<<endl;
  
  else{
    cout<<"Not Prime";
  }*/

return 0;    
}