#include<stdio.h>
main(){
	int before,after,befsum,aftsum,i,j,befp,befq,aftp,aftq,suggest,aftmax;
	scanf("%d %d %d",&before,&after,&suggest);
	while(before>=1){
		aftmax=0;
		for(i=1;i<=1000;i++){
			for(j=1;j<=1000;j++){
				befp=i*(100+before)/100;
				befq=j*(100+before)/100;
				befsum=befp+befq;
				if(befsum==suggest){
					aftp=i*(100+after)/100;
					aftq=j*(100+after)/100;
					aftsum=aftp+aftq;
					if(aftsum>aftmax){
						aftmax=aftsum;
					}
				}
			}
		}
		printf("%d\n",aftmax);
	scanf("%d %d %d",&before,&after,&suggest);
	}
	return 0;
}

