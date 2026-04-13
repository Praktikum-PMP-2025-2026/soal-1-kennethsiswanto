#include <stdio.h>

int main(){
    int izin, radiasi, jam;
    float suhu;
    scanf("%d %f %d %d", &izin, &suhu, &radiasi, &jam);
    if(radiasi >= 6){
        printf("TOLAK");
        return 0;
    }
    else if(suhu >= 390){
        printf("KARANTINA");
        return 0;
    }
    else if(izin == 1 && jam < 6 && jam > 20){
        printf("TOLAK");
        return 0;
    }
    else if(izin == 1){
        printf("MASUK");
        return 0;
    }
    else if(izin == 2 && radiasi <= 2 && jam>8 && jam<18){
        printf("MASUK");
        return 0;
    }
    else if(izin == 2){
        printf("PEMERIKSAAN");
        return 0;
    }
    else if(izin == 3 && radiasi == 0 && suhu<380){
        printf("MASUK");
        return 0;
    }
    else{
        printf("TOLAK");
        return 0;
    }

    // tes input per variabel
    // printf("izin = %d\n", izin);
    // printf("suhu = %f\n", suhu);
    // printf("radiasi = %d\n", radiasi);
    // printf("jam = %d\n", jam);
}
