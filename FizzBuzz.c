#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) 
{
    char **answer =malloc( n*sizeof(char*));
    if(answer==NULL)
    {
        *returnSize=0;
        return NULL; 
    }
        *returnSize =n;int i,j;
    for( i=1;i<=n;i++)
    {
        answer[i-1]=malloc(20*sizeof(char));
        if(answer[i-1]==NULL)
        {
            for(j=0;j<i-1;j++)
            {
                free (answer[j]);
            }
            free(answer);
            *returnSize=0;
        }
        if(i%3==0&&i%5==0)
        {
            strcpy(answer[i-1],"FizzBuzz");
        }
        else if(i%3==0)
        {
            strcpy(answer[i-1],"Fizz");
        }
        else if(i%5==0)
        {
            strcpy(answer[i-1],"Buzz");
        }
        else
        {
            sprintf(answer[i-1],"%d",i);
        }
    }

        return answer;
        
    
}
