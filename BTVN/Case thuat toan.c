#include <stdio.h>
int main (){
	double num1,num2;
	char op;
	double res;
	scanf("%lf %c%lf",&num1,&op, &num2);
	switch (op)
	{
		case '+' : res = num1 + num2;
            printf("%2.lf ",res);
                break;
        case '-' : res = num1 - num2;
            printf("%2.lf ",res);
                break;
        case '*' : res = num1 * num2;
            printf("%2.lf ",res);
                break;
        case '/' : if ( num2==0)
            printf("Divide by 0 ");
				else {
			res = num1/num2;
			printf("%2.lf ",res);
		}
		break;
		default:
			printf("Op is not supported");
	}
	return 0;
}
