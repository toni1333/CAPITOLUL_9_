#ifndef ROMAN_H
#define ROMAN_H
#include<Participant.h>

class Roman : public Participant
{
public:
    Roman();
    virtual~Roman();
    Limba Vorbeste(){return  romana;}
};

#endif // ROMAN_H
