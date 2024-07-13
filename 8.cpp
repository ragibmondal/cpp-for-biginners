/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 11:57:33
 ***********************************/
#include <iostream>
using namespace std;
int main(){
  //BMI calculator
  //weight(kg) /hight*hight(m)
  //underweight<18.5
  //Normal Weight 18.5-24.9
  //overweight >25
  float a,b,c;
  cout<<"Please Enter Your Weight:"<<endl;
  cin>>a;
  cout<<"Please Enter Your Hight:"<<endl;
  cin>>b;
  c=a/(b*b);
  cout<<"Your BMI is:"<<c<<endl;
  if(c<=18.5){

    cout<<"You are underweight\n"<<endl;
  }
  else if(c>=18.5 && c<=24.9){


    cout<<"You are Normal"<<endl;
  }
  else if(c>=25){

    cout<<"You are overweighted"<<endl;
  }



return 0;
}
