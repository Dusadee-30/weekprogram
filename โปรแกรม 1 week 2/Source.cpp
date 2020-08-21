#include<Stdio.h>
int main()
{ 
	int n;
	printf("please enter yout number : ");
	scanf_s("%d", &n);
	for (int i = 1;i <=n;i++)
	{
		for (int j = 0;j < i;j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}

}