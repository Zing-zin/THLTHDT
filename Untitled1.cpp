#include <stdio.h>
main() {
    char ten[] = "Nguyen Huu Hung";
    int tuoi = 19;
    double chieuCao = 1.65;
    int thichLapTrinh = 1;
    printf("Ten: %s\n", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Chieu cao: %.2f\n", chieuCao);
    printf("Ban co thich lap trinh: %s\n", thichLapTrinh ? "Yes" : "No");
    return 0;
}
