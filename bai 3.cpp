#include <stdio.h>
main()
 {
    int a, b;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    double thuong = (double)a / b;
    int phandu = a % b;
    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong: %.2f\n", thuong);
    printf("Phan du: %d\n", phandu);
    
    return 0;
}

