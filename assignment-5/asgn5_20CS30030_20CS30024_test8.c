int calc_10_power(int a){
	int b = 0;
	while(a % 10){
		a /= 10;
		b++;
	}
	return b;
}
int main(){
    int a = 4000;
	int b = 1150;
	int ans;
	if(calc_10_power(a) > calc_10_power(b)){
		ans = -1;
	}
	else if(calc_10_power(a) < calc_10_power(b)){
		ans = 1;
	}
	else{
		ans = 0;
	}
	return 0;
}