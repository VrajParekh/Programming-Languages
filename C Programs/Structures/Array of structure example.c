#include<stdio.h>
struct product
{
    int P_id;
    int P_price;
    char P_name[20];
};
void main()
{
    struct product p[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("Enter product id:");
        scanf("%d",&p[i].P_id);
        printf("Enter product name:");
        scanf("%s",p[i].P_name);
        printf("Enter product price:");
        scanf("%d",&p[i].P_price);
    }
    for(i=0; i<5; i++)
    {
        printf("\nid=%d",p[i].P_id);
        printf("\nname=%s",p[i].P_name);
        printf("\nprice=%d",p[i].P_price);
    }
}

