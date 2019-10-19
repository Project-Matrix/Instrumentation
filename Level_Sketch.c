#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float th,ov, HH,H,L,LL,lowTap,UpTap,CC,HH1,H1,L1,LL1,HHper,Hper,Lper,LLper,BtTap;
	char ch;
	do 
	{
	printf("\nEnter Tank Height in mm:");
	scanf("%f",&th);
	printf("\nHeight of HH:");
	scanf("%f",&HH);
	printf("\nHeight of H:");
	scanf("%f",&H);
	printf("\nHeight of L:");
	scanf("%f",&L);
	printf("\nHeight of LL:");
	scanf("%f",&LL);
	printf("\nEnter Height of Overflow Nozzle (if required):");
	scanf("%f",&ov);
	if (ov != 0)
	{
		th = ov;
	}
	else
	{
		th = th;
	}		
	
		printf("Height Valid: %.2f",th);
		HHper = (HH * 100)/th;
		Hper = (H * 100)/th;
		Lper = (L * 100)/th;
		LLper = (LL * 100)/th;
		
	if (HHper < 90 && LLper > 10)
		{
			printf("\nAlarm Positions are Valid.");
		}
		else
		{
			printf("\nChange Alarm Positions.");
		}
		
	printf("\nEstimate Lower Tapping Height:");
	scanf("%f",&lowTap);
	printf("\nEstimate Upper Tapping Height:");
	scanf("%f",&UpTap);
	printf("\nEstimate Bottom Pipe(Enter zero if not required):");
	scanf("%f",&BtTap);
	if (BtTap == 0)
	{	
		CC = UpTap - lowTap;
		HH1 = HH - lowTap;
		H1 = H - lowTap;
		L1 = L - lowTap;
		LL1 = LL - lowTap;
	}
	else 
	{
		CC = UpTap + BtTap;
		HH1 = HH + BtTap;
		H1 = H + BtTap;
		L1 = L + BtTap;
		LL1 = LL + BtTap;
	}
	printf("\n C-C Distance is %f",CC);
	HHper = (HH1 * 100)/CC;
	Hper = (H1 * 100)/CC;
	Lper = (L1 * 100)/CC;
	LLper = (LL1 * 100)/CC;
	printf("\nHH percentage: %.2f",HHper);
	printf("\nH percentage: %.2f",Hper);
	printf("\nL percentage: %.2f",Lper);
	printf("\nLL percentage: %.2f",LLper);
	if (HHper < 90 && LLper > 10)
	{
		printf("\nTapping Positions are Valid.");
	}
	else
	{
		printf("\nChange Tapping Positions.");
	}
	printf ("\n\nDo you want to repeat the operation Y/N: ");
		scanf (" %c", &ch);
	}
	while (ch == 'y' || ch == 'Y');
		
	return 0;
}