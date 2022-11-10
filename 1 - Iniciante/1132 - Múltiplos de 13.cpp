// 13-06-2022

#include <iostream>
 
using namespace std;
 
int main() {
	
	int a, b, i, cont=0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	if(a<b){
	    for(i=a;i<=b;i++) {
		    if(i%13!=0) {
			    cont+=i;
		    }
	    }
	}
	else {
	    for(i=b;i<=a;i++) {
		if(i%13!=0) {
			cont+=i;
		    }
	    }
	}
	printf("%d\n", cont);
	
	return 0;
}
