//
        // cout<<"Name :";    === This use for printf (output)any int , char etc
        // getline(cin,name); === This use for scanf (input) any int , char etc
        // cout<<name;        === This use for print Enter output any int , char etc
        // cin >>name;        === This use for take input form user int, char,float

// 
#include <iostream>
using namespace std;
main() 
{
  
    string sc,name,age;

    cout<<"Enter Name :";
    getline(cin,name);
    
    cout<<"Enter Age  :";
    getline(cin,age);

    cout<<"School Name :";
    getline(cin,sc); 
   
    cout<<"Name :";cout<<name <<endl;
    cout<<"Age  :";cout<<age <<endl;
    cout<<"School Name :";cout<<sc <<endl;
    return 0;
}
