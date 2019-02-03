#include <stdio.h>

int main(void){
    /*Notes for self again*/
    /*read two input variables and count stuff based off them*/
    int usernumber1,usernumber2;
    int result_add,result_sub,result_times;
    /*ask and read input*/
    printf("Anna eka luku: ");
    scanf("%d", &usernumber1);
    printf("Anna toinen luku: ");
    scanf("%d", &usernumber2);
    /*count maths*/
    result_add = usernumber1 + usernumber2;
    result_sub = usernumber1 - usernumber2;
    result_times = usernumber1 * usernumber2;
    /*there has to be a nicer way to print.. this looks so gross*/
    /*prints addition result as integer*/
    printf("%d%s%d%s%d%s",usernumber1,"+" ,usernumber2,"=",result_add,"\n");
    /*prints subtraction result as integer*/
    printf("%d%s%d%s%d%s",usernumber1,"-" ,usernumber2,"=",result_sub,"\n");
    /*multiplies..*/
    printf("%d%s%d%s%d%s",usernumber1,"*" ,usernumber2,"=",result_times,"\n");
}