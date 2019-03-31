#include <stdio.h>

int main(void){
    const int a = 12;
    const int b = 2008;
    const float c = 12.5F;
    const double d = 3.1215927;
    const char name[40] = "Tomcat";
    const float cash = 31.259F;

    printf("The [%10.5s] family just may be $[%-3.2f] dollars richer!\n",name,cash);

    printf("[%9d],[% 9d],[%09d],[%-9d]\n\n",a,a,a,a);
    printf("[%8.2f],[%-8.2f],[% 8.2f],[%#x],[%#o],[%#8.2f]\n\n",
            c,c,c,a,b,c);
    printf("[%g],[%#g],[%#e],[%7.0g],[%3.1e],[%%],[%#E],[%a]",
            d,d,d,d,d,d,d);
    return 0;
}
/*
 * 输出如下:
[       12],[       12],[000000012],[12       ]

[   12.50],[12.50   ],[   12.50],[0xc],[03730],[   12.50]

[3.12159],[3.12159],[3.121593e+00],[      3],[3.1e+00],[%],[3.121593E+00],[0x1.8f90597ef756ep+1]
 */
