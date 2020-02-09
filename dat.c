#include <stdio.h>


int main(){
	
	//declare and fill two arrays to keep track of table values
	int dat1[7];
	int dat2[7];

	printf( "Enter a value for a: ");
	scanf("%d", &dat1[4]);
        printf( "Enter a value for b: ");
	scanf("%d", &dat1[5]);

	dat1[0] = 1;	
	dat1[1] = 0;
	dat1[2] = 0;
	dat1[3] = 1;
	dat1[6] = 0;	

	dat2[0] = 0;
        dat2[1] = 0;
        dat2[2] = 0;
        dat2[3] = 0;
        dat2[4] = 0;
        dat2[5] = 0;
        dat2[6] = 0;

                //print first line of the division algorithm table
                printf("%10d  %10d  %10d  %10d  %10d  %10d  %10d \n", dat1[0], dat1[1], dat1[2], dat1[3], dat1[4], dat1[5], dat1[6]);



	//while loop to calculate table values for part 1
	while (dat1[5] != 0){
	
		//calculate dat2, the values for the next line of the table
		//must calculate the 7th valye because it is vital to
		//the calculate of the other values in dat2
		//
		//to calculate dat2[6] we must subtract the remainder
		//to divide and find the quotient
		dat2[6] = ( dat1[4] - ( dat1[4] % dat1[5] ) ) / dat1[5];
		dat2[0] = dat1[1];
		//calculate the remainder of each u and v
                dat2[1] = dat1[0] - ( dat1[1] * dat2[6] );
                dat2[2] = dat1[3];
                dat2[3] = dat1[2] - ( dat1[3] * dat2[6] );
                dat2[4] = dat1[5];
                dat2[5] = dat1[4] - ( dat1[5] * dat2[6] );
	
		//roll over values for next iteration of loop
	        dat1[0] = dat2[0];
        	dat1[1] = dat2[1];
  	     	dat1[2] = dat2[2];
	        dat1[3] = dat2[3];
	        dat1[4] = dat2[4];
        	dat1[5] = dat2[5];
	        dat1[6] = dat2[6];

                //print contents of dat1 spaced apart to create the next
                //line of the division algorithm table
		printf("%10d  %10d  %10d  %10d  %10d  %10d  %10d \n", dat1[0], dat1[1], dat1[2], dat1[3], dat1[4], dat1[5], dat1[6]);
                                                
	}
        
	return 0;

}


