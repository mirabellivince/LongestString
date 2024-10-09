/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int longest_string(char string[4][4])
{
    int highest = 0;
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        char *ptr = string[i];
        
        
        while (*ptr != '\0')
        {
            count++; 
            ptr++;
        }
        
        if (count > highest)
        {
            highest = count;
           
        }
    }
        
    return highest;
}



int main()
{
     char strings[4][4] = {
        "abc", 
        "de", 
        "fgh", 
        "j"
    };
    int longest = longest_string(strings);  
    printf("%d\n", longest);

    return 0;
}
