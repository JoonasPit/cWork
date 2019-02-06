#include <stdio.h>

int main(){
    /*Print out and ount together values in a 2D array*/

    int z = 0;
    int x = 0;
    int totalsum = 0;
    int sum_matrix[5][5];
    /*Introduce the array and all the values*/
    int matrix[5][5] =
    {
    4, 6, 25, 88, 5,
    34, 5, 300, 4, 65,
    78, 43, 11, 90, 125,
    98, 585, 12, 63, 21,
    45, 35, 9, 5, 1
    };
    printf("The 2D Array printed:\n");
    /* Two for loops for both variables defined earlier */
    /* This is to make both loops run through both sets of 5's */
    for(int z = 0; z < 5; z++){
        for(x = 0; x < 5; x++){
            sum_matrix[z][x] = matrix[z][x];
            /* adds the values together on each line*/
            totalsum += sum_matrix[z][x];
            if(x==4){
                /* Controls on which value a new line is introduced */
                printf("%d \n",sum_matrix[z][x]);
            }
            else{
                /* This just prints the values on the current row */
                printf("%d ", sum_matrix[z][x]);
            }
            
        }
    }
    printf("\nThe sum of the table is %d%s", totalsum,"\n");
    }