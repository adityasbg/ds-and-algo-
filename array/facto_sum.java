import java.math.BigInteger;
import java.util.Scanner;



class facto_sum{


public static void main(String [] args){
int  n ; 
int []arr=new int [1005];
Scanner sc = new Scanner(System.in);
n= sc.nextInt();
for(int i =0 ; i< n ; i++){
    arr[i]=sc.nextInt();
}

System.out.print(facto_summ(arr ,  n));
}



static BigInteger factorial(int arr){
   
    BigInteger fact = BigInteger.ONE;
    for(int i =2 ; i<= arr ;i++){
        fact =fact.multiply(BigInteger.valueOf(i));
        
    }
    
    return fact;
}

static BigInteger  facto_summ(int  []arr , int  n){

    BigInteger sum = BigInteger.ZERO;

    for(int  i =0 ; i< n ;i++){
      sum = sum.add(factorial(arr[i]));  

    }
    BigInteger res = sum.mod(BigInteger.valueOf(107));
    return  res;

}

}