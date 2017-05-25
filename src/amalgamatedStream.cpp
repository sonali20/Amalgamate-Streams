#include "amalgamatedStream.h"

amalgamatedStream::amalgamatedStream(std::vector<minStream*>& min_streams) {
    // Create a min heap by comparing the current value of every stream
    for (auto min_stream:min_streams) {
        streamData current_stream;
	current_stream.stream_pointer = min_stream;
        current_stream.val = min_stream->getNext();
        (this->min_heap_).push(current_stream);
    }
}

bool amalgamatedStream::isEmpty() {
    return this->min_heap_.empty();
}

int amalgamatedStream::getNext() {
    // The top of the heap contains the current minimum of all the streams and
    // hence will be returned as the next value for the amalgamated stream
    streamData top_stream = min_heap_.top();
    min_heap_.pop();
    int val = top_stream.val;

    // For the stream whose element will be returned, get the next element of the stream and add to heap again
    if (!((top_stream.stream_pointer)->isEmpty())) {
        top_stream.val = (top_stream.stream_pointer)->getNext();
        min_heap_.push(top_stream);
    }
    return val;
}
