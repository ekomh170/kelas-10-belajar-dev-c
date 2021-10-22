#include <stdio.h>
int main()
{
    int jam, besar, bayar;
    printf ("berapa jam kamu bekerja?");
    scanf ("%d",&jam);
    printf ("Berapa besar gaji tiap jamnya?");
    scanf ("%d",&besar);
    bayar=jam*besar;
    printf ("kamu mendapatkan gaji Rp%d", bayar);
return 0;
}      
