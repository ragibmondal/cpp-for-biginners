#include <iostream>
using namespace std;
int main(){
  //user enters side length of triangle(a,b,c)
  /*program should write out wheather that triangle is equilateral(3 length is same),
  isosceles(two length is same)
  or scalene (all length are diff.)*/
  cout<<"Enter 3 sides of Triangle:\n"<<endl;
  int a,b,c;
  cin>>a>>b>>c;
  if(a==b&&b==c){
    cout<<"This is Equliateral"<<endl;

  }
  else{
    if(a!=b&&b!=c&&c!=a){
        cout<<"This is isosceles"<<endl;
    }
    else{

        cout<<"This is Sceles"<<endl;
    }


  }


return 0;
}



