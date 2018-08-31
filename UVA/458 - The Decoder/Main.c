#include <stdio.h>

int main(){
	char in[255];
	char out[255];
	char temp;
	
	while(fgets(&in, 255, stdin) != NULL){
		int i;
		for(i = 0 ; i < 255 && in[i]!='\0' ; i++){
			if(in[i]!='\n')
				out[i] = in[i]-7;
		}
		out[i-1] = '\0';
		printf("%s\n",out);
	}
}
