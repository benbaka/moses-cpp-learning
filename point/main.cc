#include <iostream>


class Point
{
    public:

        point();

        double  x();
        void set_x(double x);

        double y();
        void get_y(double y);

    private:
        double m_x;
        double m_y;


};
int Point::get_x()
{
    return m_x;
}
int Point::get_y()
{
    return m_x;
}
int Point::Point()
{
    return
}
int Point:: Point(double,double)
{
    return 0;
}
int set_x(double, double)
{
    return m_x;
}
int set_y(double, double)
{
    return m_y;
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


