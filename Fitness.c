// Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is 
// X
// X km away from his home.

// If his office is open on 
// 5
// 5 days in a week, find the number of kilometers Chef travels through office trips in a week.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    printf("%d\n",(X+X)*5);
	}
}