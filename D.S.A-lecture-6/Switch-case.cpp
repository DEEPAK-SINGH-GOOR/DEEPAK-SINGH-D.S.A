#include<iostream>
using namespace std;
int main()
{
	int n,a,n2,qty;
	float p=499,s=399,b=199;
	cout<<"1) Enter Pizza    :499\n";
	cout<<"2) Enter Sandwich :399\n";	
	cout<<"3) Enter Burger   :199\n";
	cin >>n;
	
	switch(n)
	{
		case 1:
			  	 cout <<"Enter 1) Margherita Pizza  :499\n";
			  	 cout <<"Enter 2) Pepperoni Pizza   :499\n";
			  	 cout <<"Enter 3) Four Cheese Pizza :499\n";
			  	 cin >> n;
			  	 cout <<"Enter quantity:";
			  	 cin>>n2;
				 qty=p*n2;
				   		 
			  	switch(n)
			  	{
			  	   case 1:
			  	   			cout << "============================" << std::endl;
			  	   	     	cout <<"You Order Margherita Pizza \n";
						 	cout << "============================" << std::endl;
						 	
						 	
							break;	
                  	case 2:
                  			cout << "============================" << std::endl;
			  	   	     	cout <<"You Order Pepperoni Pizza \n";
			  	   	     	cout << "============================" << std::endl;
			  	   	     	
						 	break;	
					case 3:
			  	   	     	cout << "============================" << std::endl;
							cout <<"You Order Four Cheese Pizza \n";
							cout << "============================" << std::endl;
						 	break;		
				
				}	
			break;
		case 2:
			  	 cout <<"Enter 1) Cheese Sandwich :399\n";
			  	 cout <<"Enter 2) Veggie Sandwich :399 \n";
			  	 cout <<"Enter 3) Masala Sandwich :399\n";
			  	 cin >> n;
			  	switch(n)
			  	{
			  		
			  	   case 1:
			  	   			cout << "============================" << std::endl;
			  	   	     	cout <<"You Order  Cheese Sandwich\n";
						 	cout << "============================" << std::endl;
							 break;	
                  	case 2:
                  			cout << "============================" << std::endl;
			  	   	     	cout <<"You Order Veggie Sandwich \n";
			  	   	     	cout << "============================" << std::endl;
						 	break;	
					case 3:
			  	   	     	cout << "============================" << std::endl;
							cout <<"You Order Masala Sandwich\n";
							cout << "============================" << std::endl;
						 	break;		
				}	
		case 3:
			  	 cout <<"Enter 1) Cheese Burger  :199\n";
			  	 cout <<"Enter 2) Veggie Burger  :199\n";
			  	 cout <<"Enter 3) Maharaja Burger:199\n";
			  	 cin >> n;
			  	switch(n)
			  	{
			  		
			  	   case 1:
			  	   			
			  	   			cout << "============================" << std::endl;
			  	   	     	cout <<"You Order  Classic Cheese Burger\n";
						 	cout << "============================" << std::endl;
							 break;	
                  	case 2:
                  			cout << "============================" << std::endl;
			  	   	     	cout <<"You Order Veggie Burger \n";
			  	   	     	cout << "============================" << std::endl;
						 	break;	
					case 3:
			  	   	     	cout << "============================" << std::endl;
							cout <<"You Order Maharaja Burger\n";
							cout << "============================" << std::endl;
						 	break;		
				}						
	}
}
