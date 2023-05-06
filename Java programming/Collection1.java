
import java.util.*;

class Collection1{
    public static void main(String arg[])
    {
        Hashtable <String,Integer> hobj= new Hashtable<String,Integer>();

        hobj.put("C programming",990);
        hobj.put("C++ programming",12000);
        hobj.put("java programming",780);
        hobj.put("paython programming",1650);

        System.out.println("Book price of java"+hobj.get("java programming"));
        hobj.remove("C++ programming");

        Enumeration eobj=hobj.keys();
        while(eobj.hasMoreElements())
        {
            System.out.println(eobj.nextElement());
        }
    }    
}