#ifndef INPUTMINSTREAM_H
#define INPUTMINSTREAM_H

#include <vector>
#include "minStream.h"

class inputMinStream: public minStream
{
    public:
        inputMinStream(std::vector<int> data);
        virtual bool isEmpty();
        virtual int getNext();

    private:
        std::vector<int> data_;
        int index = 0;
};

#endif // INPUTMINSTREAM_H

