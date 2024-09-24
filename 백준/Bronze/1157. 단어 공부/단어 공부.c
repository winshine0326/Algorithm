#include <stdio.h>
#include <string.h>
int main() {
	char s[1000001];
	int alpha[26]={0,};
	int len,flag;
	char temp;
	
	scanf("%s",s);
	len = strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]>=65&&s[i]<97)
			temp = s[i]+32;
		else
			temp = s[i];
		alpha[temp-'a']++;
	}	
	int max = 0;
	char max_alpha = '?';
	for(int i=0;i<26;i++){
		if(max<alpha[i]){
			max = alpha[i];
			max_alpha = 'A'+i;
			flag = 0;
		}
		else if(max==alpha[i]){
			flag = 1;
		}
	}
	if (flag==1)
		printf("?");
	else
		printf("%c",max_alpha);
	
	return 0;
}
