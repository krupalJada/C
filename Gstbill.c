#include <stdio.h>
#include <conio.h>
int main()
{
	int i, qty[5], rate[5];
	float t[5], r[5], g[5], n[5], d[5], dr, gr, total = 0, gst = 0, dis = 0, amount = 0;
	for (i = 0; i < 5; i++)
	{
		printf("Enter qty[%d] :", i);
		scanf("%d", &qty[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("\n Enter rate[%d] :", i);
		scanf(" %d", &rate[i]);
	}
	for (i = 0; i < 5; i++)
	{
		t[i] = qty[i] * rate[i];
	}
	for (i = 0; i < 5; i++)
	{
		d[i] = t[i] * dr;
		if (1000 >= t[i])
		{
			d[i] = t[i] * 0;
		}
		else if (1000 < t[i] && t[i] <= 2000)
		{
			d[i] = (t[i] * 0.05);
		}
		else if (2000 < t[i] && t[i] <= 5000)
		{
			d[i] = (t[i] * 0.10);
		}
		else if (5000 < t[i])
		{
			d[i] = (t[i] * 0.15);
		}
	}
	for (i = 0; i < 5; i++)
	{
		r[i] = t[i] - d[i];
		g[i] = r[i] * gr;
	}
	for (i = 0; i < 5; i++)
	{
		g[i] = r[i] * dr;
		if (1000 >= r[i])
			g[i] = r[i] * 0;
		else if (1000 < r[i] && r[i] <= 2000)
			g[i] = (r[i] * 0.12);
		else if (2000 < r[i] && r[i] <= 5000)
			g[i] = (r[i] * 0.18);
		else if (5000 < r[i])
			g[i] = (r[i] * 0.28);
	}
	for (i = 0; i < 5; i++)
	{
		n[i] = r[i] + g[i];
		total = total + t[i];
		dis = dis + d[i];
		gst = gst + g[i];
		amount = amount + n[i];
	}

	printf("\n qty\trate\tamount\tdis.\tr-Amt\tGst\tnetamount:");

	for (i = 0; i < 5; i++)
	{
		printf("\n %d\t%d\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f", qty[i], rate[i], t[i], d[i], r[i], g[i], n[i]);
	}
	printf("\n ------------------------------------------------------------------------");
	printf("\n total amount :%.2f", total);
	printf("\n less :total discount :%.2f", dis);
	printf("\n total gst :%.2f", gst);
	printf("\n amount paid :%.2f", amount);

	return 0;
	;
}
