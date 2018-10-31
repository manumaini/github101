#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
	int m[5][5];
    int n[5][5];
int get_matrix1(int a, int b){
	

	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("enter the value of [%d][%d] :",i,j);
			scanf("%d",&m[i][j]);
			
		
			
		}
			
	}
	printf("the entered matrix is :\n");
	for(int k=0;k<a;k++){
		for(int l=0;l<b;l++){
			printf("%d ",m[k][l]);
			
			
		
			
		}
		printf("\n");
			
	}
	return 0;
}

int get_matrix2(int a, int b){
	
	
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("enter the value of [%d][%d] :",i,j);
			scanf("%d",&n[i][j]);
			
		
			
		}
			
	}
	printf("the entered matrix is :\n");
	for(int k=0;k<a;k++){
		for(int l=0;l<b;l++){
			printf("%d ",n[k][l]);
			
			
		
			
		}
		printf("\n");
			
	}
	return 0;
	
}
int add(int a, int b){
	for (int i=0;i<a;i++){
	for (int j=0;j<b;j++){
		printf("%d ",m[i][j]+n[i][j]);
	}
	printf("\n");
	}
	return 0;
}
int sub(int a, int b){
	for (int i=0;i<a;i++){
	for (int j=0;j<b;j++){
		printf("%d ",m[i][j]-n[i][j]);
	}
	printf("\n");
	}
	return 0;
}
int multi(int a, int b , int c ){
	int r=0;
	for(int i=0;i<a;i++){for(int j=0;j<b;j++ ){
		for(int k=0;k<c;k++){
			
			r=r+(m[i][k]*n[k][j]);
			if(k==c-1){
			printf("%d",r);
			r=0;
		}
		}
		
		printf(" ");
	}
	printf("\n");
	}
}
	int trans1(int a,int b){
	
	
		char c;
		int t[a][b];
		
		system("cls"); 
	
		
			for (int i=0;i<a;i++){
				for(int j=0;j<b;j++){
				t[j][i]=m[i][j];
					
					
				}
			}
			
		for (int k=0;k<a;k++){
				for(int l=0;l<b;l++){
				printf("%d ",t[k][l]);
					
					
				}
				printf("\n");
			}
	}
	int trans2(int a , int b){
		int t[a][b];
		
		system("cls"); 
	
		
			for (int i=0;i<a;i++){
				for(int j=0;j<b;j++){
				t[j][i]=n[i][j];
					
					
				}
			}
			
		for (int k=0;k<a;k++){
				for(int l=0;l<b;l++){
				printf("%d ",t[k][l]);
					
					
				}
				printf("\n");
			}
		
		
	}


int main(){
	char select;
	char oprator;
	printf("********************************************************************************");
	printf("********************************************************************************");
	printf("\n\n\n\n");
	printf("-------------------------------MATRIX CALCULATOR--------------------------------\n\n\n\n");
	printf("********************************************************************************");
	printf("********************************************************************************");
	printf("\n\n\n\n");
	printf("select from the following :\n s to start");
	getch();
	select=toupper(getch());
	if (select=='S') goto home;
	
	else  {
		exit(1);
	}
	
	
	home: 
	system("cls");
	int a,b,c,d;
	char tsel;
	
	printf("enter the number of rows of matrix 1:");
	scanf("%d",&a);
	printf("enter the number of column of matrix 1:");
	scanf("%d",&b);
	get_matrix1(a,b);
	printf("enter the nnumber of rows of matrix 2:");
	scanf("%d",&c);
	printf("enter the number of column of matrix 2:");
	scanf("%d",&d);
	get_matrix2(c,d);
	
	printf("press any key to continue");
	getch();
	selection :
	system("cls");
	printf("select the operator from below :\n 1.A to add \n 2.B to subtract\n 3.C to multiplcation\n 4. T for transpose \n 5.R to start again\n  ");
	oprator=toupper(getch());
	
	if (oprator=='A'){
	 system("cls");
	printf("result :\n");
	add(a,d);
	} 
	
	
	
	else if (oprator=='B'){
	system("cls");
		printf("result :\n");
		sub(a,d);
		}
		
	else if (oprator=='C'){
	system("cls");
		printf("result :\n");
		multi(a,d,b);
		}	
	else if (oprator=='T'){
			back :
			system("cls");
			printf("select the matrix which you want to find the transpose (a & B)  :");
		tsel=toupper(getch());
			if (tsel=='A')
			trans1(a,b);
			else if(tsel=='B')trans2(c,d);
			else {printf("select the right matrix : ");
			goto back;
			}
		}
	else if (oprator=='D'){
		
		
		
		
		
		
		
	}	
	else if (oprator=='R') goto home ;
	else {printf("enter the right operator ");
	goto selection ;
	
	
	
	}	
	


	
	 
	}

