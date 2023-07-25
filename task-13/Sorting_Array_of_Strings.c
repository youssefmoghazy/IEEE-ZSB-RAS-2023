#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}
int destinct (const char *str)
{
    int destinct=0;
    int arr[26]={0};
    while (*str!='\0') {
        arr[((*str++)-'a')]++;
    }
    for(int i=0;i<26;i++)
    {
        if (arr[i])
        {
            destinct++;
        }
    }
    return destinct;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int def = destinct(a)-destinct(b);
    if (def)
        return def;
    else
        return lexicographic_sort(a,b);
}

int sort_by_length(const char* a, const char* b) {
    int def = strlen(a)-strlen(b);
    if (def)
        return def;
    else
        return lexicographic_sort(a,b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int check=1;
    int lenght=len-1;
    while (check) {
        check=0;
        for(int i=0;i<lenght;i++)
        {
            if (cmp_func(arr[i],arr[i+1])>0) {
                char* temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                check=1;
            }
        }
        lenght--;
    }

}


int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}
