#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    fprintf(stdout, "Enter number to print pattern:\n" );
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    //first half   
    for(int i = 0; i < n; i++)
    {   
        int dropout = n-i;
        for(int j = n; j > 0; j--)
        {
            //fprintf(stderr, "%d, %d , %d  \n", i, dropout, j );
            if( j >= dropout){
                fprintf(stdout, "%d ", j );
            }
            else{
                fprintf(stdout, "%d ", dropout );
            }
        }
        for(int j = 2; j <= n ; j++)
        {
            //fprintf(stderr, "%d, %d , %d  \n", i, dropout, j );
            if( j > dropout){
                fprintf(stdout, "%d ", j );
            }
            else{
                fprintf(stdout, "%d ", dropout );
            }
        }
        fprintf(stdout,  "\n" );
    }  
    //second half
    for(int i = 2; i <=n; i++)
    {   
        int dropout = i;
        for(int j = n; j > 0; j--)
        {
            //fprintf(stderr, "%d, %d , %d  \n", i, dropout, j );
            if( j >= dropout){
                fprintf(stdout, "%d ", j );
            }
            else{
                fprintf(stdout, "%d ", dropout );

            }
        }
        for(int j = 2; j <= n ; j++)
        {
            //fprintf(stderr, "%d, %d , %d  \n", i, dropout, j );
            if( j > dropout){
                fprintf(stdout, "%d ", j );
            }
            else{
                fprintf(stdout, "%d ", dropout );

            }
        }
        
        fprintf(stdout,  "\n" );
    }  
        
    return 0;
}