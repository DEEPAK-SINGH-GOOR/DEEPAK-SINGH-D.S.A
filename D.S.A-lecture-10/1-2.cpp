#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cout <<"Enter A :";
	cin >> a ;
	cout <<"Enter B :";
	cin >> b ;
	cout <<"Enter C :";
	cin >> c ;
    cout <<"Enter D :";
	cin >> d ;
	cout <<"Enter E :";
	cin >> e ;
	cout <<"Enter F :";
	cin >> f ;
		
	(a>b)
         ?(a>c)
               ?(a>d)
               		?(a>e)
               		     ?(a>f)
               		     		?cout <<"a"
               		     		:cout <<"f"
               		     :(e>f)
               		     		?cout <<"e"
               		     		:cout <<"f"
               		:(d>e)
               			 ?(d>f)
               			 		?cout <<"d"
               			 		:cout <<"f"
               			 :(e>f)
               			 		?cout <<"e"
               			 		:cout <<"f"
               :(c>d)
               		?(c>e)
               			 ?(c>f)
               			 		?cout <<"c"
               			 		:cout <<"f"
               			 :(e>f)
               			 		?cout <<"e"
               			 		:cout <<"f"
               		:(d>e)
               		     ?(d>f)
               		     		?cout <<"d"
               		     		:cout <<"f"
               		     :(e>f)
               		     		?cout <<"e"
               		     		:cout <<"f"
        :(b>c)
               ?(b>d)
          	     	?(b>e)
          	     		 ?(b>f)
          	     		 		?cout <<"b"
          	     		 		:cout <<"f"
          	     		 :(e>f)
          	     		 		?cout <<"e"
          	     		 		:cout <<"f"
          		    :(d>e)
          		         ?(d>f)
          		         		?cout <<"d"
          		         		:cout <<"f"
               		     :(e>f)
               		     		?cout <<"e"
               		     		:cout <<"f"
                :(c>d)          
		  		    ?(c>e)
		  		    	 ?(c>f)
		  		    	 		?cout <<"c"
		  		    	 		:cout <<"f"
		  		    	 :(e>f)
		  		    	 		?cout <<"e"
		  		    	 		:cout <<"f"
				    :(d>e) 
					     ?(d>f)
					     		?cout <<"d"
					     		:cout <<"f"
						 :(e>f)
								?cout <<"e"
								:cout <<"f";

	//	 	  		
}
