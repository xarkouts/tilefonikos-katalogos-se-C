#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 512

struct atomo
{
    char *onoma;
    char *dieythinsi;
    char *aritmostilefonou;
    char *nomos;
};
typedef struct atomo RECORD;

void read_record(RECORD *p,int *d);
void print_record(RECORD prin,int*d);
void demefsi_record(RECORD *p,int m,int g);
void free_record(RECORD x);

void main(){
RECORD *pinakas;
int N;
printf("dose ton aritmo ton egrafon poy thelis na kataxorisis\n");
scanf("%d",&N);
pinakas=malloc(sizeof(RECORD)*N);
if(!pinakas){
    printf("Adinamia demeythis");
        exit(0);

}
fflush(stdin);

for (int i = 0; i <N; i++)
{   
   
read_record(&pinakas[i],&i);   
}

for (int i = 0; i <N; i++)
{   
   print_record(pinakas[i],&i);
}
for (int i = 0; i <N; i++)
{   
   free_record(pinakas[i]);
}
free(pinakas);

}

void read_record(RECORD *p,int *d){
    char bafer[SIZE];
    int i=1;
    int megethos;
    printf("Grapse ta stixia tou %d aotmou: \n\n",*d+1);
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
            fflush(stdin);
            break;
        
        case 2:
         printf("dose tin dieythinsi soy \n");
         gets(bafer);
         megethos=strlen(bafer)+1;
         demefsi_record(p,megethos,i);
         strcpy(p->dieythinsi,bafer); 
         fflush(stdin);
         break;
        case 3:
            printf("dose ton Aritmos tilefonoy soy \n");
            gets(bafer);
            megethos=strlen(bafer)+1;
            demefsi_record(p,megethos,i);
            strcpy(p->aritmostilefonou,bafer);
            fflush(stdin); 
        break;
        
        case 4:
            printf("dose ton nomo  soy \n");
            gets(bafer);
            megethos=strlen(bafer)+1;
            demefsi_record(p,megethos,i);
            strcpy(p->nomos,bafer); 
            fflush(stdin);
            break;
        }
      
        i++;
    } while (i<=4);
    

}
void print_record(RECORD prin,int *d){
    printf("\n\n");
    printf("PLIROFORIES ATOMOY %d\n \n",*d+1);
    printf("Onoma: %s\t\n Dieythinsi: %s\t\n Aritmos tilefonoy: %s\t\n Nomos: %s\n\n\n ",prin.onoma,prin.dieythinsi,prin.aritmostilefonou,prin.nomos); 
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
        p->aritmostilefonou=malloc(sizeof(char)*m);
        if(!p->aritmostilefonou){
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
    free(x.aritmostilefonou);
    free(x.nomos);
}

