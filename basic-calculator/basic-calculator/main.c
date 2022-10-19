#include <stdio.h>
#include <stdlib.h>

int main()
{

int scm;
float num1, num2;

printf("First number: ");
scanf("%f",&num1);

printf("Second number: ");
scanf("%f",&num2);

printf("Please Choose: 1.Plus 2.Minus 3.Times 4.Divided By   ");
scanf("%d",&scm);

if(scm==1){
printf("Result: %.2f",num1+num2);
}
else if(scm==2){
printf("Result: %.2f",num1-num2);
}
else if(scm==3){
printf("Result: %.2f",num1*num2);
}
else if(scm==4){
printf("Result: %.2f",num1/num2);
}
else{
printf("Please try again");
}

return 0;
}
