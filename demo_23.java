
import java.applet.Applet;
import java.awt.Graphics;

public class demo_23 extends Applet{
    
    public void init()
    {
        resize(300,300);
    }
    
    public void paint(Graphics g)
    {
        g.drawString("resize to 300*300 ", WIDTH, WIDTH);
    }
}
