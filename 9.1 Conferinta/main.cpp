#include<iostream>
#include<vector>
#include<stdlib.h>
#include<Roman.h>
#include<Francez.h>
#include<German.h>
using namespace std;
typedef unsigned short us;

void Meniu() {
    system("cls");
    cout<< "Alegeti optiunea dorita: "<<endl;
    cout<< "1. Adaugare participant "<<endl;
    cout<< "2. Afisare sumar "<<endl;
    cout<< "0. Iesire "<<endl;
}

Participant* CreeazaParticipant() {
    system("cls");
    cout<< "Alegeti nationalitatea: "<<endl;
    cout<< "1. romana "<<endl;
    cout<< "2. franceza "<<endl;
    cout<< "3. germana "<<endl;
    cout<< "4. alta "<<endl;
    us nrTast;
    cin>>nrTast;
    switch(nrTast)
    {
    case 1: {Participant* ro=new Roman(); return ro;break;}
    case 2: {Participant* fr=new Francez(); return fr;break;}
    case 3: {Participant* de=new German(); return de;break;}
    case 4: {Participant* alta=new Participant(); return alta; break;}
    }
        return 0;
}

int main()
{
    vector<Participant*>pntParticipanti;
    us nrTast=1;
    while(nrTast!=0)
{
    Meniu();
    cin >>nrTast;
    if(nrTast==1)
    {
    pntParticipanti.push_back(CreeazaParticipant());
    }
    else if(nrTast==2)
 {
    system ("cls");
    us ro=0;
    us fr=0;
    us de=0;
    us alta=0;
     for(us i=0;i<pntParticipanti.size();++i)
      {
     switch(pntParticipanti[i]->Vorbeste())
     {
     case 0: ++alta; break;
     case 1: ++ro; break;
     case 2: ++de; break;
     case 3: ++fr; break;
     }
      }
      if(ro>0 || fr>0 || de>0 || alta>0)
      {
      cout<< "Participanti inscrisi pana acum:"<<endl;
      cout<< ro<<" romani"<<endl;
      cout<< fr<<" francezi"<<endl;
      cout<< de<<" germani"<<endl;
      cout<< alta<<" altii"<<endl;
      system("pause");
      }
     }
}
    pntParticipanti.clear();

    return 0;
}
