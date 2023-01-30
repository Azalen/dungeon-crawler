#ifndef PASSIVE_H
#define PASSIVE_H

class Active;

class Passive {
    private:

    public:
        virtual void notify(Active * source) = 0;
};

#endif