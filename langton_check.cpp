#include <iostream>

int main(int argc_, char *argv_[]){
	FILE *fp;
	int max = 0;

	int cnt_1 = 0;
	int cnt_2 = 0;
	int cnt_3 = 0;

	int tmp1, tmp2, loop;

	std::cout << "max:";
	std::cin >> max;

	fp = fopen(argv_[1], "r");
	
	for(int i=0;i<max;i++){
		fscanf(fp, "%i,%i,%i", &tmp1, &tmp2, &loop);
		if(loop == 50){
			cnt_1++;
		}else if(loop == 975){
			cnt_2++;
		}else if(loop == 1250){
			cnt_3++;
		}
	}

	std::cout << cnt_1 << "," << cnt_2 << "," << cnt_3 << std::endl;

	return 0;
}
