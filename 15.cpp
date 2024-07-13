
#include <iostream>
using namespace std;
int main(){
  int userPin=123,pin,errorCounter=0;
  do{
    cout<<"Pin:";
    cin>>pin;
    if(pin!=userPin)
        errorCounter++;
  } while(errorCounter<3 && pin!=userPin);
  if(errorCounter<3)
    cout<<"Loading...";
  else
    cout<<"Blocked";

return 0;
}
