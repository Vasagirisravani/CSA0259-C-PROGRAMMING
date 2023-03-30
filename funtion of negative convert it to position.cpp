#include <stdio.h>;
//Recursive function to
//reverse digits of number
int reversDigits(int num)
{
    static int rev_num = 0;
    static int base_pos = 1;
    if(num > 0)
    {
        reversDigits(num/10);
        rev_num += (num%10)*base_pos;
        base_pos *= 10;
    }
    return rev_num;
}
int main()
{
    int number, reversed = 0, tmp;
    //Input a number from user
    printf("Enter any number = ");
    scanf("%d", &number);
    //If number is negative, then convert it to positive
    tmp = (number < 0)?(-1 * number): number;
    //Reverse the number
    reversed = reversDigits(tmp);
    //If number was negative, then convert the reverse to negative
    reversed = (number < 0)? (-1 * reversed): reversed;
    printf("Reverse of no. is %d", reversed);
    return 0;
}

