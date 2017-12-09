#ifndef TTY_H
#define TTY_H

#include "common.h"

typedef struct Tty
{
    uint8* buffer;
    uint16 currentLine;
    uint16 currentColumn;
    uint8 color;
    void* privateData;
} Tty;

Tty* createTty();
void destroyTty(Tty* tty);

void Tty_Print(Tty* tty, int row, int column, const char* text);
void Tty_Clear(Tty* tty);
void Tty_PutChar(Tty* tty, char c);
void Tty_PrintF(Tty* tty, const char *format, ...);
void Tty_MoveCursor(Tty* tty, uint16 line, uint16 column);
void Tty_ScrollUp(Tty* tty);

#endif // TTY_H