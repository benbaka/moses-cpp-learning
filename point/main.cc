#include <iostream>


class Point
{
    int x;
    int y;

    public:
        void set_x(int x, int y);
        int get_x();

        void set_y(int x, int y);
        int get_y();

};

int main (int argc, char* argv[])
{
    Point p;
    p.set_x(4,3);
    p.set_y(2,4);

    std::cout << p.get_x() <<std::endl;
    std::cout << p.get_y() << std::endl;

    return 0;
}


