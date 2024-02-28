#include <stdio.h>
void inv_nbr_adresse(int *pt_nbr1, int *pt_nbr2)
{
    int temp;
    temp = *pt_nbr1;
    *pt_nbr1 = *pt_nbr2;
    *pt_nbr2 = temp;
}
int main(void)
{
    int varNbr1 = 15;
    int varNbr2 = 45;
    int *ptVarNbr1 = &varNbr1;
    int *ptVarNbr2 = &varNbr2;
    printf("contenu initial\n");
    printf("valeur varNbr1 : %d\n", varNbr1);
    printf("valeur varNbr2 : %d\n", varNbr2);
    printf("adresse varNbr1 : %p\n", &varNbr1);
    printf("adresse varNbr2 : %p\n", &varNbr2);
    printf("valeur ptVarNbr1 : %p\n", ptVarNbr1);
    printf("valeur ptVarNbr2 : %p\n", ptVarNbr2);
    printf("adresse ptVarNbr1 : %p\n", &ptVarNbr1);
    printf("adresse ptVarNbr2 : %p\n", &ptVarNbr2);
    printf("valeur du contenu de ptVarNbr1 : %d\n", *ptVarNbr1);
    printf("valeur du contenu de ptVarNbr2 : %d\n", *ptVarNbr2);
    printf("\n\n");
    printf("---------------------------------------------------");
    inv_nbr_adresse(ptVarNbr1, ptVarNbr2);
    printf("contenu initial\n");
    printf("valeur varNbr1 : %d\n", varNbr1);
    printf("valeur varNbr2 : %d\n", varNbr2);
    printf("adresse varNbr1 : %p\n", &varNbr1);
    printf("adresse varNbr2 : %p\n", &varNbr2);
    printf("valeur ptVarNbr1 : %p\n", ptVarNbr1);
    printf("valeur ptVarNbr2 : %p\n", ptVarNbr2);
    printf("adresse ptVarNbr1 : %p\n", &ptVarNbr1);
    printf("adresse ptVarNbr2 : %p\n", &ptVarNbr2);
    printf("valeur du contenu de ptVarNbr1 : %d\n", *ptVarNbr1);
    printf("valeur du contenu de ptVarNbr2 : %d\n", *ptVarNbr2);
    return (0);
}
