#include<stdio.h>
int isPrime(int n)
{
    if(n<2) return 0;if(n==2) return 1;
	for (int i = 2; i<= (int)n/2+1; i++)
	{
		if(n%i==0) {return 0;break;}
	}
	return 1;
}

void printMinMaxDigit(int n)
{
    int min=9,max=0, digit;
    if(n<10)min=max=n;
	while(n>0)
	{
	digit=n%10;
	n=n/10;
	if(min>=digit) min=digit;
	if(max<=digit) max=digit;
	}
	printf("Min digit: %d\n",min);
	printf("Max digit: %d\n",max);
}

int main()
{
    int choice,n;
    do
    {
        system("cls");
        printf("1-Process primes\n");
        printf("2-Print min, max digit in an integer\n");
        printf("3-Quit\n");
        printf("Select an operation\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            do
            {
                printf("Nhap n:\n");
                scanf("%d",&n);
            } while (n<0);
            if(isPrime(n)) printf("%d  is a prime\n",n);
            else printf("%d is not a prime\n",n);
            break;

            case 2: 
            do
            {
                printf("Nhap n:\n");
                scanf("%d",&n);
            } while (n<0);
            printMinMaxDigit(n);
            break;           
        }
    system("pause");
    }
    while(choice>0 && choice<3);
    return 0;
}