//
// Created by:
// colton teefy, noah holcombe, zeke lawal, chidi azuh, andrew sweitzer
//

#ifndef OSPROJECT_DMA_H
#define OSPROJECT_DMA_H

#include <iostream>

using namespace std;


class DMA {
    bool run = true;
    int scenario = 0;
    int io = 0;

public:
    void read(int channel, int physicalRAMAddress, int startAddress) {

    }

    void write(int channel, int physicalRAMAddress, int startAddress) {

    }


    void startRun(int channel, int physicalRAMAddress, int startAddress) {
        while (run) {
            switch (scenario) {
                case 0:
                    read(channel, physicalRAMAddress, startAddress);
                case 1:
                    write(channel, physicalRAMAddress, startAddress);
                default:break;
            }
        }
        io = io + 4;
    }
};


#endif //OSPROJECT_DMA_H
