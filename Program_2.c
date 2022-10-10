#include<stdio.h>
#include<stdlib.h>
double fibo(int n)
{
	int t1=1,t2=1,f=1;
    if(n>2)
    {
        for(int i=3;i<=n;i++)
	{
		f=t1+t2 ; t1=t2 ; t2=f;		
	}
    }
	return f;
}
void printFibo(int n)
{
	for (int i=1;i<=n;i++)
	printf("%5.0lf",fibo(i));
    printf("\n");
}
int validDate(int d,int m,int y)
{
	int maxD=31;
	if(d<1||d>31||m<1||m>12) return 0;
	if(m==4||m==6||m==9||m==11) maxD=30;
	if (m==2)
    {
        if(y%400==0||(y%4==0&&y%100!=0)) maxD=29;
        maxD=28;
    }
	return d<=maxD;
}

int main()
{
    int choice,n,d,m,y;
    do
    {
        system("cls");
        printf("1-Fibonacci Sequence\n");
        printf("2-Check a date\n");
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
            printFibo(n);
            break;

            case 2: 
                printf("Date: ");scanf("%d",&d);
	            printf("Month: ");scanf("%d",&m);
	            printf("Year: ");scanf("%d",&y);
	            if (validDate(d,m,y))printf("%d/%d/%d is valid\n",d,m,y);
	            else printf("%d/%d/%d is not valid\n",d,m,y);
            break;           
        }
        system("pause");
    }
    while(choice>0 && choice<3);
    return 0;
}
