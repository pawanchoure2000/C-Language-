
import java.lang.*;
class circle
{
    double x , y ;
    double r ;
    double circumference()
    {
        return 2*3.14*r;
    }
    
    double area()
    {
        return 22/7*r*r;
    }
}

class box
{
    double width;
    double height;
    double depth;
   
    double area()
    {
        double a;
        a=(width*height + height*depth + depth*width );
        return a;
    }
    double volume()
            {
                double v;
                v=width*height*depth;
                return v;
            }
}

class encapsulation
{
    public static void main(String args[])
    {
        circle c = new circle();
        box b = new box();
        c.x=3 ; c.y=4 ; c.r=5 ;
        b.width=12 ; b.height=21 ; b.depth=31 ;
        System.out.println("circumference "+ c.circumference() + "area " + c.area());
        System.out.println("area : " + b.area() + "volume "+ b.volume() );
    }
}

