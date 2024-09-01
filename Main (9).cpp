#include<iostream>
using namespace std;
int main()

{
  float a,b,c,d;
  cin>>a>>b;
  a=15;
  b=2.25;
  c=20;
  d=0.75;
  float n=a*b;
  float m=c*d;
  float p=n+m;
  
  cout<<"●No. of notebooks:"<<a<<endl;
  cout<<"cost of each notebook="<<b<<"Rs."<<endl;
  cout<<"Total cost for notebook="<<n<<"Rs."<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"●No. of Pens:"<<c<<endl;
  cout<<"cost of each Pen:"<<d<<"Rs."<<endl;
  cout<<"Total cost for Pens="<<m<<"Rs."<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"●Total cost of the supplies="<<p<<"Rs."<<endl;
  
  return 0;
}