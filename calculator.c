#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int ac, char* av[]){
        
        // int num1, num2;
        // float result;
        // char o;

        // scanf("%d%c%d", &num1, &o, &num2);

        // if (o =='+'){
        //         result = num1 + num2;
        //         printf("%f\n", result);
        // } else if (o == '-') {
        //         result = num1 - num2;
        //         printf("%f\n", result);
        // } else if (o == '*') {
        //         result = num1 * num2;
        //         printf("%f\n", result);
        // } else if (o == '/') {
        //         while (num2 == 0){
        //                 printf("Cannot divide by 0, enter new number:\n");
        //                 scanf("%d", &num2);
        //         }
        //         result = num1 / num2;
        //         printf("%f\n", result);
        // } else {
        //         printf("Invalid expression.\n");
        // }
        
        char str[20];
        char str2[20];
        char o2[20];
        float result2;        
        int numtrue1, numtrue2;

        strcpy(str, av[1]);
        strcpy(str2, av[3]);
        strcpy(o2, av[2]);
        numtrue1 = atoi(str);
        numtrue2 = atoi(str2);

        if (o2[0] =='+'){
                result2 = numtrue1 + numtrue2;
                printf("%f\n", result2);
        } else if (o2[0] =='-') {
                result2 = numtrue1 - numtrue2;
                printf("%f\n", result2);
        } else if (o2[0] =='*') {
                result2 = numtrue1 * numtrue2;
                printf("%f\n", result2);
        } else if (o2[0] =='/') {
                while (numtrue2 == 0){
                        printf("Cannot divide by 0, enter new number:\n");
                        scanf("%d", &numtrue2);
                }
                result2 = numtrue1 / numtrue2;
                printf("%f\n", result2);
        } else {
                printf("Invalid expression.\n");
        }

        return 0;
}                                          