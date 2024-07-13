#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int a;
char symbol;
cout<<"Length:";
cin>>a;
cout<<"Symbol:";
cin>>symbol;
for(int i=a;i>=1;i--){
for(int j=1;j<=i;j++){
   cout<<setw(3)<<symbol;
}
cout<<endl;
}




 return 0;   
}
