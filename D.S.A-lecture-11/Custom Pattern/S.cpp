#include<iostream>
using namespace std;
int main()
{
	int i;
			
		for(i=1;i<=7;i++)
		{
						
	      if(i==1||i==4||i==7) 
		 {
            cout << "& & & &";
         }
         else if(i==5||i==6)
         {
         	cout << "      &";
		 }
		 else
		 {
		 	cout <<"&";
		 }
		cout << endl;
    }
}
/*
& & & & 1
&       2
&       3
& & & & 4 
      & 5 
      & 6 
& & & & 7
*/
