#include<iostream>
using namespace std;
int main(){
     int a,b;
     cout<<"enter a:";
     cin>>a;
     cout<<"enter b:";
     cin>>b;
     
     cout<<"A | B  "  <<(a|b)<<endl;
     cout<<"A & B  "  <<(a&b)<<endl;
     cout<<"A ^ B "  <<(a^b)<<endl;
     cout<<"~A "<<(~a)<<endl;
     cout<<" A<< 1"<<(a<<1)<<endl;
     cout<<" A>> 1"<<(a>>1)<<endl;

     
     return 0;
     

     
}