#include <iostream>


class Point
{
    double m_x;
    double m_y;

    public:
        Point();
        Point(double x, double y);

        void set_x(double , double );
        int get_x();

        void set_y(double , double );
        int get_y();

};
int Point::get_x()
{
    return m_x;
}
int Point::get_y()
{
    return m_x;
}


int main (int argc, char* argv[])
{
    Point p;
    p.set_x(4,3);
    p.set_y(2,4);

    std::cout << p.get_x() <<std::endl;
    std::cout << p.get_y() << std::endl;

    return 0;
}


