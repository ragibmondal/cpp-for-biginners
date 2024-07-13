#include <iostream>
using namespace std;
int main(){
//ternary opararor(sorry for spelling mistake)
 int host,guest;
 cout<<"Host: ";
 cin>>host;
 system("cls");
 for(int i=0;i<4;i++){
    cout<<"Guest:";
    cin>>guest;
    if(host==guest){
        cout<<"Correct"<<endl;
        return 0;
    }
    else{
        cout<<"Wrong"<<endl;
    }
 }
 /*cout<<"Guest:";
 cin>>guest;
 (host==guest)?cout<<"Correct" :cout<<"Failed";*/
 /*if(host==guest){
    cout<<"You are Correct";

 }
 else{

cout<<"Fail!";
 }*/
cout<<"You have used all your attempts"<<endl;
return 0;
}


