#include <stdio.h>

#define ARRAY_MAXIMUM_SIZE  130
#define EXIT_SUCCESS 0

void output_nonzero(int* arr, int size)
{ 
    for (int idx = 0; idx < size; idx++)
    { 
        if (arr[idx] > 0)
        { 
            printf("%c:%d\n", idx, arr[idx]); 
        }
    }
}

void add_arr_freq(int* frequency, char* characters)
{
    while (*characters != '\0')
    {
        if (*characters != '"')
        {
            frequency[(int)*characters] = frequency[(int)*characters]+1;
        }
        characters++;
    }
}



int main(int argc, char **argv)
{ 
    int freq_arr[ARRAY_MAXIMUM_SIZE] = {0}; 

    for (int idx = 1; idx < argc; idx++)
    { 
        add_arr_freq(freq_arr, argv[idx]);
    }

    output_nonzero(freq_arr, ARRAY_MAXIMUM_SIZE); 
    
    return EXIT_SUCCESS; 
}
