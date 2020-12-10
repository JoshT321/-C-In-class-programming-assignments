#include <stdio.h>
#include <stdlib.h>

void split_time(long total_sec,int *hr,int *min,int *sec){
	*hr = total_sec/3600;
	*min = (total_sec - (3600**hr))/60;
	*sec = (total_sec - (3600**hr))-(*min*60);

}


int main() {
    long total_sec = 0;
	int h = 0;
	int m = 0;
	int s = 0;
    printf("Please enter seconds: ");
    scanf("%d", &total_sec);
	split_time(total_sec,&h,&m,&s);
	if (h > 12){
    h = h -12;
    printf("%d:%d.%dpm = %ld seconds",h,m,s,total_sec);
    return 0;
	}
    else{
        printf("%d:%d.%dam = %ld seconds",h,m,s,total_sec);
    }
	return 0;
}
