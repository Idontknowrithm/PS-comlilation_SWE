#include<cstdio>
int main () {
    int inpLen, inp, res;
    char ope;
    for(int i = 0; i < 10; ++i){
        res = 0;
        scanf("%d", &inpLen);
        getchar();
        scanf("%d", &res);
        for(int j = 0; j < inpLen / 2; ++j){
            scanf("%c%d", &ope, &inp);
            res += inp;
        }
        printf("#%d %d\n", i + 1, res);
    }
    return 0;
}
