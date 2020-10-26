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

Participant* CreeazaParticipant(){
    system("cls");
    cout<< "Alegeti nationalitatea: "<<endl;
    cout<< "1. romana "<<endl;
    cout<< "2. franceza "<<endl;
    cout<< "3. germana "<<endl;
    cout<< "4. alta "<<endl;
    us nrTast;
    cin>>nrTast;
    while(nrTast>4||nrTast==0){
       cout<<"Nu ati introdus un numar valid...  mai incercati odata!"<<endl;
       nrTast=0;
       cin>>nrTast;}
    if(nrTast<5){
     switch(nrTast){
    case 1: {Participant* rom=new Roman(); return rom;break;}
    case 2: {Participant* fra=new Francez(); return fra;break;}
    case 3: {Participant* ger=new German(); return ger;break;}
    case 4: {Participant* alt=new Participant(); return alt; break;}
    }
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
    us rom=0;
    us fra=0;
    us ger=0;
    us alt=0;
     for(us x=0;x<pntParticipanti.size();++x)
      {
     switch(pntParticipanti[x]->Vorbeste())
     {
     case 0: ++alt; break;
     case 1: ++rom; break;
     case 2: ++ger; break;
     case 3: ++fra; break;
     }
      }
      if((rom>0)||(fra>0)||(ger>0)||(alt>0))
      {
      cout<< "Participanti inscrisi pana acum:"<<endl;
      cout<< rom<<" romani"<<endl;
      cout<< fra<<" francezi"<<endl;
      cout<< ger<<" germani"<<endl;
      cout<< alt<<" altii"<<endl;
      system("pause");
      }
     }
}
    pntParticipanti.clear();

    return 0;
}
