#include <stdlib.h>
void main() {
        char *name = "David";
        int age = 31;
        double wage = 12.50;
        printf("%12s is %d and earns %f per hour.\n", name, age, wage);
        fprintf(STDERR, "this is going to stderr!!!1\n");
}
