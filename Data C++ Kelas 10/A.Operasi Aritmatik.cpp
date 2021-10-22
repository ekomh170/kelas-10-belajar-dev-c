#include <iostream.h>
#include <conio.h>

 main() {
  int a,b,plus,min,kali,bagi,mod;
  cout<<"contoh penggunaan operator aritmatik\n";
  cout<<"masukan angka pertama(a) = ";cin>>a;  
  cout<<"masukan angka kedua  (b) = ";cin>>b;
  plus=a+b; min=a-b; kali=a*b;
  bagi=a/b; mod=a%b;
  cout<<"\nJumblah = "<<plus;
  cout<<"\nKurang  = "<<min;
  cout<<"\nKali    = "<<kali;
  cout<<"\nBagi    = "<<bagi;
  cout<<"\nModulo  = "<<mod;
  getch();}
