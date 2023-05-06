import java.awt.event.*;
import java.awt.*;

class Calculater
{
    public static void main(String Arg[])
    {
       MarvellousCalculater mobj=new MarvellousCalculater(400,400,"marvellous");
    }
}
class MarvellousCalculator extends  windpwAdapter//implement 
{
    public Frame fobj;
    public Butten b1,b2,b3,b4;

    public MarvellousCalculater(int width,int height,String title)
 {   
    fobj=new Frame(title);
    fobj.setSize(width,hight);
    fobj.setVisible(true);

    fobj.addWindowListener(this);

    b1=new Butten("ADD");
     b2=new Butten("SUB");
      b3=new Butten("MULT");
       b4=new Butten("DIV");

       t1=new TextField();
       t2=new TextField();

       fobj.add(b1);
       fobj.add(b2);
       fobj.add(b3);
       fobj.add(b4);

       fobj.add(t1);
       fobj.add(t2);



       lobj=new Lable();
       lobj.setBounds(150,25,200,100);
       fobj.add(lobj);

       fobj.setLayout(null);
       fobj.setVisiable(true);

       b1.setBounds(10,280,80,40);
        b2.setBounds(280,280,80,40);
         b3.setBounds(190,200,80,40);
          b4.setBounds(290,280,80,40);

 }
  public void windowClosing(windwEvent obj)
  {
    System.exit(0);
  }
}










