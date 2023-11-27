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

Number Pattern Printing Program:

#include <stdio.h>
int main() {
  int i,j,n;
  printf("Enter the number of lines: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
          printf("%d ",i);
      }
      printf("\n");
  }
    return 0;
}

Number Triangle Pattern Generator:

#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    int num=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

Inverted Pyramid Pattern with Spaces:

#include <stdio.h>
int main() {
    int i,j,k,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

Pyramid star pattern without space:

#include <stdio.h>
int main() {
    int i,j,space,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



