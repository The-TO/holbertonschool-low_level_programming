#include <stdio.h>
 int main (void)
 {
	int choice = 1;
	/**
	 * int A = 0;
	 * int B = 0;
	 * int result = 0;
	 */
	
	
	printf ("Simple Calculator\n");
	while (choice != 0)
	{
		printf ("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
		printf ("choice ?\n");
		scanf ("%d", &choice);
		if(choice == 0)
		{
			printf("bye!");
		}
		while (choice > 4)
		{
			printf("Invalid choice\n");
			return (0);
		}
		if (choice == 1)
		{
			printf("choice: 1\n");
			int A;
			printf("A: ");
			scanf ("%d", &A);
			
			int B;
			printf("B: ");
			scanf ("%d", &B);
			
			
			printf ("Result: %d\n", A + B);

		}
		
	}
	
	return (0);
 }
