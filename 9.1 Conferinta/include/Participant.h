#ifndef PARTICIPANT_H
#define PARTICIPANT_H

enum Limba{engleza=0,romana,germana,franceza};
class Participant
{
public:
    //Participant();
    virtual Limba Vorbeste(){return engleza;}
};

#endif // PARTICIPANT_H
