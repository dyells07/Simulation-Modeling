// 4 digit poker test
#include <stdio.h>
#define TAB_CHISQUARE 9.49
int main()
{
	
	int i,j,k,l,n;
	int four_diff,four_of_a_kind, three_of_a_kind, one_pair, two_pair;
	float CAL_CHISQUARE=0.0;
	float probabilities[5]={0.504, 0.001, 0.036, 0.432, 0.027};
	float expected_frequency[5];
	
	printf("How many numbers did you generate:");
	scanf("%d", &n);
	
	printf("\nEnter the observed frequencies of: \n");
	printf("\nFour different digits:");
	scanf("%d", &four_diff);
	
	printf("\nFour same digits:");
	scanf("%d", &four_of_a_kind);
	
	printf("\nThree of a kind:");
	scanf("%d", &three_of_a_kind);
	
	printf("\nOne Pair:");
	scanf("%d", &one_pair);
	
	printf("\nTwo Pair:");
	scanf("%d", &two_pair);
	
	if ((four_diff+four_of_a_kind+ three_of_a_kind+ one_pair+ two_pair)!=n){
		printf("\nThe sum is not equal to %d",n);
	}
	else {
	
	
	printf("----------------------------------------------------------------------");
	int observed_frequency[5] ={four_diff,four_of_a_kind, three_of_a_kind, one_pair, two_pair}; 
	printf("\nThe Observed frequencies are:\n");
	for(i=0; i<5; i++)
	{
		printf("\t%d", observed_frequency[i]);
	}
	
	printf("\nAnd their respective expected frequencies are:\n");
	for(j=0; j<5; j++)
	{
		
		expected_frequency[j]=probabilities[j]*n;
	}
	
	for(k=0; k<5; k++)
	{
		
		printf("\t%d",(int)expected_frequency[k]);
	}
	
	for(l=0;l<5;l++)
	{
		CAL_CHISQUARE+=
	((
	(observed_frequency[l]-expected_frequency[l])*
	(observed_frequency[l]-expected_frequency[l]))
	/expected_frequency[l]);
	}
		printf("\n----------------------------------------------------------------------");

	printf("\n \n The sum of calculated chi square statistics is : %f ",CAL_CHISQUARE);
	
	printf("\n The tabulated value for chisquare is %f",TAB_CHISQUARE);
	if(CAL_CHISQUARE<= TAB_CHISQUARE){
		printf("\n\nSo,the generated random numbers are independent.");
	}
	else
		printf("\n\nSo,the generated random numbers are not independent.");
	
}
}