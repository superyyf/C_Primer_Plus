#include <stdio.h>

int main(void){
    float speed, file;
    printf("输入下载速度(Mb/s)和文件大小(MB)：\n");
    scanf("%f%f", &speed, &file);
    printf("在%.2fMb/s的下载速度下，一个%.2fMB大小的文件，需要下载%.2f s\n", speed, file, file*8/speed);
    return 0;
}