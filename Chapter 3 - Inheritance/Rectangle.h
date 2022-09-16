class Rectangle
{
    protected:
        double width;
    private:
        double length;
    
    double getLength() const;
    double calculatePerimeter() const;
    void print() const;

    void setLength(double) ;
    Rectangle(double, double);
};