import java.util.Scanner;


public class pat17{



public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();

	int nst =n/2;
	int nsp =1;
	int row=1;

	while(row<=n){
		// star printing
		for(int cst =1  ; cst<=nst  ;cst++ ){
			System.out.print("*");
		}


		// space printing 

		for(int csp =1 ; csp<=nsp ; csp++ ){
			System.out.print(" ");	
		}
		


		// star printing
	for(int cst =1  ; cst<=nst  ;cst++ ){
			System.out.print("*");
		}

           System.out.println();

	
		if(row <=n/2){
		
			nsp=nsp+2;
			nst=nst-1;
		}
		else
			{
				nsp=nsp-2;
			 nst=nst+1;


			}
	row=row+1;




	
	}



}



}
