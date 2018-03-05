#ifndef PAWN_H
#define PAWN_H

#include "mainwindow.h"
#include "QIcon"
#include "QPixmap"

class Pawn
{
public:

    // pre: none
    // post: creates a pawn
    Pawn()
    {

    }

    // pre: none
    // post: creates a pawn object at given position
    Pawn(int x, int y)
    {
        _px = x;
        _py = y;
    }

    Pawn(int x, int y, QString file)
    {
        _px = x;
        _py = y;
        pic = QIcon(file);
    }

    // pre: I DONT KNOW YET
    // post: destroys piece, entity, icon, etc...
    /*~Pawn()
    {
        delete _px;
    }*/

    // pre: none
    // post: moves the piece at given position
    void move_piece(int x, int y)
    {
        _px = x;
        _py = y;
    }

private:

    // position
    int _px, _py;
    //icon
    QIcon pic;

};

#endif // PAWN_H
