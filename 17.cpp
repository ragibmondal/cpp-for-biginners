/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 11:59:15
 ***********************************/
#include<iostream>
using namespace std;
int main(){
   int grade,sum=0;
   for(int i=0;i<3;i++){
    do{
        cout<<"Enter grade "<<i+1<<":";
        cin>>grade;
    } while(grade<1||grade>5);
     sum+=grade;


   }
 cout<<"Sum="<<sum<<endl;
 cout<<"Avg="<<sum/3.0<<endl;
return 0;

}
