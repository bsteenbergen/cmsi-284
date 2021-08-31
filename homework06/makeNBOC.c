#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool whichEnd () {
    int result;
    unsigned int i = 1;
    char *c = (char*)&i;

    if (*c) {
        return true; // little endian
    }
    else {
        return false; // big endian
    }
}

uint64_t NBO (uint64_t  in) {
    uint64_t  leftMostByte, leftMidByte, rightMostByte, rightMidByte, answer;

    if (whichEnd()) {
        leftMostByte = (in & 0x000000FF) >> 0;
        leftMidByte = (in & 0x0000FF00) >> 8;
        rightMidByte = (in & 0x00FF0000) >> 16;
        rightMostByte = (in & 0xFF000000) >> 24;

        leftMostByte <<= 24;
        leftMidByte <<= 16;
        rightMidByte <<= 8;
        rightMostByte <<= 0;

        answer = (leftMostByte | leftMidByte | rightMidByte | rightMostByte);
        return answer;
    }
    else {
        return in;
    }
}