#include <stdio.h>
#include <string.h>
int main() {
    int score[4][3] = {
        {91,63,78},
        {67,72,47},
        {89,58,53},
        {33,54,34}
    };
    char *names[] = {"Kanto","Takahashi","Ito","Watanabe"};
    printf("Name    National Language   English     Math \n");
    for (int i=0;i<4;i++) {
        printf("%s      %d      %d      %d \n",names[i],score[i][0],score[i][1],score[i][2]);
    }
    return 0;
}