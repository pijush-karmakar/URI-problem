#include<stdio.h>

static char t[256];

int main(){
    register unsigned i, k, c = 0;

    while(gets(t)){
        char inp[256] = {'\0'};

        for (i = k = 0; t[i]; ++i){
            /*
             * ASCII decimal value of " (Double Quotes) is 34
             */
            if (t[i] == 34 && !c){
                /*
                 * ASCII decimal value of ` (Grave Caret) is 96
                 */
                inp[k] = inp[k+1] = 96;
                /*
                 * We added TWO characters
                 */
                k += 2;
                /*
                 * Flag or ON OFF
                 */
                c = 1;
            }else if(c && t[i] == 34){
                /*
                 * ASCII decimal value of ' (Single Quote) is 39
                 */
                inp[k] = inp[k+1] = 39;
                k += 2;
                c = 0;
            }else{
                /*
                 * If neither single or Double Quote found
                 */
                inp[k] = t[i];
                ++k;
            }
        }
        printf("%s\n", inp);
    }
    return 0;
}
