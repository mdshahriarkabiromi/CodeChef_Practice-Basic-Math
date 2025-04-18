// Alice likes numbers which are even, and are a multiple of 7.
// Bob likes numbers which are odd, and are a multiple of 9.
// Alice, Bob, and Charlie find a number 
// A
// A.

// If Alice likes 
// A
// A, Alice takes home the number.
// If Bob likes 
// A
// A, Bob takes home the number.
// If both Alice and Bob don't like the number, Charlie takes it home.
// Given 
// A
// A, find who takes it home.

// Note: You can prove that there is no integer 
// A
// A such that both Alice and Bob like it.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int A;
	    scanf("%d",&A);
	    if(A%2==0 && A%7==0)
	    {
	        printf("Alice\n");
	    }
	    else if(A%2==1 && A%9==0)
	    {
	        printf("Bob\n");
	    }
	    else
	    {
	        printf("Charlie\n");
	    }
	}
}