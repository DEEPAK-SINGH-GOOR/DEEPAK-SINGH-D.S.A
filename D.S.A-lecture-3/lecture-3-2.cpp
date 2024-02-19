#include<iostream>
using namespace std;
main()
{
    int basic,h,d,t,ttotal;
    cout<<"Enter Base Salary:";
    cin>>basic;
	
    h=basic*0.10;
    d=basic*0.05;
    t=basic*0.08;1
    
    ttotal=h+d+t+basic;
    
    cout<<"Base Salary:"<<basic<<endl;
    cout<<"HRA:"<<h<<endl;
    cout<<"DA:"<<d<<endl;
    cout<<"TA:"<<t<<endl;
    
	cout <<"Total :"<<ttotal<<endl;
}

