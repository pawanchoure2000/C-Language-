
import java.applet.Applet ;
import java.awt.Color;


public class demo_25 extends Applet {

public void  paint (Graphics g)
{
    int x=0 ;
    int y=0;
    
    String msg="";
    x=Integer.parseInt(getparameter("x position "));
    y=Integer.parseInt(getparameter("y position ")) ;
    
    msg = getparameter("msg ");
    
    g.drawString(" msg ", x , y );
}
    
}
