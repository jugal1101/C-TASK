#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter first angle: ");
    scanf("%f", &angle1);

    printf("Enter second angle: ");
    scanf("%f", &angle2);

    angle3 = 180 - (angle1 + angle2);

    if (angle3 > 0) {
        printf("Third angle of triangle = %.2f degrees\n", angle3);
    } else {
        printf("Invalid angles! Triangle not possible.\n");
    }

    return 0;
}
