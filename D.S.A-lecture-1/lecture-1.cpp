#include<iostream>
using namespace std;
main()
{
    int a,b;
    cout<<"Addition"<<endl;
    cout<<"Enter A:";
    cin >>a;
    cout<<"Enter B:";
    cin >>b;
    int c1 = a + b;
    cout<<endl <<"Subtration"<<endl <<endl;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    int c2 =a-b;
    cout<<endl <<"Multiplication"<<endl <<endl;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    int c3=a*b;
    cout<<endl <<"Division"<<endl <<endl;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    int c4=a/b;
    cout <<endl <<"Percentage"<<endl <<endl;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    int c5=(a*b)/100;
    
    
    
    cout << "The (+) of A and B is: " << c1 << endl;
    cout << "The (-) of A and B is:" <<c2 <<endl;
    
    cout << "The (*) of A and B is: " << c3 << endl;
    cout << "The (/) of A and B is:" <<c4 <<endl;
    
    cout << "The (%) of A and B is: " << c5 << endl;
	
	
//	 // Implicit type
//	 int num1=10;
//	 float num2=5.5;
//	 float ans = num1+num2;
//    // Explicit type
//	 int num1=10;
//	 float num2=5.5;
//	 int ans = num1+(int)num2;
//    	
}

