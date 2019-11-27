

#include <stdio.h>		// this include any standard input ouput files needed HEADER FILE
#include <math.h>		// this include any standard input ouput files needed HEADER FILE
#define _CRT_SECURE_NO_WARNINGS

int main()		//skeleton program
{
	int side1;	//declared three  variables as sides of triangle
	int side2;
	int side3;

	printf("Please enter 1st side of triangle:\n");		//prompting the user to enter a value at CMD(runtime)
	scanf("%d", &side1);			//Save the value in memory of side1

	printf("Please enter 2nd side of triangle:\n");		//prompting the user to enter a value at CMD(runtime)
	scanf("%d", &side2);			//Save the value in memory of side2

	printf("Please enter 3rd side of triangle:\n");		//prompting the user to enter a value at CMD(runtime)
	scanf("%d", &side3);			//Save the value in memory of side3

	if ((side1 + side2 > side3) || (side1 + side3 > side2) || (side2 + side3 > side1) && (side1 > 0) && (side2 > 0) && (side3 > 0))		// three sides are all greater than 0 and each side less then addition of the other sides 
	{
		printf("This is a valid triangle \n");		//result is this triangle is valid
		if (side1 == side3 && side1 == side2)		//if all sides have same length
		{
			printf("This is a equilateral triangle");		//result is equilateral triangle
		}

		else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2!= side1))	//If two sides have the same length
		{
			printf("\n this is isocless triangle");		//result is isocless triangle
		}
		else if (side1 != side2 && side2 != side3 && side1 != side3)		//If three sides are all different value
		{
			printf("\n This is an scalene triangle ");		//result is scalene triangle
		}

	}

	else     //if input value of three sides are not follow the condition
	{
		printf("this is invalid triangle \n");		//result is invalid triangle
	}
	return 0;		//End
}
















