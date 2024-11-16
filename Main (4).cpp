#include <iostream> 
using  namespace  std ; 
void  checkAge ( int  age) { 
if  (age <  0 ) { 
throw  "Invalid age: Age cannot be negative!" ; 
}  else  { 
cout  <<  "Valid age: "  << age <<  " years"  <<  endl ; 
} 
} 
int  main () { 
int  age; 
cout  <<  "Enter your age: " ; 
cin  >> age; 
try  { 
checkAge(age); 
}  catch  ( const  char * e) { 
cout  <<  "Exception: "  << e <<  endl ; 
} 
return  0 ; 
}