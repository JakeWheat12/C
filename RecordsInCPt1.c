//Jake Wheat
#include <stdio.h>
#include <string.h>
//c libraries for i/o and string copying

//This is the student structure that has:
//		*int variable for age,
//		*float for gpa
//		*and 2 arrays of characters to represent
//		*strings for both names and class year

struct student
{
	int age;
	float gpa;
	char name[50];
	char class[50];
};

//Main function
int main() {
	//Initialize the 2 students using a array of structs
	struct student students[1];
	int i = 0;

	//Initialize each value for students[0]
	printf("Enter First students age: \n");
	scanf("%d", &students[0].age);
	printf("Enter First students gpa: \n");
	scanf("%f", &students[0].gpa);
	printf("Enter First students name: \n");
	scanf("%s", &students[0].name);
	printf("Enter First students class: \n");
	scanf("%s", &students[0].class);

	//& students[1]
	printf("Enter Second students age: \n");
	scanf("%d", &students[1].age);
	printf("Enter Second students gpa: \n");
	scanf("%f", &students[1].gpa);
	printf("Enter Second students name: \n");
	scanf("%s", &students[1].name);
	printf("Enter Second students class: \n");
	scanf("%s", &students[1].class);

	//Prints some random values from the array
	printf("First student's age is: %d\n", students[0].age);
	printf("Second student's gpa is: %f\n", students[1].gpa);
	printf("First student's name is: %s \n", students[0].name);
	printf("Second student's class is: %s \n", students[1].class);
	return 0;
}