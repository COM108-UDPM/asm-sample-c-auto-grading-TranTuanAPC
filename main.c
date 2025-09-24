#include <stdio.h>
#include "my_functions.h"

int main() {
    float so1, so2;
    float Tong;

    printf("Nhap vao so thu nhat: ");
    scanf("%f", &so1);

    printf("Nhap vao so thu hai: ");
    scanf("%f", &so2);

    Tong = Tinh_Tong(so1, so2);

    printf("Tong hai so la: %.2f\n", Tong);

    return 0;
    
}
