#pragma once

#include <string>

class Puffancs ;
class Deltafa;
class Parabokor;

class Radiation
{
    public:
        Radiation() {}
        virtual ~Radiation();



        virtual int MasnapiIgeny(Puffancs* pl , int igeny);
        virtual int MasnapiIgeny(Deltafa* pl , int igeny);
        virtual int MasnapiIgeny(Parabokor* pl , int igeny);


    protected:

    private:
};

class AlfaRadiation : public Radiation {
public:
    static AlfaRadiation* instance();
        virtual int MasnapiIgeny(Puffancs* pl , int igeny) override;
        virtual int MasnapiIgeny(Deltafa* pl , int igeny) override;
        virtual int MasnapiIgeny(Parabokor* pl , int igeny) override;

    static void destroy();
protected:
    AlfaRadiation(){}
private:
    static AlfaRadiation* _instance;
};

class DeltaRaridation: public Radiation {
    public:
    static DeltaRaridation* instance();
        virtual int MasnapiIgeny(Puffancs* pl , int igeny) override;
        virtual int MasnapiIgeny(Deltafa* pl , int igeny) override;
        virtual int MasnapiIgeny(Parabokor* pl , int igeny) override;

    static void destroy();
protected:
    DeltaRaridation(){}
private:
    static DeltaRaridation* _instance;
};

class NincsRatiation : public Radiation {
        public:
    static NincsRatiation* instance();
        virtual int MasnapiIgeny(Puffancs* pl , int igeny) override;
        virtual int MasnapiIgeny(Deltafa* pl , int igeny) override;
        virtual int MasnapiIgeny(Parabokor* pl , int igeny) override;

    static void destroy();
protected:
    NincsRatiation(){}
private:
    static NincsRatiation* _instance;
};
