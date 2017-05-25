#include "inputMinStream.h"

inputMinStream::inputMinStream(std::vector<int> data) {
    this->data_ = data;
}

bool inputMinStream::isEmpty() {
    return index==data_.size();
}

int inputMinStream::getNext() {
    int val = this->data_.at(index);
    this->index++;
    return val;
}

