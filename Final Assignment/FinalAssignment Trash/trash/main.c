#include<stdio.h>

int checkSym(int sym[30], int size);

int main()
{
    	int N;
    	int sym[30];


    	printf("Enter N:  ");
    	scanf("%d", &N);

    	for (int i=0;i<N; i++)
        {
            printf("Input index %d:  ", i);
            scanf("%d", &sym[i]);
        }

        printf("%d\n\n", checkSym(sym,N));
        printf("%s\n\n", sym);

        if (checkSym(sym,N))
            printf("Symmetric");
        else printf("Not symmetric");

}

int checkSym(int sym[30], int size)
{
    int i;


        for (i=0;i<=size/2;i++)
            if (sym[i]!=sym[size-1-i]) return 0;
        return 1;



}



