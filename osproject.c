#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char p[10][5],temp[5];
	int i,j,pt[10],pr[10],temp1,n;
	printf("Enter no of girls:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter girl %d name:",i+1);
  		scanf("%s",&p[i]);
		printf("enter process time:");
		scanf("%d",&pt[i]);
		printf("enter no of gifts:");
		scanf("%d",&pr[i]);
	}
  	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pr[i]<pr[j])
			{
				temp1=pr[i];
				pr[i]=pr[j];
				pr[j]=temp1;
				temp1=pt[i];
				pt[i]=pt[j];
				pt[j]=temp1;
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}
	printf("G_name\t P_time\t No.Gifts\n");
	for(i=0;i<n;i++)
	{
	   printf(" %s\t %d\t %d\t\n" ,p[i],pt[i],pr[i]);
	}
	getch();
}


