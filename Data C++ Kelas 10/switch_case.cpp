#include <iostream.h>
#include <conio.h>

using namespace std;

    int pilihan;
    string text;
    
int main()
{   
    cout<<"daftar menu makanan di restoran family frendly\n\n";
    cout<<"1.ciken\n2.kentang\n3.nasi\n4.bubur\n5.mie\n\n\n";
    
    ulangi:
    
    cout<<"Masukan Pilihan Anda:";
    cin>>pilihan;
    
    switch(pilihan)
    {
          case 1 :
               text="anda memilih makan dengan ciken";
               break;
          case 2 :
               text="anda memilih makan dengan kentang";
               break;
          case 3 :
               text="anda memilih makan dengan nasi";
               break;
          case 4 :
               text="anda memilih makan dengan bubur";
               break;
          case 5 :
               text="anda memilih makan dengan mie";
          default :
               goto ulangi;
               break;
    }
    cout<<text;
    
    getch();
    return 0;
}
