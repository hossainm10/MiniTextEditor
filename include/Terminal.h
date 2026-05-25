#include <iostream>
#include <termios.h>

class Terminal{
    private:
        termios orignal_;
    public:
        Terminal();
        ~Terminal();
        void disableRawMode();

        void enableRawMode();

        int readKey();

        int getWindowRows();
        int getWindowCols();

        void clearScreen();
        void moveCursor(int row, int col);
        void showCursor();

};
