#include <stdio.h>
#include <stdlib.h>

int main() {
    int hr_i, hr_f, min_i, min_f, dur_jogo_hr, dur_jogo_min, real_dur_min, real_dur_hr;

    printf("Digite a hora do inicio do jogo: ");
    scanf("%d", &hr_i);

    printf("Digite a minutagem do inicio do jogo: ");
    scanf("%d", &min_i);

    printf("Digite a hora no final do jogo: ");
    scanf("%d", &hr_f);

    printf("Digite a minutagem no final do jogo: ");
    scanf("%d", &min_f);

    if (hr_f > hr_i && min_f > min_i) {
        dur_jogo_hr = hr_f - hr_i;
        dur_jogo_min = min_f - min_i;
        printf("A duracao do jogo foi de: %dh%d\n", dur_jogo_hr, dur_jogo_min);
    } else if (hr_f > hr_i && min_i > min_f) {
        dur_jogo_hr = hr_f - hr_i - 1;
        dur_jogo_min = (60 - min_i) + min_f;
        if (dur_jogo_min >= 60) {
            real_dur_min = dur_jogo_min - 60;
            real_dur_hr = dur_jogo_hr + 1;
            printf("A duracao do jogo foi de: %dh%d\n", real_dur_hr, real_dur_min);
        } else {
            printf("A duracao do jogo foi de: %dh%d\n", dur_jogo_hr, dur_jogo_min);
        }
    } else if (hr_i > hr_f && min_i > min_f) {
        dur_jogo_hr = (24 - hr_i) + hr_f;
        dur_jogo_min = (60 - min_i) + min_f;
        if (dur_jogo_min >= 60) {
            real_dur_min = dur_jogo_min - 60;
            real_dur_hr = dur_jogo_hr + 1;
            printf("A duracao do jogo foi de: %dh%d\n", real_dur_hr, real_dur_min);
        } else {
            printf("A duracao do jogo foi de: %dh%d\n", dur_jogo_hr, dur_jogo_min);
        }
    } else if (hr_i > hr_f && min_f > min_i) {
        dur_jogo_hr = (24 - hr_i) + hr_f;
        dur_jogo_min = min_f - min_i;
        printf("A duracao do jogo foi de: %dh%d\n", dur_jogo_hr, dur_jogo_min);
    } else if (hr_i == hr_f && min_f > min_i) {
        dur_jogo_min = min_f - min_i;
        printf("A duracao do jogo foi de: 00h%d\n", dur_jogo_min);
    } else if (hr_i == hr_f && min_i > min_f) {
        dur_jogo_min = (60 - min_i) + min_f;
        if (dur_jogo_min >= 60) {
            real_dur_min = dur_jogo_min - 60;
            printf("A duracao do jogo foi de: 01h%d\n", real_dur_min);
        } else {
            printf("A duracao do jogo foi de: 00h%d\n", real_dur_min);
        }
    } else {
        printf("O horario eh o mesmo!\n");
    }

    system("pause");
    return 0;
}