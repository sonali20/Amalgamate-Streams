/*************************
'amalgamatedStream' combines N minStreams into a single minStream

Author: Sonali Deshpande
**************************/

#ifndef AMALGAMATESTREAM_H
#define AMALGAMATESTREAM_H

#include <queue>
#include <vector>

#include "minStream.h"

class streamData {
    public:
        int val;
        minStream* stream_pointer;

        bool operator>(streamData other) const {
            return  val>other.val;
        }
};


class amalgamatedStream: public minStream
{
    public:
        amalgamatedStream(std::vector<minStream*>& min_streams);
        virtual bool isEmpty();
        virtual int getNext();

    private:
        std::priority_queue<streamData, std::vector<streamData>,std::greater<streamData> > min_heap_;
};

#endif // AMALGAMATESTREAM_H
