#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool validatedata(float a, float b) {

    if (a <= 0 || b <= 0) {
        printf("canh tam giac phai lon hon khong ");
        return false;
    } else {
        return true;
    }

}

float tinhcanhhuyen(int a, int b) {
    return (float) (sqrt((a * a) + (b * b)));
}

int main() {

    float a, b;
    printf(" vui long nhap so do danh thu nhat\n");
    scanf("%f", &a);
    printf(" vui long nhap so do danh thu hai\n");
    scanf("%f", &b);
    bool isValidatedata = validatedata(a, b);
    if (isValidatedata == true) {
        printf("canh huyen cua tam giac la la %.2f ", tinhcanhhuyen(a, b));
    }


    return 0;
}