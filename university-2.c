#include<stdio.h>
int main(void){
    
    char dna1[100];
    char dna2[100];
    int dna1_count =0;
    int dna2_count =0;
    
    while(1){
        printf("一つ目のDNAの入力どうぞ\n");
        fgets(dna1,sizeof(dna1),stdin);
        for(int i=0; i<sizeof(dna1); i++){
            if( (dna1[i]!='A') && (dna1[i]!= 'G') && (dna1[i] !='C') && (dna1[i] !='T'))break;
            else dna1_count++;
        }
        if(dna1[dna1_count+1] == '\0')break;
    }
    
    while(1){
        printf("二つ目のDNAの入力どうぞ\n");
        fgets(dna2,sizeof(dna2),stdin);
        for(int i=0; i<sizeof(dna2); i++){
            if((dna2[i]!= 'A')&& (dna2[i]!= 'G') && (dna2[i]!= 'C') && (dna2[i]!= 'T'))break;
            else dna2_count++;
        }
        if(dna2[dna2_count+1] == '\0')break;
    }
    
//    入力する2つのDNAが一定の同じ長さ（ただし 10文字以上とする）であることは仮定してもよいため
    for(int i=0; i<sizeof(dna1); i++){
        if(dna1[i] != dna2[i]){
            printf("合致していません。\n");
            break;
        }
        if(dna1[i] == '\0' ){
            printf("合致しました。\n");
            break;
        }
    }
    
    return 0;
}
