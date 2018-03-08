#include <stdio.h>
#include <math.h>

int main() {
    int side1, side2, side3;
    char op;

    do {
        printf("Type the 3 sides of the triangle, one per ENTER: \n");
        scanf("%d %d %d", &side1, &side2, &side3);

        if (side1 == side2 && side2 == side3) {
            printf("Triangle is Equilateral.");

        }else if(side1 == side2 && side1 != side3 ||
                side1 != side2 && side1 == side3 ||
                side2 == side3 && side2 != side1 ||
                side2 != side3 && side2 == side1){
            printf("Triangle is Isosceles.");

        }else{
            printf("Triangle is Scalene.");

        }

        printf("\n Wanna leave? Type 'y' if you wanna leave.\n");
        op = getchar();

    }while(op != 'y');

    return 0;
}