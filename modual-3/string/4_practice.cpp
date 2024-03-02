/*4. Write a program in C to count the total number of words in a string.*/

#include <stdio.h>

int main()
{
    int i=0,wordCount=0;
    char str[50];
    printf("Enter String: ");
    fgets(str, 50, stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]!= ' '){
            continue;
        }else{
            wordCount++;
        }
    }
    wordCount++;

    printf("Total word in string is : %d",wordCount);

    return 0;
}
