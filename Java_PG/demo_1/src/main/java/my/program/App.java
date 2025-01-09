import java.util.Scanner
package my.program;

public class App 
{
    public static void main( String[] args )
    {
        Scanner in =  new Scanner(System.in);
        double x1, x2, y1, y2, r1, r2;
        x1 = in.nextDouble();
        y1 = in.nextDouble();
        r1 = in.nextDouble();
        x2 = in.nextDouble();
        y2 = in.nextDouble();
        r2 = in.nextDouble();
        System.out.println( "%d", r2 );
    }
}
