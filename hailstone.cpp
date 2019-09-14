/********************************************
**Author: Makenzie Brian
**Date: July 19, 2015
**Description: Runs hailstone sequence, divide by 2 for even, multiply by 3 and add 1 for odd
********************************************/


//#include <iostream>

//using namespace std;

int hailstone(int num){
	int y=0; 
	//y is just a counter for the return value
	
	int x=0;
	while(x==0){
		if(num!=1){

			if ((num % 2)==0){
				num = num/2;
				y++;
			}
			//determines if even and does action
		
			else{
				num = (3 * num)+1;
				y++;
			}
			//determines if odd and does action
		}

		else{
			x++;
		}

	}

	return y;
}
//int main(){
	//int a, ans;
	
	//cout << "Enter a number to hailstone." << endl;
	//cin >> a;
	
	//ans = hailstone(a);

	//cout << "It took " << ans << " steps." << endl; 

//return 0;
//}

