#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char nama_item[80],prev_item[80], item_terhebat[80], item_terlemah[80] ;
    strcpy(nama_item,"");
    strcpy(prev_item,"");
    strcpy(item_terhebat,"");
    strcpy(item_terlemah,"");
    float stat, prev_stat, stat_terhebat, stat_terlemah ;
    stat = 0 ;
    prev_stat = 0 ;
    stat_terhebat = 0 ;
    stat_terlemah = 0 ;
    bool nama_pertama ;
    nama_pertama = true;
    char jawaban;

    do{
        //masukkan nama item
        fflush(stdin);
        printf("masukkan nama item :");
        gets(nama_item);
        //masukkan stat
        fflush(stdin);
        printf("masukkan stat      :");
        scanf("%f",&stat);
        //menampilkan nama item
        printf("nama item = %s \n",nama_item);
        //menampilkan stat
        printf("stat      = %.0f \n",stat);
        //menampilkan item sebelumnya
        if(nama_pertama==true){
            strcpy(prev_item,"Nothing");
            strcpy(item_terhebat,nama_item);
            strcpy(item_terlemah,nama_item);
            stat_terhebat=stat ;
            stat_terlemah=stat ;
        }else{
            //menampilkan item terhebat dan terlemah
            if(stat >= stat_terhebat){
                stat_terhebat = stat;
                strcpy(item_terhebat,nama_item);
            }else{
                if(stat <= stat_terlemah){
                    stat_terlemah = stat;
                    strcpy(item_terlemah,nama_item);
                }
            }
        }
        printf("item sebelumnya : %s",prev_item);
        printf("\nitem terhebat : %s",item_terhebat);
        printf("\nitem terlemah : %s",item_terlemah);

        strcpy(prev_item,nama_item);
        prev_stat=stat;
        nama_pertama=false;

        //mengulang selama jawabannya y
        fflush(stdin);
        printf("\nmau input lagi? (y/n) = ");
        scanf("%c",&jawaban);
   }while(jawaban=='y');

    return 0;
}
