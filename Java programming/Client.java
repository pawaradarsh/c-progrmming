import java.net.*;
import java.io.*;

class Client
{
    public static void main(String Arg[]) throws Exception
    {
         System.out.println("Client application is running...");

         System.out.println("Client is waiting for connection");
         Socket s=new Socket("localhost",2100);

         PrintStream ps=new PrintStream(s.getOutputStream());

         BufferedReader br1=new BufferedReader(New InputStreamReader(s.getInputStream()));
         BufferedReader br2=new BufferedReader(New InputStreamReader(System.in));

         String Str1,str2;
         while(str1=br2.readLine()).equals("end")
         {
             ps.println(str1);
             System.out.println("Enter message for server:");
             str2=br1.readLine();
             System.out.println("Server says:"+str2);   
         }

         System.out.println("thanks for");
    }
}