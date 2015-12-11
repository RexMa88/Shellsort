//
//  main.c
//  Shell sort
//
//  Created by Rex Ma on 15/12/11.
//  Copyright © 2015年 Rex Ma. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[10];
    
    for (int k = 0; k < 10; k++) {
        a[k] = rand();
    }
    
    int i , j ,Increment;
    
    for (Increment = 10 / 2; Increment > 0; Increment /= 2) {
        for (i = Increment; i < 10; i++) {
            int Tmp = a[i];
            for (j = i; j >= Increment; j -= Increment) {
                if (Tmp < a[j - Increment]) a[j] = a[j-Increment];
                else break;
            }
            a[j] = Tmp;
        }
    }
    
    for (int j = 0; j < 10; j++) {
        printf("%d\n",a[j]);
    }
    
    return 0;
}
