#include<iostream>
#include<cstdio>


int main (){
	int A,temp,a,b,c;
	int i,T;
	scanf("%d", &T);
	for (i=1; i<=T; i++){
		A = 0, temp = 0;
		scanf("%d %d %d", &a,&b,&c);
		if ((a>=b) && (a>=c)){
			A = (b*b) + (c*c);
			temp = a*a;
			if (A == temp){
				printf("Case %d: yes\n", i);
			}
			else
				printf("Case %d: no\n", i);

		}
		if ((b>=a) && (b>=c)){
			A = (a*a) + (c*c);
			temp = b*b;
			if (A == temp){
				printf("Case %d: yes\n", i);
			}
			else
				printf("Case %d: no\n", i);

		}
		if ((c>=b) && (c>=a)){
			A = (b*b) + (a*a);
			temp = c*c;
			if (A == temp){
				printf("Case %d: yes\n", i);
			}
			else
				printf("Case %d: no\n", i);

		}
	}
	return 0;
}
