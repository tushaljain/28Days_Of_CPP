
import java.util.Scanner;
public class SUNNYNUMBER {
       public static void main(String args[]) {
    	   int a,i;
    	   int k=0;
    	   Scanner sc=new Scanner(System.in);
    	   a=sc.nextInt();
    	   a=a+1;
    	   for(i=1;i<a;i++) {
    		   if(i*i==a) {
    			   k=1;
    			   a=i;
    			   
    		   }
    	   }
    	   if(k == 1) {
    		   System.out.println(" a sunny number for ");
    		   System.out.println(+a);
    	   }
    	   else {
    		   System.out.println(" a not sunny number ");
    	   }
       }
}