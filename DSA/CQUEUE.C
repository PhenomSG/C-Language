#include<stdio.h>
#define sz 5
	void main()
		{
		int q[sz], r = -1, f = 0, *count=0,item, ch;
		clrscr();

		for(;;)
		{
		printf(" Enter 1:Insert 2: delete 3: Display 4:exit \n");
		scanf("%d",&ch);
			switch(ch)
				{
				case 1: printf("Enter the Item to be Inserted \n");
					scanf("%d",&item);
					push(q,&r,&count,item);
					break;
				case 2: pop(q,&f,&count);
					break;
				case 3: display(q,f,count);
					break;
				default: exit(0);
				}
		}
		}

// Function to Push
	push(int q[sz], int *r, int *count,int item)
		{
		if (*count == sz)
		printf(" Circular Queue Overflow, Insertion not Possible \n");
		else
		{
		*r = (*r + 1) % sz;
		q[*r] = item;
		*count = *count+1;
		}
		}

// Function to Pop
	pop(int q[sz], int *f, int *count)
		{
		if (*count == 0)
		printf(" Circular Queue Underflow, deletion not Possible \n");
		else
		{
		printf(" Item deleted is %d \n", q[*f]);
		*f = (*f + 1) % sz;
		*count = *count - 1;
		}
		}
// Function to Display
	display(int q[sz], int f, int count)
		{
		int i,j;

		if ( count == 0)
		printf(" Circular Queue is Empty, Display not Possible \n");
		else
		{
		printf(" The content of Circular Queue are \n");
		j = f;
		for(i=1;i<=count;i++)
		{
		printf("s[%d] ===>> %d\n",j,q[j]);
		j = (j+1) % sz;
		}
		}
		}









