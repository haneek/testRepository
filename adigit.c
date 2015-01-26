#include <stdio.h>
void adigit();

int main()
{
	
	adigit();
	return 0;
}


void adigit() {

	int a=0;
	int b=0;
	int c=0;
	int i, digit;

	for(i=0; i<7; i++) {
		scanf("%d",&digit);
		if(digit/10==0) {
			a+=digit;
		}else if(digit/10>0 && digit/10<10) {
			b+=digit;
		} else {
			c+=digit;
		}
	}

	printf("%d %d %d", a,b,c);

}