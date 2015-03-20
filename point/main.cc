#include <iostream>


class Point
{
    public:

        Point();
        Point(double , double);
        double x();
        void set_x(double);
        double y();
        void set_y(double);

    private:
        double m_x;
        double m_y;

};

void Point::set_x(double x)
{
     m_x = x;
}
void Point::set_y(double y)
{
    m_y = y;

}
Point::Point()
{
    set_x(0);
    set_y(0);

}
Point::Point( double x, double y)
{
    set_x(x);
    set_y(y);

}




