#include<iostream>
using namespace std;
int main()
{
  int day;
  
  cout<<"enter a number (1-7)for day"<<endl;
  cin>>day;
  
  switch(day)
  case 1:{
  cout<<"Monday's breakfast  is poha "<<endl;
  break;
  
  case 2:
  cout<<"Tuesday's breakfast is upma"<<endl;
  break;
  
  case 3:
  cout<<"Wednesday's breakfast is dosa "<<endl;
  break;
  
  case 4:
  cout<<"thoursday's breakfast is idli "<<endl;
  
  case 5:
  cout<<"Friday's breakfast is kachori"<<endl;
  break;
  
  case 6:
  cout<<"Saturday's breakfast is samosa "<<endl;
  break;
  
  case 7:
  cout<<"Sunday's breakfast is breadpakoda"<<endl;
  break;
  
  default:
  cout<<"invalid input!"<<endl;
  }
  return 0;
  

  
  
}