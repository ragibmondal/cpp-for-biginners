#include <bits/stdc++.h>
using namespace std;
template<typename T>
void Swap(T& a,T& b){
int temp=a;
a=b;
b=temp;

}
int main(){
   int a=5,b=7;
   cout<<a<<" - "<<b<<endl;
   Swap<int>(a,b);
   cout<<a<<" - "<<b<<endl;
   char c='c',d='d';
   cout<<c<<"-"<<d<<endl;
   Swap<char>(c,d);
   cout<<c<<"-"<<d<<endl;
return 0;
}