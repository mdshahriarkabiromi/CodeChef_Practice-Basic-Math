#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int sum=0;
	    while(n != 0)
	    {
	        int d = n%10;
	        sum+=d;
	        n /=10;
	    }
	    printf("%d\n",sum);
	}
}