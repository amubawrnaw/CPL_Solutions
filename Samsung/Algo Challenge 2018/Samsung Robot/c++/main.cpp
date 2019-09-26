#include <stdio.h>
#include <time.h>
extern int solve(int N, char message[100001], char presses[400001]);

int N;
char message[100001];
char presses[400001];

void get_input() {
    scanf("%d %s",&N,message);
}
int solve(int N, char message[100001], char presses[400001]) {
    int pressCount = 0;
    int num = 0;
    for(int i = 0, j = 0 ; i < N ; i++){
        switch(message[i]){
            case 'a':num = '2';pressCount++;presses[j]=num;j++;break;
            case 'd':num = '3';pressCount++;presses[j]=num;j++;break;
            case 'g':num = '4';pressCount++;presses[j]=num;j++;break;
            case 'j':num = '5';pressCount++;presses[j]=num;j++;break;
            case 'm':num = '6';pressCount++;presses[j]=num;j++;break;
            case 'p':num = '7';pressCount++;presses[j]=num;j++;break;
            case 't':num = '8';pressCount++;presses[j]=num;j++;break;
            case 'w':num = '9';pressCount++;presses[j]=num;j++;break;
            case 'b':num = '2';pressCount+=2;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'e':num = '3';pressCount+=2;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'h':num = '4';pressCount+=2;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'k':num = '5';pressCount+=2;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'n':num = '6';pressCount+=2;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'q':num = '7';pressCount+=2;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'u':num = '8';pressCount+=2;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'x':num = '9';pressCount+=2;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'c':num = '2';pressCount+=3;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'f':num = '3';pressCount+=3;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'i':num = '4';pressCount+=3;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'l':num = '5';pressCount+=3;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'o':num = '6';pressCount+=3;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'r':num = '7';pressCount+=3;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'v':num = '8';pressCount+=3;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'y':num = '9';pressCount+=3;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
            case 's':num = '7';pressCount+=4;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
            case 'z':num = '9';pressCount+=4;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;presses[j]=num;j++;break;
        }
    }
    return pressCount;
}

int main() {
    clock_t start = clock();
    freopen("sample_input.txt", "r", stdin);
    int T;
    scanf("%d",&T);

    for(int case_num=1; case_num<=T; case_num++) {
        get_input();
        
        int ret = solve(N, message, presses);

        printf("%d ",ret);
        for(int i=0; i<ret; i++)
            printf("%c",presses[i]);
        printf("\n");
    }
    printf("execution_time: %.4f\n", (double) (clock() - start) / CLOCKS_PER_SEC * 1000);

    return 0;
}
