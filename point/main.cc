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
    return m_x;
}
void Point::set_y(double y)
{
    return m_y;

}
Point::Point()
{
    set_x(0);
    set_y(0);

}




