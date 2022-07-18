/* funds1 передача структуры в качестке аргументов */
#include <stdio.h>
#define FUNDLEN 50
struct funds
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(double, double);
int main(void)
{
	struct funds stan = {
		"Garlick-Melon bank",
		4000.33,
		"lucky saving and loan",
		8345.93
	};
	printf("Stan has a total of $%.2f.\n",
		sum(stan.bankfund, stan.savefund));
	return 0;
}

double sum(double x, double y)
{
	return (x + y);
}