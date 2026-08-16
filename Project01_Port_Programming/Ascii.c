#include<reg51.h>
char name []="SAI";
void delay()
{
	unsigned int X;
	for(X=0;X<65000;X++);
}
void main()
{
	while(1)
	{
		int Y;
		for(Y=0;Y<3;Y++);
		{
			P2=name[Y];
			delay();
		}
	}}