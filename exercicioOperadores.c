#include<stdio.h>
int main(){

    int tv_2020, tv_2021, tv_2022;
    int noteb_2020, noteb_2021, noteb_2022;
    int smart_2020, smart_2021, smart_2022;

    float media_2020 = 0;
    float media_2021 = 0;
    float media_2022 = 0;

     printf("Quantas tvs foram vendidas em 2020?: ");
     scanf("%d", &tv_2020);
     printf("Quantos notebooks?: ");
     scanf("%d", &noteb_2020);
     printf("Quantas smarts?: ");
     scanf("%d", &smart_2020);

     printf("Quantas tvs foram vendidas em 2021?: ");
     scanf("%d", &tv_2021);
     printf("Quantos notebooks?: ");
     scanf("%d", &noteb_2021);
     printf("Quantas smarts?: ");
     scanf("%d", &smart_2021);

     printf("Quantas tvs foram vendidas em 2022?: ");
     scanf("%d", &tv_2022);
     printf("Quantos notebooks?: ");
     scanf("%d", &noteb_2022);
     printf("Quantas smarts?: ");
     scanf("%d", &smart_2022);

     media_2020 = (tv_2020 + noteb_2020 + smart_2020)/3;
     media_2021 = (tv_2021 + noteb_2021 + smart_2021)/3;
     media_2022 = (tv_2022 + noteb_2022 + smart_2022)/3;
     printf("2020 obteve a maior media? %d\n", ((media_2020>media_2021)&&(media_2020>media_2022)));
     printf("2021 obteve a maior media? %d\n", ((media_2021>media_2020)&&(media_2021>media_2022)));
     printf("2022 obteve a maior media? %d\n", ((media_2022>media_2021)&&(media_2022>media_2020)));

     return 0;
}