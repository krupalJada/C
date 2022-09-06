#include <stdio.h>
#define n 5
int i;
void output(int qty[], int rate[], float amount[n], float dis[n], float ramt[n], float gst[n], float pamt[n])
{
    
    printf("\nqty\trate\tamount\tdis\tramt\tgst\tamt");
    for (i = 0; i < 5; i++)
    {
        printf("\n %d\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",qty[i],rate[i],amount[i],dis[i],ramt[i],gst[i],pamt[i]);
    }
}
void procc(int qty[], int rate[])
{
    
    float amount[n], dis[n], ramt[n], gst[n], pamt[n];
    for (i = 0; i < 5; i++)
        
    {
        amount[i] = qty[i] * rate[i];
        dis[i] = amount[i] * 0.10;
        ramt[i] = amount[i] - dis[i];
        gst[i] = ramt[i] * 0.18;
        pamt[i] = ramt[i] + gst[i];
    }
    output(qty, rate, amount, dis, ramt, gst, pamt);

}
void input()
{

    int qty[n], rate[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter qty[%d] :", i);
        scanf("%d", &qty[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter rate[%d] :", i);
        scanf("%d", &rate[i]);
    }
    procc(qty, rate);
}
int main()
{
    input();
    return 0;
}
