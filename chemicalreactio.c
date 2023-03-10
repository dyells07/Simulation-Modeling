#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i=0;
	float c1[1000],c2[1000],c3[1000];
	float k1=0.025,k2=0.01;//k1 and k2 are constant
    c1[0]=30,c2[0]=15,c3[0]=0;
	float delta=0.001; //small increment of time
    float t=0.0, time=100;
     FILE *fp;
 fp=fopen("lab01.txt","w"); 

	printf("\nC1      C2      C3");
	while(t<=time)  
	{
		printf("\n%f   %f   %f",c1[i],c2[i],c3[i]);
		c1[i+1]=c1[i]+(k2*c3[i]-k1*c1[i]*c2[i])*delta;
		c2[i+1]=c2[i]+(k2*c3[i]-k1*c1[i]*c2[i])*delta;
		c3[i+1]=c3[i]+(2.0*k1*c1[i]*c2[i]-2.0*k2*c3[i])*delta;
	fprintf(fp,"\n%f %f %f",c1[i],c2[i],c3[i]);
    i=i+1;
	t=t+delta;
	}
	 fclose(fp);
  printf("Reaction Simulated");
}