#define e 2.71828

double Power(double x,int y){
double p = 1;
int b = 1;
if(y<0){
 y*=-1;
 b=0;
 }
while(y>0){
p*=x;
y--;
}
if(b==0) return 1/p;
return p;
}

double Exponent(int x){
return Power((double)e,x);
}
