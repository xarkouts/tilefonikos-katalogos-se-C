#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 512

struct atomo
{
    char *onoma;
    char *dieythinsi;
    char *aritmos;
    char *nomos;
};
typedef struct atomo RECORD;

void read_record(RECORD *p);
void print_record(RECORD prin);
void demefsi_record(RECORD *p,int m,int g);
void free_record(RECORD x);
void main(){
RECORD person1,person2;


for (int i = 1; i <=2; i++)
{   printf("Kataxorise ta stixia gia to %d atomo\n\n",i);
    switch (i)
    {
    case 1:
        read_record(&person1);
        print_record(person1);
        break;
    case 2:
      read_record(&person2);
      print_record(person2);
    
}
}
free_record(person1);
free_record(person2);
}

void read_record(RECORD *p){
    char bafer[SIZE];
    int i=1;
    int megethos;
    do
    {
        switch (i)
        {
        case 1:
            printf("dose to onomateponimo soy \n");
            gets(bafer);
            megethos=strlen(bafer)+1;
            demefsi_record(p,megethos,i);
            strcpy(p->onoma,bafer); 
            break;
        
        case 2:
         printf("dose tin dieythinsi soy \n");
         gets(bafer);
         megethos=strlen(bafer)+1;
         demefsi_record(p,megethos,i);
         strcpy(p->dieythinsi,bafer); 
         break;
        case 3:
            printf("dose ton aritmo dieythinsis soy \n");
            gets(bafer);
            megethos=strlen(bafer)+1;
            demefsi_record(p,megethos,i);
            strcpy(p->aritmos,bafer); 
        break;
        
        case 4:
            printf("dose ton nomo  soy \n");
            gets(bafer);
            megethos=strlen(bafer)+1;
            demefsi_record(p,megethos,i);
            strcpy(p->nomos,bafer); 
            break;
        }
      
        i++;
    } while (i<=4);
    

}
void print_record(RECORD prin){
    printf("PLIROFORIES ATOMOY\n \n");
    printf("Onoma: %s\t\n Dieythinsi: %s\t\n Aritmos: %s\t\n Nomos: %s\n\n\n ",prin.onoma,prin.dieythinsi,prin.aritmos,prin.nomos); 
}
void demefsi_record(RECORD *p,int m,int g){
    if (g==1)
    {
        p->onoma=malloc(sizeof(char)*m);
        if(!p->onoma){
            printf("Adinamia demeythis");
            exit(0);
        }
    }

    if (g==2)
    {
        p->dieythinsi=malloc(sizeof(char)*m);
        if(!p->dieythinsi){
            printf("Adinamia demeythis");
            exit(0);
        }
    }

    if (g==3)
    {
        p->aritmos=malloc(sizeof(char)*m);
        if(!p->aritmos){
            printf("Adinamia demeythis");
            exit(0);
        }
    } 

    if (g==4)
    {
        p->nomos=malloc(sizeof(char)*m);
        if(!p->nomos){
            printf("Adinamia demeythis");
            exit(0);
        }
    }
    
}
void free_record(RECORD x){
    free(x.onoma);
    free(x.dieythinsi);
    free(x.aritmos);
    free(x.nomos);
}