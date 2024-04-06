#include<stdio.h>
int main(void){
    char str[51];
    double score;
    char rank[3];
    double rankpoint;
    double result=0;
    double Pcount=0;

    for(int t=0;t<20;t++){
        rankpoint=0;

        scanf("%s %lf %s",str,&score,rank);

        if(rank[0]=='P')
            continue;

        else{
            Pcount+=score;
            switch(rank[0]){
                case('A'):
                    rankpoint++;
                  case('B'):
                  rankpoint++;
                case('C'):
                    rankpoint++;
                case('D'):
                    rankpoint++;
                    break;
                case('F'):
                    rankpoint=0;
            }
            if(rank[1]=='+')
                rankpoint+=0.5;
        }
        result+=score*rankpoint;
    }

    printf("%lf",result/Pcount);
}