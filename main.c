#include <stdio.h>
#define FIVE 5
#define NUMBER 150
#define WEEK 20
int main(void)
{
    int friends = FIVE;
    int weeks = 0;
    while( friends < NUMBER /*|| weeks < WEEK */ )
    {
        weeks++;
        friends -= weeks;
        friends *= 2;
        printf("at No.%d week , Rabund has %d friends.\n",
                weeks , friends);
    }
    return 0;
}
