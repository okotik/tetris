#pragma once

#ifndef FIGURE_H
#define FIGURE_H

#define CHAR_EMPTY ' '
#define CHAR_OBJECT '•'
#define CHAR_LOCK '*'
#define CHAR_SIDE '#'

class Coordinates
{
public:
    Coordinates(int x, int y) : X(x), Y(y) {}
    Coordinates() : X(0), Y(0) {}
    int X;
    int Y;
};



class Figure
{
public:
    Figure(Coordinates, int, int);
    virtual ~Figure();

    int getSizeX() const { return sizeX; }
    int getSizeY() const { return sizeY; }

    virtual Figure* copy() = 0;
    virtual void rotate() = 0;

    Coordinates coord;
    char ** arr;

protected:
    Figure(Coordinates);
    void clearArray();
    void initArray();
    void flip();
    int sizeX;
    int sizeY;
};

//  **
//  **
class O : public Figure
{
public:
    O(int, int);
    virtual Figure* copy();
    virtual void rotate();
};

// ****
class I : public Figure
{
public:
    I(int, int, bool = 0);
    virtual Figure* copy();
    virtual void rotate();
    bool mySide;
};

//  ***
//   *
class T : public Figure
{
public:
    T(int, int, int = 0);
    virtual Figure* copy();
    virtual void rotate();
    int mySide;
};

//  *
//  *
//  **
class L : public Figure
{
public:
    L(int, int, int = 0, bool = 0);
    virtual Figure* copy();
    virtual void rotate();
    int mySide;
    const bool myFlip;
};

//  **
//   **
class Z : public Figure
{
public:
    Z(int, int, int = 0, bool = 0);
    virtual Figure* copy();
    virtual void rotate();
    int mySide;
    const bool myFlip;
};
#endif // FIGURE_H
