/*
 * main.c
 *
 *  Created on: 06/03/2018
 *      Author: Jorge Costa
 */


#include <stdio.h>
#include <math.h>
#include <ctype.h>



/*
 * Example 10. Nested switch statement. Try it. Refuse to calculate if the user gives wrong
 * options. Warn him in this case. If could we accept a new figure (square and cube) to calculate
 * its area and volume, respectively? Change the code to implement this extension.
 */

void example_10()
{
  char answer1, answer2;
  float area=0, volume=0, radius, length, width;
  printf("---Main Menu---\nA – area\nB – volume\n");
  scanf(" %c", &answer1 );

  switch(answer1)
  {
  	case 'A':
    	printf("---Area Menu---\nA – rectangle\nB – circle\nC – square\n");
    	scanf(" %c", &answer2 );

    	switch(answer2)//nested switch
    	{
		   case 'A':
				printf("Length:");
				scanf("%f",&length);
				printf("Width:");
				scanf("%f",&width);

				area = length * width;
			  	printf("Area:%f\n", area);
				break;

		   case 'B':
				printf("Radius:");
				scanf("%f",&radius);

				area = 3.141619 * radius * radius;
			  	printf("Area:%f\n", area);
				break;

		   case 'C':
				printf("Length:");
				scanf("%f",&length);

				area = length * length;
			  	printf("Area:%f\n", area);
				break;

			  default:
				  printf("\nInvalid input\n");
    	}

	break;

case 'B':
	  printf("-Volume Menu-\nA – cylinder\nB – sphere\nC – cube\n");
	  scanf(" %c", &answer2 );

	  switch(answer2)
	  {			//nested switch
		  case 'A':
				printf("Length:");
				scanf("%f",&length);
				printf("Radius:");
				scanf("%f",&radius);
				volume = length * 3.141619 *radius * radius;
				printf("Volume:%f\n", volume);
				break;

		  case 'B':
				printf("Radius:");
				scanf("%f",&radius);
				volume = 4/3 * 3.141619 *radius*radius*radius;
				printf("Volume:%f\n", volume);
				break;

		  case 'C':
				printf("Length:");
				scanf("%f",&length);
				volume = length * length * length;
				printf("Volume:%f\n", volume);
				break;

		  default :
			  printf("\nInvalid input\n");
			  break;
	}
	break;

	  default:
		  printf("\nInvalid input\n");
	break;
   }
}

/*
 * Exercise 1. Write a C program to accept an integer and show if it is even or odd (0 is even).
 */

void ex_01()
{
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	//If the result of the mod is zero, it means the number is divided by 2, so it's even.
	if(num % 2) //Alternative condition: ((num%2) == 0), if the number is even the condition will be true.
	{
		printf("The number %d is odd!\n", num);
	}
	else
	{
		printf("The number %d is even!\n", num);
	}
}

/*
 * Exercise 2. Write a C program to accept an integer and show if it is positive,
 * negative or neutral (when it is 0).
 */

void ex_02()
{
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	if(num > 0)
	{
		printf("The number is positive!\n");
	}
	else if(num < 0)
	{
		printf("The number is negative!\n");
	}
	else
	{
		printf("The number is neutral!\n");
	}
}

/*
 * Exercise 3. Write a C program to accept two integers and show the bigger one (if they are equal, show the first).
 */

void ex_03()
{
	int n1, n2;

	printf("Enter two integers, separated by a space: ");
	scanf("%d %d", &n1, &n2);

	if(n1 >= n2) //The condition must be >=, this way if the numbers are equal it will show the first number.
	{
		printf("The higher number is: %d", n1);
	}
	else
	{
		printf("The higher number is: %d", n2);
	}
}

/*
 * Exercise 4. Write a C program to calculate the BMI - Body Mass Index (in Portuguese, Índice de Massa Corporal)
 * which accepts the user height (in cm) and its mass (in kg).
 *
 * Formula:
 * 		Body mass index = mass(kg) / Height²(cm)
 *
 * The program shows the result of this computation and classifies the user in one of the following classes:
 *		Underweight, for BMI less than 18.50 ;
 *	 	Healthy weight, for BMI ∈ [18.50, 25[ ;
 *		Overweight, BMI ∈ [25, 30[;
 *		Obese, BMI greater or equal 30.
 */

void ex_04()
{
	float weight, height, bmi;

	printf("Enter your weight(kg): ");
	scanf("%f", &weight);

	printf("Enter your height(m): ");
	scanf("%f", &height);

	bmi = weight / (height * height);

	if(bmi <= 18.5)
	{
		printf("You are Underweight!\n");
	}
	else if(bmi <= 25)
	{
		printf("You are Healthy weight\n");
	}
	else if(bmi <= 30)
	{
		printf("You are overweight\n");
	}
	else
	{
		printf("You are obese!\n");
	}
}

/*
 * Exercise 5. Write a C program to accept a coordinate point in a XY
 * coordinate system and determine in which quadrant the coordinate point lies.
 */

void ex_05()
{
	int x, y;

	printf("Enter the coordinate x: ");
	scanf("%d", &x);

	printf("Enter the coordinate y: ");
	scanf("%d", &y);

	printf("\nYour coordinate lies on ");

	if(x > 0 && y > 0)
	{
		printf("quadrant  I.\n");
	}
	else if( x < 0 && y > 0)
	{
		printf("quadrant II.\n");
	}
	else if(x < 0 && y < 0)
	{
		printf("quadrant III.\n");
	}
	else if(x > 0 && y < 0)
	{
		printf("quadrant IV.\n");
	}
	else
	{
		printf("origin\n");
	}
}

/*
 * Exercise 6. Write a C program to calculate the root of a Quadratic Equation
 * accepting the variables a, b and c. The program should predicts the following
 * situations:
 *   	No Real solution(imaginary) Test values: a=1,b=1,c=1
 *   	just one solution. 			Test values: a=1,b=2,c=1
 *   	two real solutions.			Test values: a=1,b=3,c=2
 */

void ex_06()
{
	float a, b, c, determinant , root1, root2;


	printf("\tQuadratic Equation\n\n");
	printf("Coefficient a: ");
	scanf("%f", &a);
	printf("Coefficient b: ");
	scanf("%f", &b);
	printf("Coefficient c: ");
	scanf("%f", &c);

	determinant  = (b*b)-4*a*c;

	if(determinant > 0)
	{
		root1 = (-b + sqrt(determinant))/(2*a);
		root2 = (-b - sqrt(determinant))/(2*a);
		printf("\nTwo real solutions\nRoot 1: %f - Root 2: %f", root1, root2);

	}
	else if(determinant == 0)
	{
		root1 = -b/(2*a);
		printf("\nJust one solution\nRoot 1: %f", root1);
	}
	else
	{
		printf("\nNo Real solution (imaginary)\n");
	}
}

/*
 * Exercise 7. Write a program in C to read any weekday number in
 * integer and display weekday name in the word.
 */

void ex_07()
{
	int weekday;

	printf("Choose the weekday (1 to 7): ");
	scanf("%d", &weekday);

	switch(weekday)
	{
		case 1 :
		{
			printf("\nMonday");
			break;
		}
		case 2 :
		{
			printf("Tuesday");
			break;
		}
		case 3 :
		{
			printf("\nWednesday");
			break;
		}
		case 4 :
		{
			printf("\nThursday");
			break;
		}
		case 5 :
		{
			printf("\nFriday");
			break;
		}
		case 6 :
		{
			printf("\nSaturday");
			break;
		}
		case 7 :
		{
			printf("\nSunday");
			break;
		}

		default:
		{
			printf("\nEnter an integer between 1 and 7");
		}
	}
}

/*
 * Exercise 8. Write a C program to accept an integer representing a
 * year and print if it is a leap year.  In the Gregorian calendar three
 * criteria must be taken into account to identify leap years:
 *
 *		The year can be evenly divided by 4;
 *		If the year can be evenly divided by 100, it is NOT a leap year, unless;
 *		The year is also evenly divisible by 400. Then it is a leap year.
 *
 */


void ex_08()
{
	int year;


	printf("Enter a year: ");
	scanf("%d", &year);

	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
			{
				printf("The year %d is a LEAP YEAR!!", year);
			}
			else
			{
				printf("The year %d isn't a LEAP YEAR!!", year);
			}
		}
		else
		{
			printf("The year %d is a LEAP YEAR!!", year);
		}
	}
	else
	{
		printf("The year %d isn't a LEAP YEAR!!", year);
	}
}

/*
 * Exercise 9. Implement a C program that accepts two real numbers and a character
 * (‘+’, ‘-‘, ‘*’, ‘/’, ‘^’) that represents the arithmetic operation to apply
 * over the numbers. Make use of the library function pow(double, double) from math.h
 * for potentiation calculus. Prevent the case, warning the user, where the operation
 * is impossible (division by 0).
 */

void ex_09()
{
	char op;
	float n1, n2, res = 0;
	int valid = 1;

	printf("Enter to real numbers: ");
	scanf("%f %f", &n1, &n2);

	printf("Choose one of the following operations, (+),(-),(*),(/),(^): ");
	scanf(" %c", &op);

	switch(op)
	{
		case '+' :
		{
			res = n1 + n2;
			break;
		}
		case '-' :
		{
			res = n1 - n2;
			break;
		}
		case '*' :
		{
			res = n1 * n2;
			break;
		}
		case '/' :
		{
			if(n2 != 0)
			{
				res = n1 / n2;
			}
			else
			{
				printf("[ERROR] Divided by zero!");
			}
			break;
		}
		case '^' :
		{
			res = pow(n1,n2);
			break;
		}

		default:
		{
			printf("Invalid operation");
			valid = 0;
		}
	}

	if(valid)
	{
		printf("Result: %.2f", res);
	}
}

/*
 * Exercise 11.
 * Write a program to determine whether three positive integers
 *  can be the lengths of the sides of a triangle (remember that
 *   no one side can be longer than the sum of the lengths of the other two sides).
 *
 * 	3,4,5 valid
	5,5,5 valid
	3,3,5 valid
	3,3,6 fail
	3,3,12 fail
	1,1,0 fail
	0,0,0 fail
	-1,0,0 fail
	-1,0,2 fail

 */

void ex_11()
{
	int s1, s2, s3;

	printf("Enter the sides of the triangle: ");
	scanf("%d %d %d", &s1, &s2, &s3);


	if((s1+s2) > s3)
	{
		if((s2+s3) > s1)
		{
			if((s1+s3) > s2)
			{
				printf("Build your triangle!");
			}
			else
			{
				printf("Impossible to build a triangle!");
			}
		}
		else
		{
			printf("Impossible to build a triangle!");
		}
	}
	else
	{
		printf("Impossible to build a triangle!");
	}
}

void ex_11_1()
{
	int s1, s2, s3;

	printf("Enter the sides of the triangle: ");
	scanf("%d %d %d", &s1, &s2, &s3);


	if((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1))
	{
		printf("Build your triangle!");
	}
	else
	{
		printf("Impossible to build a triangle!");
	}
}

/*
 * Exercise 12
 * One method of creating numbers for cards is to add a digit to
 * the original number so that the sum of the digits of the new
 * number is even number. To do this, you need to add a '0' or a '1'
 * to the right of the original number as needed. Assuming that the
 * original numbers have all 4 digits, make a program that allows you to apply this method.
 */

void ex_12()
{
	int num, aux, n1,n2,n3,n4, sum;

	printf("Enter a for digit number: ");
	scanf("%d", &num);

	aux = num;

	n4 = aux%10;
	aux /= 10;
	n3 = aux%10;
	aux /= 10;
	n2 = aux%10;
	aux /= 10;
	n1 = aux%10;

	sum = n1+n2+n3+n4;

	if(sum % 2)
	{
		printf("\nThe number %d isn't even\n", num);
		printf("Adding a 1 to the right...\n");
		num = num * 10 + 1;
	}
	else
	{
		printf("\nThe number %d is even\n", num);
		printf("Adding a 0 to the right...\n");
		num *=10;
	}

	printf("\nFinal number: %d", num);

}

/*
 * Exercise 13.
 * Assume that you have a set of 8 switches, encoded in an 8-bit number.
 * If the number is 11111111(bin), all switches are ON. If it is 11110000(bin),
 * switches 0 to 3 are OFF. Write a program that asks the user if he wants to turn on,
 * turn off, or toggle a switch, then asks the switch number. It then executes the order
 * and shows the new state of the switches.
 *
 */

//Auxiliary function to print an int in binary notation
void decToBinary(unsigned int n)
{
	unsigned int binary[100] = {0};
	int i = 0, j;

	while(n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	for(j = 7 ; j >=0 ; j--)
	{
		printf("%d", binary[j]);
	}

	putchar('\n');
}

void ex_13()
{
	unsigned int op, iState, switches, switchIndex;


	printf("Do you want all the switches off(0) or on(1): ");
	scanf(" %u", &iState);

	if(iState == 0)
	{
		printf("Do you want to, turn on(1) or toggle(3) a switch? ");
		switches =  0b00000000; // or 0x00 or 0
	}
	else
	{
		printf("Do you want to turn off(2) or toggle(3) a switch? ");
		switches =  0b11111111; // or 0xff or 255
	}

	scanf(" %u", &op);

	printf("Which switch (1 to 8) ? ");
	scanf(" %u", &switchIndex);
	--switchIndex;

	printf("switches current state:\n\tDecimal: %d \n\tHex: 0x%02x \n\tBinary: ", switches, switches);
	decToBinary(switches);

	switch(op)
	{
		case 1:
		{
			/*
			 * e.g.
			 * switches = 0 or 0b0000 0000
			 * switchIndex = 3
			 *  1<<(switchIndex) = 0b0000 1000  
			 * 
			 * 0b0000 0000 | 0b0000 1000 = 0b0000 1000
			*/

			switches |= (1<<(switchIndex));
			break;
		}
		case 2:
		{
			/*
			 * e.g.
			 * switches = 255 or 0b1111 1111
			 * switchIndex = 3 
			 *  1<<(switchIndex) = 0b0000 1000  
			 * The complement(~) of  0b0000 0010 is ob1111 0111
			 *
			 *0b1111 1111 & 0b1111 0111 = 0b1111 0111
			*/

			switches &= ~(1<<(switchIndex));
			break;
		}
		case 3:
		{
			/*
			 * e.g.
			 * switches = 0 or 0b0000 0000
			 * switchIndex = 3
			 *  1<<(switchIndex) = 0b0000 1000  
			 *
			 * 0b0000 0000 ^ 0b0000 1000 = 0b0000 1000
			*/

			switches ^= (1<<(switchIndex));
			break;
		}
	}

	printf("\nswitches final state:\n\tDecimal: %d \n\tHex: 0x%02x \n\tBinary: ", switches, switches);
	decToBinary(switches);
}


/*
 *
 * ***************************** Additional Exercises ******************************
 */

/*
 * Exercise X.  Taking exercise 4 and extending it, assume that
 * you give to the user the hypothesis to use the English metric
 * system: so instead of kilograms and meters, the program can also
 * accept  pounds and inches. So the first question to the user will
 * be: International or English system?, and the answer can be a letter:
 * I(i) or E(e). Make use of the standard library function toupper(char) from
 * ctype.h  . Use the following proportion if the user prefer the
 * English metric system:
 *
 */

void ex_x_y()
{
	//declaration part
	char system_type;
	float weight, height, bmi;

	//reading user input
	printf("International or English system I(i) or E(e)?: ");
	scanf("%c", &system_type);

	printf("Enter your weight: ");
	scanf("%f", &weight);

	printf("Enter your height: ");
	scanf("%f", &height);

	//testing if the values are valid
	if((toupper(system_type) == 'I' || toupper(system_type) == 'E') && weight > 0 && height > 0)
	{
		//computing and storing the BMI, based on the chosen system.
		if(toupper(system_type) == 'I')
		{
			bmi = weight / (height * height);
		}
		else
		{
			bmi = (weight * 703) / (height * height);
		}

		(toupper(system_type) == 'I') ? printf("\nSystem:\tInternational") : printf("\nSystem:\tEnglish");
		printf("\nWeight:\t%.2f \nHeight:\t%.2f \n\nBMI: %.2f\n", weight, height, bmi);

		//showing the BMI value and classification
		if(bmi <= 18.5)
		{
			printf("You are Underweight!\n");
		}
		else if(bmi <= 25)
		{
			printf("You are Healthy weight\n");
		}
		else if(bmi <= 30)
		{
			printf("You are overweight\n");
		}
		else
		{
			printf("You are obese!\n");
		}
	}
	else
	{
		printf("\n[ERROR] Given values are not valid");
	}
}


/*
 * Write a program that asks the user a date (day, month, year) between 1/1/2017
 * and 31/12/2018, and determines the date of the next day. The program must validate
 * the inputs and, if they are invalid, warns the user and exits.
 * This project must be submitted to GitHub.
 */

void proj()
{
	int day, month, year, nDays, valid = 1;

	printf("\nEnter the day: ");
	scanf("%d", &day);
	printf("Enter the month: ");
	scanf("%d", &month);
	printf("Enter the year: ");
	scanf("%d", &year);


	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			(day > 31) ?  (valid = 0) : (nDays = 31);
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			(day > 30) ? (valid = 0) : (nDays=30);
			break;

		case 2:
			(day > 28) ? (valid = 0) : (nDays=28);
			break;

	}

	if(valid && (month > 0 && month <= 12) && (year >= 2017 && year <= 2018) && day > 0)
	{
		day++;

		if(day > nDays)
		{
			day=1;
			month++;
		}

		if(month > 12)
		{
			month=1;
			year++;
		}

		printf("\n\nThe next date date is:\t%02d/%02d/%d\n", day, month, year);
	}
	else
	{
		printf("\n\nThe date %02d/%02d/%d is not valid!", day, month, year);
	}
}


int main(void)
{

	//example_10();

	//ex_01();
	//ex_02();
	//ex_03();
	//ex_04();
	//ex_05();
	//ex_06();
	//ex_07();
	//ex_08();
	//ex_09();
	//ex_11();
	//ex_11_1();
	//ex_12();
	ex_13();

	//ex_x_y();

	//proj();

	return 0;
}
