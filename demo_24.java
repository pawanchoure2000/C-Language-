
import java.applet.Applet ;
import java.awt.Color;
import java.awt.Graphics;

public class demo_24 extends Applet {
public void init()
{
    setBackground(Color.YELLOW);
    resize(400,400);
}

public void  paint (Graphics g)
{
    g.drawString("applet background ", 0, 50 );
}
    
}
