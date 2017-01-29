#ifndef SOFTSYS_ASOCIAL_AARDVARK_CUBEFACE_H
#define SOFTSYS_ASOCIAL_AARDVARK_CUBEFACE_H

#include <string>

class CubeFace {
private:
    int n_;
    int** face_;
    void transposeFace();
    void reverseRows();
    void reverseCols();
    void rotate90Clockwise();
    void rotate180();
    void rotate90Anticlockwise();

public:
    enum Color {Red, Blue, Orange, White, Yellow, Green};
    CubeFace(CubeFace::Color color);
    int** getFace();
    void rotateFaceClockwise(int degrees);
    void setRow(int whichRow, int* row);
    int* getRow(int whichRow);
};


#endif //SOFTSYS_ASOCIAL_AARDVARK_CUBEFACE_H
