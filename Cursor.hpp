#pragma once

class Cursor {
    public:
        Cursor(int posX, int posY, int maxX, int maxY);
        void right();
        void left();
        void up();
        void down();
    private:
        int maxX;
        int maxY;
        int posX;
        int posY;
};