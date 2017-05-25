/*********************
'minStream' is a class that defines a stream of data where the numbers are in increasing order

Author: Sonali Deshpande
*********************/

#ifndef STREAM_H
#define STREAM_H

class minStream
{
    public:
        virtual bool isEmpty()=0;
        virtual int getNext()=0;
};

#endif // STREAM_H
