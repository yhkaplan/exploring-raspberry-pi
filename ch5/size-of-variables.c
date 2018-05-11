#include<stdio.h>
#include<stdbool.h>

int main() {
    double a = 3.14159;
    float b = 25.0;
    int c = 545;
    long int d = 123;
    char e = 'A';
    bool f = true;

    printf("a val %.4f & size %d bytes (@addr %p).\n", a, sizeof(a),&a);
    printf("b val %4.2f & size %d bytes (@addr %p).\n", b, sizeof(b),&b);
    printf("c val %d (oct %o, hex %x) & "\
            "size %d bytes (@addr %p).\n", c, c, c, sizeof(c), &c);
}
