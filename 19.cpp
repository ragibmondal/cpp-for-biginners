/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 11:59:57
 ***********************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int height,width;
cout<<"Height:";
cin>>height;
cout<<"Width:";
cin>>width;
char symbol;
cout<<"Symbol:";
cin>>symbol;
for(int h=0;h<height;h++){
 for(int w=0;w<width;w++ ){
cout<<setw(3)<<symbol;
 }
 cout<<"\n";

}


return 0;    
}