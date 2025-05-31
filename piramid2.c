#include  <stdio.h> 

int main() {
	int i,j;
    for ( i = 0; i  <  5; i++) {
        // Printing spaces
        for ( j = 0; j  <  i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int j = i; j  <  5; j++) {
            printf("* ");
        }
        printf("
");
    }
    return 0;
}
