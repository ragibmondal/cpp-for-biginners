/***********************************
 * author: Md Ragib Hasan
 * date: 2024-07-13 12:01:49
 ***********************************/
#include <bits/stdc++.h>
using namespace std;
//ATM Application
//cheak Balance
//Deposite money
//withdrowal Money 1
//Show Manue
void showMenu(){
    cout<<"*****MENU*****"<<endl;
   cout<<"1.Cheak Balance"<<endl;
   cout<<"2.Deposite"<<endl;
   cout<<"3.Withdraw"<<endl;
   cout<<"4.Exit"<<endl;
   cout<<"**************"<<endl;
}

int main(){
    int option;
    double balance=500;
    do{
    showMenu();
    cout<<"Option:";
    cin>>option;
    system("cls");
    switch(option){
        case 1:cout<<"Balance is:"<<balance<<"$"<<endl;break;
        case 2:cout<<"Deposite Amout:";
        double depositeAmount;
        cin>>depositeAmount;
        balance+=depositeAmount;
        break;
        case 3:cout<<"Withdrow Amount:";
        double withdrowAmount;
        cin>>withdrowAmount;
        if(withdrowAmount<=balance)
        balance-=withdrowAmount;
        else cout<<"Not Enough Money";
        break;
        default:
                cout << "Invalid option. Please try again." << endl;
    }
    cout<<endl;
    }while(option!=4);

    return 0;
}