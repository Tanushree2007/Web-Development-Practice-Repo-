
#include"stdio.h"
#include"stdlib.h"
#include"string.h"
struct poly
{
    int cof;
    int exp;
    struct poly *ad;
};
struct poly *createlinklist();
void traverse(struct poly *);
main()
{
    struct poly *x;
    x =createlinklist();
    traverse(x);

}
void traverse(struct poly *p)
{
    while(p!=0)
    {
        printf("%d x%d+",p->cof,p->exp);
        p=p->ad;
    }
}
struct poly *createlinklist()
{
    struct poly *p,*q,*temp;
    char x[4];
    p=(struct poly *)malloc(sizeof(struct poly));
    temp=p;
    printf("enter the cofficient:");
    scanf("%d",&p->cof);
    printf("Enter the exponent:");
    scanf("%d",&p->exp);
    while(1)
    {
        printf("Do you want to continue? Yes/No");
        scanf("%s",x);
        if(strcmp(x,"No")==0)
            break;
        q=(struct poly *)malloc(sizeof(struct poly));
        p->ad=q;
        p=q;
    printf("Enter cofficient:");
    scanf("%d",&p->cof);
    printf("Enter exponent:");
    scanf("%d",&p->exp);
    }
    p->ad=0;
    return temp;
}
