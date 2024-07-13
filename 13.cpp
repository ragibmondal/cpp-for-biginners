/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 11:58:29
 ***********************************/
#include <iostream>
using namespace std;
int main(){
  //count digits of a number
  cout<<"Number:";
  int number;
  cin>>number;
  if(number==0)
    cout<<"You have entered 0\n";
  else{
    if(number<0){
        number=-1*number;
    }
    //1325
    //counter=0
  int counter=0;
  while(number>0){
    number=number/10;
    counter++;
  }
    cout<<"Number Contains "<<counter<<" digits\n";
  }


return 0;
}
