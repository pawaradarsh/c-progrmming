import java.util.Scanner;

class ExepsionDemo1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int Arr[]= new int[5];
        Arr[0]=11;
        Arr[1]=21;
        Arr[2]=31;
        Arr[3]=41;
        Arr[4]=51;

        int Index=0;
        System.out.println("enter the index");
        Index=sobj.nextInt();

        System.out.println("data at the specified index is"+Arr[Index]);

 
    }
}    