//
//  university-1.c
//  
//
//  Created by 大樂裕貴 on 2016/01/02.
//
//

#include "university-1.h"
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
   
    // nを10000倍して、133.9で割る
    double euro = 10000*n/133.9;
    
    
    // 10で割って、剰余を捨て10倍する
    int exchanged_euro = euro/10;
    
    //　1の位を切り捨てる
    exchanged_euro = exchanged_euro*10;
    
    //　残ったユーロを円に変換する
    double euro_change = euro - exchanged_euro;
    
    double jpy_change = euro_change*133.9;
    int cast_jpy_change = jpy_change;
    
    printf("ユーロ：%d\n", exchanged_euro);
    printf("円：%d\n", cast_jpy_change);
    return 0;
}
