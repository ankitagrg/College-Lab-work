#include <stdio.h>

void draw_ellipse(int xc, int yc, int a, int b);
void print_table_header();
void print_table_row(int x, int y, int p1);

int main()
{
    int xc, yc, a, b;

    printf("Enter the center of the ellipse:\n");
    printf("Xc = ");
    scanf("%d", &xc);
    printf("Yc = ");
    scanf("%d", &yc);
    printf("Enter the lengths of the major (a) and minor (b) axes:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("Tabulation of plot pixels for Region 1 of the ellipse:\n");
    print_table_header();
    draw_ellipse(xc, yc, a, b);

    return 0;
}

void draw_ellipse(int xc, int yc, int a, int b)
{
    int x = 0;
    int y = b;
    double a2 = a * a;
    double b2 = b * b;
    double p1 = b2 - a2 * b + 0.25 * a2;

    print_table_row(x, y, p1);

    while (b2 * x <= a2 * y)
    {
        x++;
        if (p1 < 0)
        {
            p1 += b2 * (2 * x + 1);
        }
        else
        {
            y--;
            p1 += b2 * (2 * x + 1) - 2 * a2 * y;
        }
        print_table_row(x, y, p1);
    }
}

void print_table_header()
{
    printf("%-10s %-10s %-10s\n", "x", "y", "p1");
    printf("-------------------------------\n");
}

void print_table_row(int x, int y, double p1)
{
    printf("%-10d %-10d %-10.2lf\n", x, y, p1);
}
