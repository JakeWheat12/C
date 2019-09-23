//Jake Wheat
#include <stdio.h>
#include <string.h>
//c libraries for i/o and string copying


//Main function
int main() {

	//Creates variables for student1
	int student1Age = 12;
	float student1gpa = 1.0;
	char student1Name[50] = "James";
	char student1Class[50] = "Senior";

	//& student2
	int student2Age = 12;
	float student2gpa = 1.0;
	char student2Name[50] = "Charles";
	char student2Class[50] = "Junior";

	//Prints some random values from the array
	printf("First student's age is: %d\n", student1Age);
	printf("Second student's gpa is: %f\n", student2gpa);
	printf("First student's name is: %s \n", student1Name);
	printf("Second student's class is: %s \n", student2Class);
	return 0;
}