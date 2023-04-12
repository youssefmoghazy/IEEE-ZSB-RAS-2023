#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size ,most_freq=0;
    int freq[256]={0};
    char most_freq_char ;
    printf("Enter the maximum length for the name\n");
    scanf("%d",&size);
    char * name  = (char*)malloc(size*sizeof(char));
    scanf("%s",name);
    printf("your name is %s\n",name);
    for (int i = 0; i < size; i++) {
        freq[name[i]]++;
        if (freq[name[i]] > most_freq) {
            most_freq = freq[name[i]];
            most_freq_char = name[i];
        }
    }
    printf("the frequency of the most repeated character(%c) = %d \n",most_freq_char,most_freq);
    free(name);
    return 0;
}
