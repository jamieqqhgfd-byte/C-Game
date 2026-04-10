
#include <stdio.h>

#include <stdlib.h>


#include <time.h>

int count=0;
typedef struct {


    char name[500];


    char rarity[50];


    int attack;


} Card;


Card cardLibrary[5] = {


    {"終焉霸主。霸王龍笛歐拉姆斯", "UR", 3000},


    {"真。終焉之毀滅者。艾克普拉姆斯白翼幻龍", "SsR", 1500},


    {"終焉帝國的倖存者。智慧之王。藍心德", "SR", 1200},


    {"終焉愚者。哥布林。劉宇軒", "R", 800},


    {"深海真理之石守護者。派大星", "N", 2000}


};


void displayCard(Card card) {


    printf("Card Name: %s\n", card.name);


    printf("Rarity: %s\n", card.rarity);


    printf("Attack: %d\n", card.attack);
    
    printf("抽卡次數:%d\n\n",count);
}


Card drawCard() {


    int randNum = rand() % 100;


    if (randNum < 50) return cardLibrary[3];  


    if (randNum < 75) return cardLibrary[2];  


    if (randNum < 90) return cardLibrary[1];  


    if (randNum < 98) return cardLibrary[4]; 


    return cardLibrary[0];  


}


void counter(int *count){
    if(*count>=100){
        printf("終焉世界支配者。哇塞秘境上古神獸。古代靈異雙頭戰象\n");
        printf("Rarity: LR\n");
        printf("Attack: ??????\n");


    }
    
    
}

int main() {

    srand(time(NULL));
    char choice;
    printf("Welcome to the Card Draw Game!n");
    
    do {

        printf("單抽選'd'   10抽選't'    退出選'q' :");
        int type;
        scanf(" %c", &choice);
        if (choice == 'd') {
            Card drawnCard = drawCard();
            count++;
            displayCard(drawnCard);
            
            counter(&count);

            
        }
       else if(choice == 't'){
           
           for(int t=0;t<10;t++){
             Card drawnCard = drawCard();
             count++;
             displayCard(drawnCard);
           }
       }

    } while (choice != 'q');


    return 0;


}
