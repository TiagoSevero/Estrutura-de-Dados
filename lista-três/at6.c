#include<stdio.h>
#include <malloc.h>
#include<stdlib.h>


char *s;

void alocar(int n){
	
	if (!(s = (char *)calloc(n+1 , sizeof(char)))) {
			printf("Não foi possível alocar o string\n");
			exit(0);
	}
}

int main() {
	   
	int n, i;     

	
	printf("Qual o tamanho de seu string? ");
	scanf("%d",&n);

	getchar();

	alocar(n);
		
	printf("Entre o string: ");
	gets(s);

	printf("String:");
	
	for(i=0;i<n;i++){
	   if(s[i] != 'a'){ 	
	      if(s[i] != 'e'){ 	
		 if(s[i] != 'i'){ 	
	            if(s[i] != 'o'){ 	
		       if(s[i] != 'u'){	
		          if(s[i] != 'A'){ 	
			     if(s[i] != 'E'){ 	
				if(s[i]!='I'){ 	
				   if(s[i] != 'O'){
				      if(s[i]!='U'){	 	
					 printf("%c", s[i]);
				      }
			           }
				}
			     }
		          }
		       }	
                    }
		 }
              }
	   }
	}				    

	printf("\n");
	free(s);
}
