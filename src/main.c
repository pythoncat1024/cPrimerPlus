#include <stdio.h>

void handle_tr(double * trots, int size);
void handle_cl(short (* ptr)[30], int row);
void handle_sh(long (*ptr)[10][15], int x);

void h_tr(int size, double * tr);
void h_cl(int row, int size, short clops[][row]);

void h_sh(int x,int y,int z, long shots[][y][z]);
int main(void)
{
    double trots[20];
    short clops[10][30];
    long shots[5][10][15];
    return 0;
}
