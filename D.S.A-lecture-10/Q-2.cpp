#include<iostream>
using namespace std;

void add(int a, int b)
{
     cout <<"Enter Number  1:";
     cin >>a;
     cout <<"Enter Number  2:";
     cin >>b;
     
     cout <<"Ans :",a+b;
}

void sub(int a, int b)
{
     cout <<"Enter Number  1:";
     cin >>a;
     cout <<"Enter Number  2:";
     cin >>b;
     
     cout <<"Ans :",a-b;
}

void mul(int a,int b)
{
     cout <<"Enter Number  1:";
     cin >>a;
     cout <<"Enter Number  2:";
     cin >>b;
     
     cout <<"Ans :",a*b;
}

void div(int a,int b)
{
     cout <<"Enter Number  1:";
     cin >>a;
     cout <<"Enter Number  2:";
     cin >>b;
     
     cout <<"Ans :",a/b;
}

void per( int a,int b)
{
     cout <<"Enter Number  1:";
     cin >>a;
     cout <<"Enter Number  2:";
     cin >>b;
     
     cout <<"Ans :",(a*b)/100;
}
int main()
{
	int a,b,c;
	do{
  
        cout<<"\n\nPress 1) For Addtion (+)\n"; 
        cout<<"Press 2) For Subtract(-)\n";     
        cout<<"Press 3) For Multiply(*)\n";     
    	cout<<"Press 4) For Division(/)\n";     
        cout<<"Press 5) For Percent (%%)\n";     
        cout<<"Press 6) For Exit !! (-)\n\n";
        cout<<"==========================\n";     
        cout<<"Enter Your Choice !!!!! \n";
        
        cin >> c;  
        cout<<"==========================\n";
		switch(c)
		{
			case 1:
				 add(a,b);
				 break;
			case 2:
				 sub(a,b);
				 break;
		    case 3:
				 mul(a,b);
				 break;	 
			case 4:
				 div(a,b);
				 break;
			case 5:
				 per(a,b);
				 break;	 	 	 	 	 
		}
				   
    }while(c!=6);
}
