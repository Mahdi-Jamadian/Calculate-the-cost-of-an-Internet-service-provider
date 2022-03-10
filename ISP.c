#include <stdio.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */
int main() {
    int data_usage;
        printf("Enter your data usage : ");
        scanf("%d",&data_usage);
        if(data_usage>0&data_usage<=1)
            printf("You have to pay $ 250");
        else if(data_usage>1&data_usage<=2)
            printf("You have to pay $ 500");
        else if(data_usage>2&data_usage<=5)
            printf("You have to pay $ 1000");
        else if(data_usage>5&data_usage<=10)
            printf("You have to pay $ 1500");
        else if(data_usage>10)
            printf("You have to pay $ 2000");
        else
            printf("Error Please enter the value correctly.");


    return 0;
}
