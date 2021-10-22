#include <iostream.h>
#include <conio.h>

main(){
       int n,i=1;
       float nilai,rata,jml=0;
       
       cout<<"Input banyak nilai = ";cin>>n;
       while(i<=n)
        { cout<<"Input Nilai "<<i<<" = " ;cin>>nilai;
         jml=jml+nilai;
         rata=jml/n;
         i++;}
        cout<<"\nTotal nilai = "<<jml;
        cout<<"\nRata nilai  = "<<rata;
        getch();}   
