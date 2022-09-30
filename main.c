#include <stdlib.h>
#include <stdio.h>

void fOne(){
    int a,b,c,d,e,f,x,y;
    printf("Введите 6 чисел\n");
    scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
    x = a*b*c*d*e*f;
    y = a+b+c+d+e+f;
    if(x>y){
        printf("x > y на %d", x-y);
    }else{
        printf("y > x на %d", y-x);
    }
}

void fTwo(){
    int a,b,c,d,e,x;
    printf("Введите 5 чисел\n");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    int points [] = {a,b,c,d,e};
    x = 0;
    for(int i = 0;i < 5;i++){
        if(points[i] > 0){
            x+=points[i];
        }
    }    
    printf("Сумма чисел = %d", x);
};

void fThree(){
    int a,b,c,d;
    printf("Введите 4 числа\n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int points [] = {a,b,c,d};
    for(int i = 0;i < 4;i++){
        if(points[i] < 0){
            points[i] = 0;
        }
        printf("%d ", points[i]);
    }    
};

void fFour(){
    int a,b,c,d,e,f,g,h,x,y;
    printf("Введите 8 чисел\n");
    scanf("%d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h);
    int points [] = {a,b,c,d,e,f,g,h};
    x = 0;
    y = 0;
    for(int i = 0;i < 8;i++){
        if(points[i] >= 0){
            x+=1;
        }else{
            y+=1;
        }
    }    
    printf("Положительных чисел - %d  \nОтрицательных чисел - %d ", x,y);
};

void fFive(){
    int a,b,c,d,x,y;
    printf("Введите 4 числа\n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int points [] = {a,b,c,d};
    x = 1;
    y = points[0];
    for(int i = 0;i < 3;i++){
        if(points[i+1] < points[i]){
            if(points[i+1] < y){
                y = points[i+1];
                x = i+1;
            }
        }
   
    }    
    printf("Минимальное число(индекс) -  %d", x);
};

void fSix(){
    int a,b,c,d,x,y;
    printf("Введите 4 числа\n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int points [] = {a,b,c,d};
    x = points[0];
    y = points[0];
    for(int i = 0;i < 3;i++){
        if(points[i+1] < points[i]){
            if(points[i+1] < y){
                y = points[i+1];
            }
        }
   
    }    
    for(int i = 0;i < 3;i++){
        if(points[i+1] > points[i]){
            if(points[i+1] > x){
                x = points[i+1];
            }
        }
   
    }  
    printf("Разность - %d", x - y);
};

void fSeven(){
    int k,m,n,k1,m1,n1,x;
    printf("Введите 3 числа\n");
    scanf("%d %d %d", &k,&m,&n);
    // int points [] = {k,m,n};
    printf("k = %d , m = %d , n = %d\n", k,m,n);
    if((k < m && k < n) && (m > k && m < n) && (n > m && n > k)){
        k1 = k;
        m1 = m;
        n1 = n;
    }else if ((k < m && k < n) && (n > m && n < m) && (m > n && m > k))
    {
        k1 = k;
        m1 = n;
        n1 = m;
    }
    else if ((n < k && n < m) && (k > n && k < m) && (m > n && m > k))
    {
        k1 = n;
        m1 = k;
        n1 = m;
    }
    else if ((n < k && n < m) && (m > n && m < k) && (k > n && m > n))
    {
        k1 = n;
        m1 = m;
        n1 = k;
    }
    else if ((m < n && m < k) && (k > m && k < n) && (n > k && n > m))
    {
        k1 = m;
        m1 = k;
        n1 = n;
    }
    else if ((m < n && m < k) && (n > m && n < k) && (k > n && k > n))
    {
        k1 = m;
        m1 = n;
        n1 = k;
    }

    
    

    printf("k = %d , m = %d , n = %d", k1,m1,n1);
};

void fEight(){
    int a,b,c,d,x,y;
    printf("Введите 4 числа\n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int points [] = {a,b,c,d};

    for(int i = 0;i < 4;i++){
        if(points[i] > x){
            y = x;
            x = points[i];
        }else if (y < points[i] < x){
            y = points[i];
        }
        
    }
    printf("Числа - %d и %d",x,y);
}

void fNine(){
    int a,b,c,x,y,iB,iS;
    printf("Введите 3 числа\n");
    scanf("%d %d %d", &a,&b,&c);
    int points [] = {a,b,c};
    printf("Первый порядок чисел %d %d %d\n",a,b,c);
    x = points[0];
    y = points[0];
    iB = 0;
    iS = 0;
    for(int i = 1;i < 3;i++){
        if(points[i] > x){
            x = points[i];
            iB = i;
            
        }else if (points[i] < y){
            y = points[i];
            iS = i;
        }
        
        
    };
    points[iB] = y;
    points[iS] = x;
    printf("Второй порядок чисел %d %d %d",points[0],points[1],points[2]);
}


int main(){
    fNine();
    return 0;
    
    
}