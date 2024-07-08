#include <stdio.h>

void draw_circle(int xc, int yc, int r);
void print_table_header();
void print_table_row(int x, int y, int p);

int main() {
    int xc, yc, r;

    printf("Enter the center of the circle:\n");
    printf("Xc = ");
    scanf("%d", &xc);
    printf("Yc = ");
    scanf("%d", &yc);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    printf("Tabulation of plot pixels for the first sector of the circle:\n");
    print_table_header();
    draw_circle(xc, yc, r);

    return 0;
}

void draw_circle(int xc, int yc, int r) {
    int x = 0;
    int y = r;
    int p = 1 - r;

    print_table_row(x, y, p);

    while (x < y) {
        x++;
        if (p < 0) {
            p += 2 * x + 1;
        } else {
            y--;
            p += 2 * (x - y) + 1;
        }
        print_table_row(x, y, p);
    }
}

void print_table_header() {
    printf("%-10s %-10s %-10s\n", "x", "y", "p");
    printf("-------------------------------\n");
}

void print_table_row(int x, int y, int p) {
    printf("%-10d %-10d %-10d\n", x, y, p);
}
