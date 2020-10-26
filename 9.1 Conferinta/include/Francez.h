#ifndef FRANCEZ_H
#define FRANCEZ_H
#include<Participant.h>

class Francez : public Participant
{
public:
    Francez();
    virtual ~Francez();
    Limba Vorbeste(){return  franceza;}
};

#endif // FRANCEZ_H
