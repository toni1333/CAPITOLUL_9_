#ifndef GERMAN_H
#define GERMAN_H
#include<Participant.h>

class German : public Participant
{
public:
    German();
    virtual~German();
    Limba Vorbeste(){return germana;}
};

#endif // GERMAN_H
