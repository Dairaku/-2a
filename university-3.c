//
//  university-3.c
//  
//
//  Created by 大樂裕貴 on 2016/01/05.
//
//

#include "university-3.h"
#include <stdio.h>

int main () {
    char seller[][5] ={ "A", "B", "C", "D", "E" };
    int sell_unit[] ={ 100, 50, 200, 50, 100 };
    int sell_price[]={ 500, 510, 480, 500, 490 };
    char buyer[][5] ={ "H", "I", "J", "K", "L" };
    int buy_unit[] ={ 150, 100, 30, 100, 50 };
    int buy_price[] ={ 490, 500, 520, 510, 500 };
    int c,i,j,p;
    
    for(i=0;i<5;i++){
        /* i 番目の売り注文に対して */
        for(j=0;j<5;j++){
            /* j 番目の買い注文をみてみる */
            
            /* 売買の株数と指値からなる約定の条件を書く */
            if( buy_unit[j] >= sell_unit[i] && buy_price[j] >= sell_price[i] ){
                
                /* 約定総額 p を計算する */
                p= sell_unit[i] * buy_price[j];
                
                /* 手数料 c を求める（約定総額 p から条件分岐で判定する） */
                if (p<30000){
                    c=0;
                }else if(p>= 30000 && p<50000){
                    c=100;
                }else if(p>= 50000){
                    c=200;
                }
                /* 株数を差し引く */
                buy_unit[j] = buy_unit[j] - sell_unit[i];
                
                /* 画面に出力する */
                printf("%s", seller[i]);
                printf("-");
                printf("%s", buyer[j]);
                printf("%d", sell_unit[j]);
                printf("株");
                printf("%d",p);
                printf("円");
                printf("手数料");
                printf("%d",c);
                printf("円\n");

                /* printf(A-I 100 株 (50000 円) 手数料 200 円) */
                /* この売り注文に対して，以降の買い注文は見ない．ではどうすればよい？ */
                break;
            }
        }
    }
}