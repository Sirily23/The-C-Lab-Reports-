/* Question 2
Write a program that prints "Habari Gani" on the screen*/
  
// Preprocessor Directive 
#include <stdio.h>
main (){
	printf(" Habari gani"); //prints out to the screen
}  
 
 Question 3
Write a program that asks the user for their last name and the year of birth. 
At the end it should print on the screen "You are <<the name>>, born in <<year of birth>>"
 
 #include <stdio.h>
 main (){
 	// innitializing variables 
 	int yob;
 	char name[30];
 	printf(" Enter your name:");
 	gets(name) // Takes the name from the user 
 	printf("\n Enter your year of birth:");
 	scanf("%d",&yob); // Takes the year of birth
 	printf(" \nYour name is %s born in %d",name,yob);
 	}
 
 Question 4
 Write a program that asks the user for the length of the side of a square and the program should compute the perimeter of the square and its area.
  The output on the screen should be something like --- "The Area is 24 sq. cm, and the Perimeter is 18cm" (24 and 18 are examples only)
  
  #include <stdio.h>
  main (){
  	//declaring variable 
  	float x;
  	// Gets input from the user 
  	printf("Enter the lengh of the square (in cm):");
  	scanf("%f",x);
  	printf("The Area is %0.2fsq cm and the Perimeter is %0.2fcm",x*x,(4*x));
  }
  
  Question 5
  Write a program that takes from the user the radius of a circle and the program should compute the area of the circle and its circumference.
   The Output on the screen should look like: "The Area is 56 sq. cm and Circumference is 28cm"
 
 #include <stdio.h>
 #define pi 3.142 //Declaring a constant pi
 main (){
 	double x,area,circ_mf;
    // Gets radius from the user	
 	printf("Enter the radius of the circle:");
 	scanf("%d",&x);
 	// Computing the area and the perimeter
	 area=pi*(x*x);
 	circ_mf=(pi*(2*x));
 	printf("The Area is %0.0dsq.cm and the Circumference is %0.0dcm",area,circ_mf);
	  }
  
  Question 6
  Write a program that accepts from the user the values for PRINCIPLE, INTEREST RATE, AND TIME and 
  the program should then compute the Simple Interest.
  
  #include <stdio.h>
  main(){
  	// Declaring the variables 
  	float principle,rate,time,interest;
  	//Gets input from the user 
  	printf("Enter the values of principle(Tsh),rate and time respectively:\n");
  	scanf("%f\t%f\t%f\n",&principle,&rate,&time);
  	interest=(principle*rate*time);
  	printf("Your Simple Interest is %0.2f/= Tsh",interest);
  }
   
   Question 7
Write a Program that checks the age of a child. If the age is below zero, or above 10,
 the program should print "WRONG ENTRY", otherwise it should print "VALID AGE"
 
  #include <stdio.h>
   main(){
   	int yob,age;
   	age=2023-yob;
   	printf("Enter your year of birth :");
   	scanf("%i",&yob);
   	(age<0 || age>10)? (printf("WRONG ENRTY"):(printf("VALID AGE")));
   }
   
   Question 8
Write a program that prompts for a surname from the user and then count the number of characters in the surname. The system 
 should then print to the screen “Your name is 7 characters long”, where 7 is just an example.
 #include <stdio.h>
 #include <ctype.h>
 #include <string.h>
 main(){
 	// Declaring variable 
 	char name[15];
 	// prompt surname from the user 
    printf("Enter your Surname:");
	gets(name);
	// Checks the size of the name
	int i=strlen(name);
    printf("\n Your name  %s is %i long ",name,i);	
 	}
   
 Question 9
 Write a program that accepts from the user their first name, 
 and print out the first name with the first letter capitalized.  
 
 #include <stdio.h>
 #include <ctype.h>
 main(){
 	char first_name[15];
 	printf("Enter your First Name:");
 	scanf("%s",&first_name);
 	toupper(first_name[0]);
 	printf("First name is %s",first_name);
 }
   
 Question 10
 Write a program that accepts from the user a password and check if it is more than 7 characters long. It should print “Sufficient”
  if it is more than 7 characters long or “Insufficient” if it is less than 7 characters long.  

#include <stdio.h>
#include <ctype.h>
#include <string.h>
main (){
	char pass[15];
	// Gets password from the user 
	printf("Enter your passwaord:\n");
	gets(pass);
	// Checks the length of the password
	int a=strlen(pass);
	if (a>10){printf("Sufficient")} else printf("Insuffient");
}   
   
   Question 11
Write a program that uses a switch-case statement to print options for a user of a mobile money application. For 1, the program should print “checking balance”, for 2 it should print “cash transfer”, 
for 3 it should print “paying bills” and for 4 it should print “cash out”   
 #include <stdio.h>
 main (){
 	int no;
    printf("******************************************");
 	printf("\nWelcome to BTS Service");
 	printf(" \n 1.Cheking Balance\n 2.Cash Transer\n 3.Paying Bills\n 4.Cash Out\n");
 	printf("Choose your option\n");
 		scanf("%i",&no);
 	//Declaring switch case 
	 switch (no){
	 	case 1:printf("Checking Balance");
	 	    break;
	 	case 2:printf("Cash Transfer");
		    break;
		case 3:printf("Paying Bills ");
			break;
		case 4:printf("Cash out ");
			break;
		default:printf("Invalid Configaration\n Try Again!"); 
			break;	 }
 }
   
   
Question 12.
Write a C program in which the user enters his/her salary
 and the program computes the relevant tax according to Table 1
 
#include <stdio.h>
 main (){
 	float sal,tax;
 	// promt the user for the value of his/her salary
 	printf(" What is the value of your Salary:");
 	scanf("%f",&sal);
 	
	 // Compute the value of tax for the value of the salary
 	if (sal<=170000) {
	    tax=0; 
	    printf("Your Salary is %0.00f/= \n Tax is %f%\n The tax payable is %0.00f\= ",sal,tax,sal);}
	else if (170000<sal &&sal>=360000){
	    tax=11; 
	    printf("Your Salary is %0.00f/= \n Tax is %f%\n The tax payable is %0.00f/= ",sal,tax,(sal*(tax/100)));}
	else if (360000<sal &&sal>=540000){
     	tax=20; 
	    printf("Your Salary is %0.00f/= \n Tax is %f%\n The tax payable is %0.00f/= ",sal,tax,(sal*(tax/100)));
	}
	else if (540000<sal && sal>=720000){
		tax=25; 
	    printf("Your Salary is %0.00f/= \n Tax is %f%\n The tax payable is %0.00f/= ",sal,tax,(sal*(tax/100)));
	}
	else if (sal>720000){
		tax=30;
	    printf("Your Salary is %0.00f/= \n Tax is %f%\n The tax payable is %0.00f/= ",sal,tax,(sal*(tax/100)));
	}
}
   
 Question 13.
   Write a program that prints a phrase "I LOVE PROGRAMMING" seven times
   
   #include <stdio.h>
   main(){
   	int i;
   	for (i=0; i<7; i++)
   		printf("I LOVE PROGRAMMING");
  }
   
  Question 14 
   Write a program that prints even integers from 3 to 23
   #include <stdio.h>
   main (){
   	int i;/* Innitializing a local variable*/
   	/* Starting loop from 3 to 23*/
	   for (i=3; i<23; i++){
	   if (i%2==1) /* If the value is odd will not be printed out*/
	   continue;
	   		printf("%i\t",i);
   }/* End of loop*/
   }
   
   Question 15
   Write a program that prints even numbers between 10 and 20, inclusively
    #include <stdio.h>
   main (){
   	/* Innitializing a local variable*/
   	   int i;
	/* Starting loop from 10 to 20*/
	   for (i=10; i<=20; i++)
	   {
	   if (i%2==1) /* If the value is odd will not be printed out*/
	   continue;
	   printf("%i\t",i);
       }/* End of loop*/
   }
   
   Question 16
   Write program that prints the sum of the odd numbers between min and max value, where the min and max values are given by the user
  #include <stdio.h>

// Function declarations
int sumofodd(int val1, int val2);
int sumofeven(int val1, int val2);

int main() {
    int min, max, choice;

    // Prompts user for the maximum and minimum values
    printf("Enter minimum value: ");
    scanf("%d", &min);
    printf("Enter maximum value: ");
    scanf("%d", &max);

    // Prompts the user to choose between odd or even
    printf("\nChoose the sum of: \n1. Odd\n2. Even\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("The sum of the odd numbers is %d\n", sumofodd(min, max));
            break;
        case 2:
            printf("The sum of the even numbers is %d\n", sumofeven(min, max));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

// Function to calculate the sum of odd numbers
int sumofodd(int val1, int val2) {
    int sum = 0;
    for (int k = val1; k <= val2; k++) {
        if (k % 2 != 0) {
            sum += k;
        }
    }
    return sum;
}

// Function to calculate the sum of even numbers
int sumofeven(int val1, int val2) {
    int sum = 0;
    for (int k = val1; k <= val2; k++) {
        if (k % 2 == 0) {
            sum += k;
        }
    }
    return sum;
}

	   
 Question 18
 Write a function that takes in a value for radius and returns the area of a circle
 
 #include <stdio.h>
#define pi 3.142

// Declaring  a function
void area(float x);
main (){
	float y;
	printf("Enter the radius of the circle (in cm):");
	scanf("%f",&y);
	area(y);// calling the function
}

// Defining the function
void area(float x){
	float areaof=(pi*(x*x));
	printf("The area of the cicle is %0.00fsq cm",areaof);
}

Question 19
 Write a function that takes the age of a person and checks whether it is between 0 and 100. It should return 1 if the age is within the range
  and 0 if the age is beyond that
 
 #include <stdio.h>
 
 // Declaring a function
 int checkage(int a );
 main(void){
 	int age;
 	printf("Enter your age:");
 	scanf("%d",&age);
 	printf("\n");
 	 if (checkage(age)) {
        printf("Age is within the range (0-100).\n");
    } else {
        printf("Age is outside the range (0-100).\n");
    }
    return 0;
 }
 
 // Defining the function
 int checkage(int a){
 	if  (0<a || a>100){
	     return 1;
		}
 	   else {
     	 return 0;
       }
}
 
 Question 20.
 Write a function that takes in the address of the first address of the array and an integer value for the array size.
  The function should then subtract 7 from each element but should return nothing.
 
 #include <stdio.h>
void takingvalues(int *a,int size);
main (void){
	int list[5];
	takingvalues(list,5);// passing the values
}
// Defining the function
void takingvalues(int *a,int size){
	int b=*a[0]-7;
	int c=size-7;
	//printing the values
	printf("%p\n",b);
	printf("%d",c);
}

Question 21.
Write a function that takes in the address of the first address of the array and an integer value for the array size.
 The function should then multiply each element by two and, later, return the address of the first element.
 #include <stdio.h>
#include <stdlib.h>


//Declaring a function
int takingvalues(int *a,int size);

main(void){
    int array[5];
 takingvalues(array,5);
 }
// Defining the function
int takingvalues(int *a,int  size){
    int b=(a[0] * 2);
    int c=(2* size);
    
	// printing in the screen
    printf("%p\n",b);
    return 0;
}

Question 22.
Write a function that takes in two floating point numbers and an integer for option. If the option supplied by the user is 1
 the program should return the product of the floating-point numbers and if the option is 2, it should return the sum

#include <stdio.h>

//Declaring the function
void inputvalues(float a,float b,float *prod,float *sum);

main (){
	float x,y,prod,sum;
	int choice;
	//Prompts to get inputs from the user 
	printf("Enter the first float  number:");
	scanf("%f",&x);
	printf("\nEnter the second float number: ");
	scanf("%f",&y);
	
	//Passing the values of the varaables and pointers
    inputvalues(x, y,&prod,&sum);
    
    //Prompt  users choice to give output
    printf("\n Enter choice \n1.product\n2.Sum\n");
    scanf("%i",&choice);
    switch (choice){
    	case 1:printf("The product is %f",prod);
               break;
		case 2:printf("The sum is %f",sum);
		       break;
		default:printf("Invalid Choice!");
		       break;	   	
	}
	return 0;
	
}

// Defining the function	
void inputvalues(float a,float b,float *prod,float *sum){
     *prod=(a*b);
     *sum=(a+b);
  }
 
 
 Question 23
 Write a program that accepts the marks for 5 students and stores them in an array.
 
 #include <stdio.h>
 int main(){
 	int marks[5];//Declares an array of marks
 	for (int i=0; i<5; i++){
 		printf("Enter Physics Marks for %i:\n",i+1);
 	    scanf("%i",&marks[i]); //Accepting the marks in an array
	 }
 	
 }
 
 Question 24.
 Write a program that accepts marks for students and stores them in an array. The number of students to be provided by the user
 #include <stdiio.h>
 
 int main(void){
 	int num,marks[num];
 	
 	// Get number of students from the user
 	printf("Enter the number of Students:");
	scanf("%i",&num);
	
	for (int i=0; i<num; i++){
 		printf("Enter Physics Marks for %i:\n",i+1);
 	    scanf("%i",&marks[i]); //Accepting the marks in an array
	 }
 }
 
 Question 25.
 Write a program that accepts marks for students for two subjects and store them in an array. The number of students to be provided by the user
  
#include <stdio.h>

int main(void){
		int num,marks[num][num];
 	
 	// Get number of students from the user
 	printf("Enter the number of Students:");
	scanf("%i",&num);
	
	for (int i=0; i<num; i++){
 		printf("Enter Physics Marks for %i:\n",i+1);
 	    scanf("%i",&marks[i][0]); //Accepting the marks in an array
	 }
	 for (int i=0; j<num; j++){
 		printf("Enter Physics Marks for %i:\n",j+1);
 	    scanf("%i",&marks[i][1]); //Accepting the marks in an array
	 }
	 
 }
}  
 
Question 26 
Write a program, using arrays, that accepts marks of a test from a number of students marks (the number of students to be provided by the user) and deduct 7 from each.
 If the resulting mark for an individual is less than 40, it should set the marks to be 40
  
#include <stdio.h>

int main(void){
		int num,marks[num];
 	
 	// Get number of students from the user
 	printf("Enter the number of Students:");
	scanf("%i",&num);
	
	for (int i=0; i<num; i++){
 		printf("Enter Physics Marks for %i:\n",i+1);
 	    scanf("%i",&marks[i][0]);}
    for (int j=0; j<num; j++){
    	if (marks[j]<40){printf("Your marks is %i\n",marks[j]); 
    	else if(marks[j]>=40){
    	int results	=marks[j]-7;
    		printf("Your marks is %i\n",results);
		    }  
		}
	}
}
 
 Question 27.
 Write a program that accepts marks for students in an array, the size of the array to be given by the user, and compute from the marks, the mean mark, and the average deviation of marks from
the mean. Thus if, for example, the mean was 50, the program computes the difference of each mark and 50 and add these differences and later find their average

#include <stdio.h>
#include <stdlib.h>
// Declaring function for absolute value
int absolute(int a);

int main(void){
	//Prompt the user for number of students
	int num;
	printf("Enter the number of Students:\n");
	scanf("%i",&num);
	
	//Get innput marks for the students 
	int marks[num];
	for (int i=0; i<num; i++){
		printf("Enter the Physics Marks of %i student:\n",i+1);
		scanf("%i",&marks[i]);
	}
	
	// Calculate Mean of the marks
	int sum=0;
	
	for (int k=0; k<num; k++){
	sum += marks[k];}
	float mean=(sum/num);
	printf(" The mean is %0.2f ",mean);
	
	// Computing the deviation from the mean
	int deviation[num],total=0;
	
	for (int j=0; j<num; j++){
		deviation[j]=(marks[j]-mean);
		deviation[j]=absolute(deviation[j]);
		total +=deviation[j];
	}
	//Computing the total deviation and the average
	float average=(float)total/num;
	printf("The total deviation is %i",total);
	printf("\n The Average Deviation is %0.2f ",average);
	return 0;
}
//Defining the function
int absolute(int a){
	if(a<0){
		return -a;
	} else {
    return  a;
}
}

Question 28
Write a program that accepts two numbers, num1 and num2, and swap them using pointers

#include <stdio.h>
// function prototype
void swap(int *a, int *b);

int main (void){
	int x=10;
	int y=20;
	// Before swapping
	printf("The value of x is %i and the value of y is %i\n",x,y);
	// Then Swapping 
	swap(&x,&y);// Pass by reference the values of x and y
	printf("The value of x is %i and the value of y is %i",x,y);
}

// Declaring the function
void swap(int *a, int *b){
	int num=*a;
	*b=*a;
	*b=num;
}

Question 29.


   
   
   
   
   
















   