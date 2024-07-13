/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 12:00:09
 ***********************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int a;
char symbol;
cout<<"Enter the Number:";
cin>>a;
cout<<"Symbol";
cin>>symbol;
for(int i=1;i<=a;i++){
for(int j=1;j<=i;j++){
    cout<<setw(3)<<symbol;
}
cout<<endl;
}

return 0;    
}
