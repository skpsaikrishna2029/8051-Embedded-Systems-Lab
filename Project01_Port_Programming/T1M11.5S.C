#include<reg51.h>
void main()
{
	unsigned int X;
	while(1)
	{
		for(X=0;X<21;X++)
		{
		TMOD=0X10;	
		TH1=0;
		TL1=0;
		TR1=1;
		while(TF1==0);
		TF1=0;
		TR1=0;
		}
		P1=~P1;
	}
}