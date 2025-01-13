#include<stdio.h>
#include<string.h>
#include<math.h>
void functions()
{
	printf("[print],[squareroot],[raiseto],[multiplicationtable],[p&l],[pythagorustheorem]\n");
}
void square_root()
{
	float square_root_num,square_root_result,square_root_prev_result;
	printf("\nEnter the number you have to find squareroot:");
	scanf("%f",&square_root_num);
	square_root_result = square_root_num * 0.5;
	do
	{
		square_root_prev_result = square_root_result;
        square_root_result = 0.5 * (square_root_result + square_root_num / square_root_result);
	}while (square_root_prev_result - square_root_result > 0.0001);
	printf("\nThe answer of underroot of %f is %f \n",square_root_num,square_root_result);
}
void raise_to()
{
	int raise_to_num1,raise_to_num2;
	printf("Enter the base number:");
	scanf("%d",&raise_to_num1);
	printf("Enter the raise to number:");
	scanf("%d",&raise_to_num2);
	if(raise_to_num2==0)
	{
		printf("\nThe answer of %d raise to %d is 1\n",raise_to_num1,raise_to_num2);
	}
	else if(raise_to_num2==1)
	{
		printf("\nThe answer of %d raise to %d is %d\n",raise_to_num1,raise_to_num2,raise_to_num1);
	}
	else if(raise_to_num2>1)
	{
		int i,raise_to_result=1;
		for(i=1;i<=raise_to_num2;++i)
		{
			raise_to_result=raise_to_result*raise_to_num1;
		}
		printf("The answer of %d raise to %d is %d\n",raise_to_num1,raise_to_num2,raise_to_result);
	}
}
void multiplication_table()
{
	int multiplication_table_num,multiplication_table_start,multiplication_table_end;
	printf("\nEnter the number you want the table:");
	scanf("%d",&multiplication_table_num);
	printf("\nEnter the start number for table:");
	scanf("%d",&multiplication_table_start);
	printf("\nEnter the end number for table:");
	scanf("%d",&multiplication_table_end);
	printf("\nThe Table of %d from %d till %d\n",multiplication_table_num,multiplication_table_start,multiplication_table_end);
	int i;
	for(i=multiplication_table_start;i<=multiplication_table_end;i++)
	{
		int multiplication_table_answer;
		multiplication_table_answer=multiplication_table_num*i;
		printf("\n%d x %d = %d",multiplication_table_num,multiplication_table_start,multiplication_table_answer);
		multiplication_table_start++;
	}
	printf("\n");
}
void pl()
{
	double cost_price,selling_price,total;
	printf("\nEnter the Cost Price:");
	scanf("%lf",&cost_price);
	printf("\nEnter the Selling Price:");
	scanf("%lf",&selling_price);
	total=selling_price-cost_price;
	if(total>0)
	{
		printf("\nIts a profit of amount %.6f\n",total);
	}
	else if(total==0)
	{
		printf("\nThe Selling price and Cost price is same\n");
	}
	else{
		printf("\nIts a Loss of amount %.6f\n",total);
	}
}
void pythagorustheorem()
{
	printf("\nPress 1 to find Hypotenuse\n");
	printf("\nPress 2 to find Base\n");
	printf("\nPress 3 to find Height\n");
	int num;
	double hypotenuse,base,height;
	printf("Enter the number:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("\nEnter the Base:");
		scanf("%lf",&base);
		printf("\nEnter the Height:");
		scanf("%lf",&height);
		hypotenuse=sqrt((base*base)+(height*height));
		printf("\nThe Hypotenuse of Base %.6f and Height %.6f is %.6f\n",base,height,hypotenuse);
		break;
		case 2:printf("\nEnter the Hypotenuse:");
		scanf("%lf",&hypotenuse);
		printf("\nEnter the Height:");
		scanf("%lf",&height);
		base=sqrt((hypotenuse*hypotenuse)-(height*height));
		printf("\nThe Base of Hypotenuse %.6f and Height %.6f is %.6f\n",hypotenuse,height,base);
		break;
		case 3:printf("\nEnter the Hypotenuse:");
		scanf("%lf",&hypotenuse);
		printf("\nEnter the Base:");
		scanf("%lf",&base);
		height=sqrt((hypotenuse*hypotenuse)-(base*base));
		printf("\nThe Height of Hypotenuse %.6f and Base %.6f is %.6f\n",hypotenuse,base,height);
		break;
		default:printf("\nLooks like you have entered wrong! Please try again\n");
		pythagorustheorem();
	}
}
void print()
{
	char str[1000];
	printf("\nEnter whatever you want to type:");
	getchar();
	scanf("%[^\n]", str);
	printf("%s\n",str);
}
int main()
{
	printf("---------------------------------------------WELCOME TO THE VARUN C LIBRARY---------------------------------------------\n");
	printf("\nThis File contains alot of Functions so kindly refer to the book\n");
	int initial_number=1;
	while(initial_number!=0)
	{
		char string[100];
		printf("\n");
		functions();
		printf("\nEnter the function name you want to choose:");
		scanf("%s",string);
		if(strcmp(string,"functions")==0)
		{
			functions();
		}
		else if(strcmp(string,"squareroot")==0)
		{
			square_root();
		}
		else if(strcmp(string,"raiseto")==0)
		{
			raise_to();
		}
		else if(strcmp(string,"multiplicationtable")==0)
		{
			multiplication_table();
		}
		else if(strcmp(string,"p&l")==0)
		{
			pl();
		}
		else if(strcmp(string,"pythagorustheorem")==0)
		{
			pythagorustheorem();
		}
		else if(strcmp(string,"print")==0)
		{
			print();
		}
		else
		{
			printf("\nLooks like you have entered a wrong function kindly retry\n");
		}
	}
	return 0;
}
