#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int countAlphabet(char* string){
	int alpt=0;
	while(*string){
		if(('A' <= *string && *string<='Z')||('a' <= *string && *string <= 'z')){
			alpt++;
		}
		*string++;
	}
	printf("So chu cai la: %d\n",alpt);
	return alpt;
	}
int countDigits(char *string){
	int digits=0;
	while(*string){
		if('0'<= *string && *string <= '9'){
			digits++;
		}
		*string++;
	}
	printf("So chu so la: %d\n",digits);
	return digits;
	}
int main(){
	int n;
	char str[100];
	int alpt,digits;
	do{
		printf("\n\t\tMENU\t\t\n");
		printf("1. Nhap vao ky tu\n");
		printf("2. In ra do dai chuoi va noi dung vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai trong chuoi\n");
		printf("5. In ra so luong chu so trong chuoi\n");
		printf("6. In ra so luong ky tu dac biet trong chuoi\n");
		printf("7. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao ky tu: ");
				scanf("%s",&str);
				break;
			case 2:
				printf("Do dai chuoi: %d\n",strlen(str));
				printf("Chuoi vua nhap: %s\n",str);
				break;
			case 3:
				for(int i=strlen(str)-1;i>=0;i--){
				printf("%c",str[i]);
				}
				break;
			case 4:
				countAlphabet(str);
				break;
			case 5:
				countDigits(str);
				break;
			case 6:
				printf("So ky tu dac biet la: %d",strlen(str)-digits-alpt);
				break;
			case 7:
				exit(0);
		}
	}while(1==1);
}