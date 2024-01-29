#ifndef BOX_H
#define BOX_H


class Box
{
    public:
        Box(double, double, double);
        void setWidth(double);
        void setLenght(double);
        void setHeight(double);
        double getWidth() const;
        double getLenght() const;
        double getHeight() const;
        void print() const;
        friend Box operator+(Box const& , Box const& );


    private:
        double width;
        double lenght;
        double height;

};

#endif // BOX_H
