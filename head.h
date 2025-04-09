#include <math.h>

// PALINDROME
int palin(int p){
	int rem,temp,rev=0;
	temp=p;
	while (temp!=0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp/=10;
	}
	return(rev==p);
	
}

//LEAP YEAR 
int leap(int l) {
    if ((l % 4 == 0 && l % 100 != 0) || (l % 400 == 0)) {
        return 1;
    }
    return 0;
}
