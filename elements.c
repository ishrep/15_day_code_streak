#include<stdio.h>


int main(  ) {

    int A[5];
    for(int i = 0; i < 5; i++)
        scanf("%d",&A[i]) ;

    int seen[5];
    for(int i = 0; i < 5; i++)
        seen[i] = 0;

    for(int i = 0; i < 5; i++) {
        if(seen[i] == 0) {
            int count = 0;
            for(int j = i; j < 5; j++)
                if(A[j] == A[i]) {
                    count += 1;

                    seen[j] = 1;
                }
            printf("%d occurs %d times\n",A[i],count);
        }
    }

    return 0;
}