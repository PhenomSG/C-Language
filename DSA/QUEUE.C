#include<stdio.h>
#define sz 5
	void main()
		{
		int q[sz], r = -1, f = 0, item, ch;
		clrscr();

		for(;;)
		{
		printf(" Enter 1:Insert 2: delete 3: Display 4:exit \n");
		scanf("%d",&ch);
			switch(ch)
				{
				case 1: printf("Enter the Item to be Inserted \n");
					scanf("%d",&item);
					push(q,&r,item);
					break;
				case 2: pop(q,&f,&r);
					break;
				case 3: display(q,f,r);
					break;
				default: exit(0);
				}
		}
		}
// Function to Push
	push(int q[sz], int *r, int item)
		{
		if (*r == sz-1)
		printf(" Queue Overflow, Insertion not Possible \n");
		else
		{
		*r = *r + 1;
		q[*r] = item;
		}
		}
// Function to Pop
	pop(int q[sz], int *f, int *r)
		{
		if (*f > *r)
		printf(" Queue Underflow, deletion not Possible \n");
		else
		{
		printf(" Item deleted is %d \n", q[*f]);
		*f = *f + 1;
		}
		}
// Function to Display
	display(int q[sz], int f, int r)
		{
		int i;

		if ( f> r == -1)
		printf(" Queue is Empty, Display not Possible \n");
		else
		{
		printf(" The content of Stack are \n");
		for(i=f;i<=r;i++)
		printf("s[%d] ===>> %d\n",i,q[i]);
		}
		}
