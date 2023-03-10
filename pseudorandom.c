// random number generation 
#include<stdio.h>
//#include<conio.h>
int main()
{
	int x0,x1,x2,a,c,m; /*xo=seed, x1=next random number  (but for arithmetic, x1 is the
	 2nd seed & x2 is next random number,a=constant multiplier, c=increment, m=modulus */
	int i,n,num, method; 
	int array[20]; //to store the random numbers generated 
	printf("Choose the method:\n");
	printf("\n1.Linear congruential Method");
	printf("\n2.Arithmetic congruential Method\n");
	scanf("%d",&method);
	switch(method)
	{	
	case 1:
	printf("\nEnter the seed value x0: ");
	scanf("%d",&x0);
	printf("\nEnter the modulus m: ");
	scanf("%d",&m);
	printf("\nHow many random numbers you want to generate: ");
	scanf("%d",&n);
    printf("\nWhich method you want to perform");
	printf("\n1.Mixed congruential");
	printf("\n2.Additive congruential");	
	printf("\n3.Multiplicative congurential\n");
	scanf("\n%d",&num);
	switch(num)
	{
		
		case 1:
			printf("\nEnter the constant multiplier a: ");
           	scanf("%d",&a);
           	
	    	printf("\nEnter the increment c: ");
	        scanf("%d",&c);	
	        
	       	if(c!=0)
	        {
		        for(i=1;i<=n;i++) // loop to generate random numbers
	        {
		         x1=(a*x0+c) %m; 
		         array[i]=x1;
		         x0=x1;
	        }
	
	        printf("\nThe generated random numbers are: ");
	        for(i=1;i<=n;i++)
	         {
		    printf("\nX%d=%d",i,array[i]);
		    printf("\t");
        	 } 
	        }
	        else
	        printf("for mixed congruential value of c cannot be zero");break;
		case 2:
			printf("\nEnter the increment c: ");
	        scanf("%d",&c);
			  for(i=1;i<=n;i++) 
	        {
		         x1=(1*x0+c) %m; 
		         array[i]=x1;
		         x0=x1;
	        }
	
	        printf("\nThe generated random numbers are: ");
	        for(i=1;i<=n;i++)
	         {
		    printf("\nX%d=%d",i,array[i]);
		    printf("\t");break;
        	 } 	  
	 
		case 3:
			printf("\nEnter the constant multiplier a: ");
	        scanf("%d",&a);
	
		    for(i=1;i<=n;i++) 
	       {
		     x1=(a*x0) %m; 
		     array[i]=x1;
		     x0=x1;
	       }
	
	        printf("\nThe generated random numbers are: ");
	        for(i=1;i<=n;i++)
	       {
		     printf("\nX%d=%d",i,array[i]);
	       	 printf("\t");
	       }
		   case 4:
			printf("Enter the seed value x1: ");
	scanf("%d",&x1);
	
		    for(i=1;i<=n;i++) 
	       {
		     x1=(a*x0) %m; 
		     array[i]=x1;
		     x0=x1;
	       }
	
	        printf("\nThe generated random numbers are: ");
	        for(i=1;i<=n;i++)
	       {
		     printf("\nX%d=%d",i,array[i]);
	       	 printf("\t");
	       }break;
		default :
		   printf("Please Enter 1-4");
	}
	break;
	
	case 2:
		printf("\nEnter the seed value x0: ");
	scanf("%d",&x0);

	
	printf("\nEnter the seed value x1: ");
	scanf("%d",&x1);
	
	printf("\nEnter the modulus m: ");
	scanf("%d",&m);
		
	printf("\nHow many random numbers you want to generate: ");
	scanf("%d",&n);
	
	
	    for(i=1;i<=n;i++) 
	        {
		         x2=(x0+x1) %m; 
		         array[i]=x2;
		         x0=x1;
		         x1=x2;
	        }
	
	        printf("\nThe generated random numbers are: ");
	        for(i=1;i<=n;i++)
	         {
		    printf("\nX%d=%d",i+1,array[i]);
		    printf("\t");
        	 } 
        	 break;
	default:
	printf("Please Enter 1-2");
	//return switch(method);
}
	return 0;
	getch();
}