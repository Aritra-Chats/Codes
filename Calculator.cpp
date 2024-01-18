#include<stdio.h>
#include<conio.h>

#define esc 27
#define plus 43
#define minus 45
#define multiply 42
#define divide 47
#define percent 37 

float add(int input1, int input2)
{
    float result = (float)input1+(float)input2;
    return result;
};

float substract(int input1, int input2)
{
    float result = (float)input1-(float)input2;
    return result;
};

float mul(int input1, int input2)
{
    float result = (float)input1*(float)input2;
    return result;
};

float div(int input1, int input2)
{
    float result = (float)input1/(float)input2;
    return result;
};

float perc( int input1, int input2)
{
    float result = (float)input1/(float)input2*100;
    return result;
};

struct calculator
{
    int input1, input2;
    float result;

    float (*calculate_result)(int input1, int input2);
};

int main()
{
    int input1, input2, i=0;
    float result;
    char ch;
    printf("Give a input:");
    scanf("%d", &input1);
    while(i!=1)
    {
        Here:
        printf("Enter the operation(esc to exit):");
        ch = getch();
        switch(ch)
        {
            case esc:
            {
               i=1;
               break;
            }    
            case plus:
            {
              printf("\nGive next input:");
              scanf("%d", &input2);
              struct calculator addition;
              addition.calculate_result = add;
              addition.result = addition.calculate_result(input1, input2);
              result=addition.result;
              input1=result;
              break;
            }
            
            case minus:
            {
              printf("\nGive next input:");
              scanf("%d", &input2);
              struct calculator substraction;
              substraction.calculate_result = substract;
              substraction.result = substraction.calculate_result(input1, input2);
              result=substraction.result;
              input1=result;
              break;
            } 
            
            case multiply:
            {
              printf("\nGive next input:");
              scanf("%d", &input2);
              struct calculator multiplication;
              multiplication.calculate_result = mul;
              multiplication.result = multiplication.calculate_result(input1, input2);
              result=multiplication.result;
              input1=result;
              break;
            }
            
            case divide:
            {
              printf("\nGive next input:");
              scanf("%d", &input2);
              struct calculator division;
              division.calculate_result = div;
              division.result = division.calculate_result(input1, input2);
              result=division.result;
              input1=result;
              break;
            }
            
            case percent:
            {
              printf("\nGive next input:");
              scanf("%d", &input2);
              struct calculator percentage;
              percentage.calculate_result = perc;
              percentage.result = percentage.calculate_result(input1, input2);
              result=percentage.result;
              input1=result;
              break;
            }

            default:
            {
                printf("\ninvalid input\n");
                goto Here;
            }
        }
        printf("Your result is: %d\n", input1);
    }    
return 0;
}