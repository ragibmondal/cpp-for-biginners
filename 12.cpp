/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 11:58:19
 ***********************************/
#include <iostream>
using namespace std;
int main(){
   //write out all the numbers between 100-500 that are divisible by 3 and 5
    int counter=100;
    while(counter<=500){
        if(counter%3==0&&counter%5==0){
            cout<<counter<<" is divisible\n";

        }
     counter++;
    }


 return 0;
}
