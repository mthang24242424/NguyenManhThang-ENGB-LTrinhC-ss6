#include <stdio.h>

int main() {
    int day, month;
    printf("nhap ngay sinh: ");
    scanf("%d", &day);
    printf("nhap thang sinh: ");
    scanf("%d", &month);
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("cung bach duong \n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("cung kim nguu \n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("cung song tu \n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("cung cu giai \n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("cung su tu \n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("cung xu nu \n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("cung thien binh \n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("cung bo cap \n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("cung nhan ma \n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("cung bo cap \n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("cung bao binh \n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("cung song ngu \n");
    } else {
        printf("ko hop le \n");
    }
    return 0;
}
