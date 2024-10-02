#include <stdio.h>

int main(void) {
    int giorno;
    int mese;
    int anno;
    printf("inserisci giorno,mese,anno(GG MM AAAA): ");
    scanf("%d %d %d", &giorno,&mese,&anno);
    if(mese>=1&&mese<=12) {
        if((mese==4 || mese==6 || mese==9 || mese==11)&& giorno>=1&&giorno<=30) {
            printf("la data inserita e' corretta\n");
        }else if(mese==2) {
            if(( anno%4==0&&anno%100!=0)|| (anno%400==0)) {
                if (giorno>=1&&giorno<=29) {
                    printf("la data inserita e' corretta\n");
                }else {
                    printf("la data inserita non e' corretta\n");
                }
            }else {
                if(giorno>=1&&giorno<=28) {
                    printf("la data inserita e' corretta\n");
                }else {
                    printf("la data inserita non e' corretta\n");
                }
            }
        }else if(giorno>=1&&giorno<=31) {
            printf("la data inserita e' corretta\n");
        }else {
            printf("la data inserita non e' corretta\n");
        }
    }else {
        printf("la data inserita non e' corretta\n");
    }
}
