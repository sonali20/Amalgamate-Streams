/****************************
Test file written to test the 'amalgamatedStream' class

Author: Sonali Deshpande
****************************/

#include <iostream>
#include "minStream.h"
#include "inputMinStream.h"
#include "amalgamatedStream.h"

using namespace std;

int main()
{
    // Create a vector of minStreams
    inputMinStream data_stream1({0,3,6,9});
    inputMinStream data_stream2({2,4,7,10});
    inputMinStream data_stream3({1,5,8,11,12});

    vector<minStream*> data_streams;
    data_streams.push_back(&data_stream1);
    data_streams.push_back(&data_stream2);
    data_streams.push_back(&data_stream3);
    
    // Create amalgamated stream from minStreams
    amalgamatedStream combined_data(data_streams);

    while (!combined_data.isEmpty()) {
        cout<<combined_data.getNext()<<endl;
    }

    return 0;
}
