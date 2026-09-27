#include<stdio.h>

int main(void) {
    int tuoi_benh_nhan[4];
    int co_bao_hiem[4];
    int phi_kham[4];
    int so_ca_uu_tien = 0;
    long long tong_doanh_thu = 0;
    for (int i = 0; i < 4; i++){
        printf("Nhap tuoi benh nhan thu %d: ", i + 1);
        scanf("%d", &tuoi_benh_nhan[i]);
        printf("Benh nhan co bao hiem (1-co | 0-khong): ");
        scanf("%d", &co_bao_hiem[i]);
        if (co_bao_hiem[i] != 1 && co_bao_hiem[i] != 0){
            co_bao_hiem[i] = 0;
            printf("Nhap so bhyt sai ne xet nguoi dung khong co bao hiem");
        }
        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120){
            phi_kham[i] = 0;
            printf("LOI DU LIEU");
        }else{
            if (co_bao_hiem[i] == 1){
                phi_kham[i] = 200000 * 20/100;
            }else{
                phi_kham[i] = 200000;
            }
            if (tuoi_benh_nhan[i] > 70){
                so_ca_uu_tien ++;
            }
        }
        tong_doanh_thu += phi_kham[i];
    }
    printf("===== KET QUA PHONG KHAM =====\n");
    for(int i = 0; i < 4; i++){
        printf("Phi kham cua benh nhan thu %d la: %d VND\n", i + 1, phi_kham[i]);
    }
    printf("Tong doanh thu: %lld\n", tong_doanh_thu);
    printf("Tong so ca uu tien: %n\n", so_ca_uu_tien);

    return 0;
}