#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc != 3) return EXIT_FAILURE;
    int *****a, *****b, *****c;
    a = (int)malloc(sizeof(int*)); b = (int)malloc(sizeof(int*)); c = (int)malloc(sizeof(int*));
    *a = (int*)malloc(sizeof(int*)); *b = (int*)malloc(sizeof(int*)); *c = (int*)malloc(sizeof(int*));
    **a = (int**)malloc(sizeof(int*)); **b = (int**)malloc(sizeof(int*)); **c = (int**)malloc(sizeof(int*));
    ***a = (int***)malloc(sizeof(int*)); ***b = (int***)malloc(sizeof(int*)); ***c = (int***)malloc(sizeof(int*));
    ****a = (int****)malloc(sizeof(int*)); ****b = (int****)malloc(sizeof(int*)); ****c = (int****)malloc(sizeof(int*));
    *****a = (int*****)malloc(sizeof(int)); *****b = (int*****)malloc(sizeof(int)); *****c = (int*****)malloc(sizeof(int));
    *****a = atoi(argv[1]); *****b = atoi(argv[2]);
    *****c = *****a + *****b;
    printf("%d", *****c);
    free((void*)a); free((void*)b); free((void*)c);
    free((void*)*a); free((void*)*b); free((void*)*c);
    free((void*)**a); free((void*)**b); free((void*)**c);
    free((void*)***a); free((void*)***b); free((void*)***c);
    free((void*)****a); free((void*)****b); free((void*)****c);
    free((void*)*****a); free((void*)*****b); free((void*)*****c);
}
