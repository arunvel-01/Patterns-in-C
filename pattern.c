Star Pyramid pattern:

#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
   for(j=1;j<=i;j++){
           printf("*");
       }
       printf("\n");
   }
}

Reversed Star Pyramid Pattern:

#include <stdio.h>

int main() {
    int i,j,n;
	printf("Enter the number of lines: ");
    scanf("%d",&n);
    for (i=1; i<=n;i++) {
        for (j=n;j>=i;j--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

Number Increasing Pyramid Pattern:

#include <stdio.h>

int main() {
   int i,j,n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       for(j=1;j<=i;j++){
       printf("%d ",j);
   }
   printf("\n");
   }

    return 0;
}

Pyramid Pattern with Spaces on Left Side:


#include <stdio.h>

int main() {
    int i,j,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)<=n){
                printf(" ");
            } else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}


