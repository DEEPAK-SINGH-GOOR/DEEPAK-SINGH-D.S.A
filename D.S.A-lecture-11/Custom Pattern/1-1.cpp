#include<iostream>
using namespace std;
main()
{
	int i;
	for(i=1;i<=7;i++)
	{
		/*Printing D*/	
		if(i==1 || i==7)
		{
			cout <<"& & & &";
		}
		else if(i==2 ||i==6)
		{
			cout <<"&       &";
		}
		else
		{
 			cout <<"&        &";	
		}
		
		/*Printing E*/					
		if(i==1 || i==7)
		
			{
				cout <<"         & & & &";
			}
			else if(i==4)
			{
					cout <<"      & & & ";	
			}
			else
			{
					cout <<"      &";
			}
				
		/*Printing E*/	
	    if(i==1 || i==7)
		
			{
				cout <<"        & & & &";
			}
			else if(i==4)
			{
					cout <<"       & & & ";	
			}
			else
			{
					cout <<"             &";
			}		
	    /*Printing P*/	
	    if(i==1||i==4) 
		 {
            cout << "& & & &";
         }
		 else if(i==2||i==3) 
		 {
            cout << "&       &";
        } 
		else if(i==5||i==6||i==7) 
		{
            cout << "&";
        }
    }
        	
//		/*Printing A*/		
//        if(i==1||i==4) 
//		 {
//            cout << "\t\t& & & &";
//         }
//		else 
//		{
//            cout << "\t\t&     &";
//        }	
//        cout << endl;
//    }
		/*Printing K*/
//		for(i=1;i<=7;i++)
//		{
//						
//	      if(i==1) 
//		 {
//            cout << "&     &";
//         }
//		 else if(i==2) 
//		 {
//            cout << "&    &";
//        } 
//		else if(i==3)
//		{
//            cout << "&  &";
//        }
//		else if(i==4)
//		{
//            cout << "& &";
//        }	
//        else if(i==5)
//        {
//        	cout << "&  &";
//		}
//			
//        else if(i==6)
//        {
//        	cout << "&    &";
//		}
//		else if(i==7)
//        {
//        	cout << "&     &";
//		}
//        cout << endl;
//    }
}
/*
& & & &		1
&     &		2
&     &		3
& & & &		4
&     &		5
&     &		6
&     &		7
*/
