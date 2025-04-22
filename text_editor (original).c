#include <stdio.h>
#include <string.h>

#define max_len 100

int main()
{
	char c,s[max_len],t[max_len],i[max_len],t_id=-1;
	printf("Enter string: ");
	fgets(s,max_len,stdin);
	if(s[strlen(s)-1] = '\n')
		s[strlen(s)-1] == '\0';
	printf("Enter f/i/d: ");
	scanf("%c",&c);
	getchar();

	switch (c){
		case'f':{
			printf("Enter string: ");
			fgets(t,max_len,stdin);
			if(t[strlen(s)-1] == '\n')
				t[strlen(s)-1] = '\0';
			char *p = strstr(s,t);
			if(p!=NULL){
				t_id = p-s;
				printf("index %d\n",t_id);
			}
			else{
				printf("string not found\n");
			}		
			break;
		}
		case'd':{
			printf("Enter string: ");
			fgets(t,max_len,stdin);
			if(t[strlen(t)-1] == '\n'){
				t[strlen(t)-1] = '\0';
			}
			char *p = strstr(s,t);
			if(p!=NULL){
				t_id = p-s;
				memmove(p,p+strlen(t),strlen(p+strlen(t))+1);
				printf("string is deleted\n");
			}
			else{
				printf("string not found\n");
			}		
			break;
		}
		case'i':{
			printf("Enter string: ");
			int i_id;
			scanf("%d",&i_id);
			getchar();
			printf("Enter string: ");
			fgets(i,max_len,stdin);
			if(i[strlen(i)-1] == '\n'){
				t[strlen(s)-1] = '\0';
			}
			if(i_id >= strlen(s)){
				strcat(s,i);
		}
		else if((strlen(s)+strlen(i)) < max_len){
			memmove(s+i_id+strlen(i),s+i_id,strlen(s)-i_id+1);
			memcpy(s+i_id,i,strlen(i));
		}
		else{
			printf("insertion exceded max len\n");
		}
			printf("inserted\n");
			break;
		}
		default:
		printf("invalid comand\n");
		break;
	}
		printf("string %s",s);
		return 0;
}	
