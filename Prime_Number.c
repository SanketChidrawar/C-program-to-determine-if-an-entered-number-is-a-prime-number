//C program to determine if an entered number is a prime number

/*includes**************************************/
#include<stdio.h>
#include <string.h>

/*Macros****************************************/
 #define Yes                     1
 #define No                      0
 #define Min_Divisor_Val         2
 #define Max_Number_of_Divisor   1000
 
 /*Global veriables*****************************/
 int Entered_Number;
 int Arr[Max_Number_of_Divisor];
 int Num_of_divisor = 0;
 
 
 /*Function Declaration*************************/
 void TakeInput();
 int IsPrime(int Entered_Number);
 int Ret_divisor_cnt(int Arr[]);
 void PrintPrime(int check, int Num_of_divisor);
 
 

 
 
 /************************************************
 *@Brief      :Application entry point
 *@InputVer   :None
 *RetVal      : 0 - op success.
 *             -1 - op fail.
 *Note        :None.
 ***********************************************/
int main(){
memset(Arr, 0, sizeof(Arr));         //Set Array values to zero
TakeInput();                         //Ask input to user
int CheckPrime = IsPrime(Entered_Number);    //check the number is prime or not
Num_of_divisor = Ret_divisor_cnt(Arr);       //Return Maximum Number of Divisor count
PrintPrime(CheckPrime, Num_of_divisor);      // Print the statement-> number is prime or not

return 0;
}


/***********************************************
 *@brief      :This function takes the input from user
 *inputver    :None
 *Globvar     :int Entered_Number.
 *Note        :None
 *retval      :None
 ***********************************************/
void TakeInput(){
	printf("Enter the Number = ");
	scanf("%d",&Entered_Number);
}


/***********************************************
 *@brief      :return 1 -> prime
 *                    0 -> not prime
 *inputver    :int Entered_Number.
 *Globvar     :int Entered_Number.
 *Note        :None
 *retval      :0/1
 ***********************************************/
int IsPrime(int Entered_Number){
int flagIsPrime = Yes;          //flag to check the number is prime or not
int zero_indix = 0;             // zero indixing to start from 0th index of Array
for(int i=Min_Divisor_Val; i<Entered_Number; i++){
	if(Entered_Number%i == 0){      //remainder is zero -> Prime Number
		flagIsPrime = No;
		Arr[zero_indix] = i;       //Divisors of Entered Number collecting in Array
		zero_indix++;
	}	
}
return flagIsPrime;               //This flag send the status of the entered number is prime
}

int Ret_divisor_cnt(int Arr[]){
    for(int i=0; i<Max_Number_of_Divisor; i++){
        if(Arr[i] == 0){
            break;
        }
		else{
		    Num_of_divisor++;     //increment the number of Divisor count
    }
}
return Num_of_divisor;
}

/***********************************************
 *@brief      :Print if the Entered Number is prime
 *inputver    :IsPrime
 *Globvar     :None.
 *Note        :None
 *retval      :None
 ***********************************************/
void PrintPrime(int IsPrime, int Max_Num_of_divisor){
	if(IsPrime == Yes){                 
		printf("%d is a prime Number!",Entered_Number);
	}
	else if(IsPrime == No){
		printf("%d is not a prime Number! and is divisible by",Entered_Number);
	}
	
	if(IsPrime == No){   
	for(int i=0; i<Max_Num_of_divisor; i++){
	printf(" %d",Arr[i]);
	}
	}
}

