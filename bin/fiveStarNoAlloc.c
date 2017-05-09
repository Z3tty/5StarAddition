#include <stdio.h>
#include <stdlib.h>

int FStar_add(int *****a, int *****b) {return *****a + *****b;}

int main(int argc, char **argv)
{
    if(argc != 3) return EXIT_FAILURE;
    int a = atoi(argv[1]), b = atoi(argv[2]);
    int *ap = &a; int *bp = &b;
    int **app = &ap; int **bpp = &bp;
    int ***appp = &app; int ***bppp = &bpp;
    int ****apppp = &appp; int ****bpppp = &bppp;
    printf("\t%d\t+\t%d\t=\t%d\n", a, b, FStar_add(&apppp, &bpppp));
    return EXIT_SUCCESS;
}
