#include <iostream.h>
#include <conio.h>
main(){
       int n,i=1;
       float nilai,rata,jml=0;
       cout<<"Input banyak nilai "<<i<<" = " ;cin>>n;
       do
        {cout<<"Input Nilai "<<i<<" = " ;cin>>nilai;
        jml=jml+nilai;
        i++;}
       while(i<=n);
       cout<<"\nTotal nilai = "<<jml;
       cout<<"\nRata nilai  = "<<rata;
getch();}
