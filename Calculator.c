#include <stdio.h>

int main() 
{
    int user_choice;
    printf("\nEnter 1 for operations involving one number");
    printf("\nEnter 2 for operations involving two numbers\n");
    scanf("%d",&user_choice);
    if(user_choice==1)
    {
        int choice;
        printf("\nEnter 1 for square of a number");
        printf("\nEnter 2 for cube of a number");
        printf("\nEnter 3 for checking the given number is odd or even number\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            float a,square;
            printf("Enter a number\n");
            scanf("%f",&a);
            square=a*a;
            printf("The Square of the given number %f is %f",a,square);
            
        }
        else if(choice==2)
        {
            float a,cube;
            printf("Enter a number\n");
            scanf("%f",&a);
            cube=a*a*a;
            printf("The Cube of the given number %f is %f",a,cube);
            
        }
        else if(choice==3)
        {
            int a;
            printf("Enter a number\n");
            scanf("%d",&a);
            if(a%2==0)
                printf("The Given number %d is an even number",a);

            else
                printf("The Given number %d is an odd number",a);
            
        }
        else
            printf("This choice is currently unavailable");
        
        
    }
    else if(user_choice==2)
    {
        int choice;
        printf("\nEnter 1 for addition");
        printf("\nEnter 2 for subtraction");
        printf("\nEnter 3 for multiplication");
        printf("\nEnter 4 for division");
        printf("\nEnter 5 for modulus\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            float a,b,add;
            printf("Enter two numbers\n");
            scanf("%f %f",&a,&b);
            add=a+b;
              printf("The Addition of %f and %f is %f",a,b,add);
        }
        else if(choice==2)
        {
            float a,b,sub;
            printf("Enter two numbers\n");
            scanf("%f %f",&a,&b);
            sub=a-b;
             printf("The Subtraction of %f and %f is %f",a,b,sub);
        }
        else if(choice==3)
        {
            float a,b,mult;
            printf("Enter two numbers\n");
            scanf("%f %f",&a,&b);
            mult=a*b;
            printf("The Multiplication of %f and %f is %f",a,b,mult);
        }
        else if(choice==4)
        {
            float a,b,div;
            printf("Enter two numbers\n");
            scanf("%f %f",&a,&b);
            div=a/b;
             printf("The Division of %f and %f is %f",a,b,div);
        }
        else if(choice==5)
        {
            int a,b,rem;
            printf("Enter two numbers\n");
            scanf("%d %d",&a,&b);
            rem=a%b;
             printf("The Remainder of %d and %d is %d",a,b,rem);
        }
        else
        {
            printf("This choice is currently unavailable");
        }
    }
    else
        printf("This choice is currently unavailable");
 
 return 0;
}