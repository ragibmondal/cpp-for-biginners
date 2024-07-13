#include <iostream>
using namespace std;
int main(){
//reversing number
int number, reversedNumber=0;
cout<<"Number:";
cin>>number;

while(number!=0){
    reversedNumber*=10;
    int lastdigit=number%10;
    reversedNumber+=lastdigit;
    number/=10;
}
cout<< "Reersed:"<<reversedNumber;

return 0;
}

