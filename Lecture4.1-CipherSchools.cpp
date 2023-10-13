#include<iostream>
using namespace std;
int main(){
   int a,b;
   int c,d;
   cout<<"input 4 integers a,b,c and d";
   cin>>a;
   cin>>b;
   cin>>c;
   cin>>d;
   //statement: a>b
   cout<<(a>b && c>d );
   cout<<(a>b || c>d );
   //c++ interprets true as 1
   //c++ interprets false as 0
    return 0; 
    
}