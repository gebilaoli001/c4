#include <stdio.h>
struct point
{
    int x;
    int y;
};
int main()
{
    int index=0;
    struct point arr[100];

    printf("huanyingjinruzhuanchangweizhiguanlixitong\n");
    while (1)
    {
        printf("1---tianjiacheliangweizhi\n");
        printf("2---shanchucheliangweizhi\n");
        printf("3---xianshiquanbucheliangxinxi\n");
        printf("4---fanhuiliwodeweizhizuijindecheliang\n");
        printf("5---tuichu\n");

        printf("qingxuanzexiangyinggongneng\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("qingshurucheliangweizhidexzuobiaoheyzuobiao:\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);
            arr[index].x=x;
            arr[index].y=y;
            index++;
            printf("tianhiachenggong,dianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
            printf("suoyoucheliangweizhiruxia\n");
            for(int i=0;i<index;i++){
                printf("di%dgecheliangdeweizhiwei(%d,%d)\n",i+1,arr[i].x,arr[i].y);

            }
            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("dianjihuichetuichu\n");
            break;
        }
    }

    return 0;
}