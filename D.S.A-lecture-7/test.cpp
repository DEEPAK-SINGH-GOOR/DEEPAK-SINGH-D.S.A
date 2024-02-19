#include<stdio.h>
main()
{
   int n;
   
   printf("Enter Array Size :"); 
   scanf("%d",&n);
   
   printf("======================\n");
   printf("Enter Array Elements \n");
   printf("======================\n");
   
   int i,a[n],max=0;
   
   for(i=0;i<n;i++)
   {
   	
    	printf("a[%d]=",i);
        scanf("%d",&a[i]);
     
   }
   for(i=0;i<n;i++)
   {
   		if(max<=a[i])
		{
			max=a[i];			   	
		} 
   }
	 	printf("%d",max);
 }
