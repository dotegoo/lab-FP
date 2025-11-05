#include <stdio.h>
int prob1(){
    int v[10];
   for(int i=0; i<10; i++) 
        scanf("%d", &v[i]);
    for(int i=0; i<10; i++) 
        printf("%d ", v[i]);
    printf("\n");
    for(int i=9; i>=0; i--) 
        printf("%d ", v[i]);
    printf("\n");
    float ma=0;
    for(int i=0; i<10; i++) 
        ma += v[i];
    ma/= 10;
    int p=0;
    printf("Media: %.3f\n", ma);
    printf("Cat este pragul maxim pe care sa nu il depaseasca orice element?");
    scanf("%d", &p);
    for(int i=0; i<10; i++) 
        if(v[i] > p)
        printf("%d ", v[i]);
    return 0;
};
int prob2(){
    float v[10],max=-2147483648;

    for(int i=0; i<10; i++){
        scanf("%f", &v[i]);
        if(v[i]>max)
            max=v[i];
    }

    for(int i=0; i<10; i++)
        v[i]/=max;

    printf("Vectorul normalizat este:\n");
    for(int i=0; i<10; i++)
        printf("%.2f ", v[i]);

    return 0;
};
int prob3(){
    int v[10], count=0;
    for(int i=0; i<10; i++)
        scanf("%d", &v[i]);
    for(int i=0; i<10; i++)
        if(v[i]==v[i+1])
            count++;
    printf("Numarul de elemente egale consecutive este: %d\n", count);
    return 0;
};
int prob4(){
    int v[10], elmin=2147483647,ma=0;
    for(int i=0; i<10; i++){
        scanf("%d", &v[i]);
        ma+=v[i];
        if(v[i]<elmin)
            elmin=v[i];
        }
    ma/=10;
    printf("Elementul minim se afla pe pozitia/le");
    for(int i=0; i<10; i++){
        if(v[i]==elmin)
            printf("%d ", i);
        if(v[i]<ma){
            v[i]=ma;
        }
    }
    return 0;
};
int prob5(){
    int v[10],x[10],cnt;
    cnt=0;
    for(int i=0; i<10; i++)
        scanf("%d", &v[i]);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            if(v[i]<v[j]){
                int aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
        for(int i=0;i<10;i++)
            if(v[i+1]==v[i]+1){
                cnt=0;
                x[i]=v[i];
                for(int k=i+1;k<10;k++){
                    if(v[k]==v[k-1]){
                        x[k]=v[k];
                        cnt++;}
                    else
                    break;
                }
                if(cnt>5){
                    for(int j=0;j<cnt;j++)
                        printf("%d ", x[j]);

                }
            }
    for(int i=0; i<10; i++)
      printf("%d ", v[i]);
    return 0;
};
int prob6(){
     int a[10][10],n;
    printf("Introduceti dimensiunea matricei patratice (max 10): ");
    scanf("%d", &n);
    printf("Introduceti elementele matricei:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    printf("Elementele de sub diagonala principala sunt:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i>j)
                printf("%d ", a[i][j]);
    }
    printf("\n");
    printf("Elementele de deasupra diagonalei principale sunt:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i<j)
            printf("%d ", a[i][j]);
    printf("\n");
    printf("Elementele deasupra diagonalei secundare sunt:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j<=n-2){
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
    printf("Elementele sub diagonala secundara sunt:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j>n-1){
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
};
int prob7(){
    int a[10][10], b[10][10],n,m;
    printf("Introduceti numarul de linii si coloane (max 10): ");
    scanf("%d %d", &n, &m);
    printf("Introduceti elementele matricei A:\n");
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        scanf("%d", &a[i][j]);
    printf("Introduceti elementele matricei B:\n");
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        scanf("%d", &b[i][j]);
    printf("Suma matricelor A si B este:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ", a[i][j]+b[i][j]);
    printf("\n");}
    printf("Produsul matricelor A si B este:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=0;
            for(int k=0;k<m;k++){
                sum+=a[i][k]*b[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
};
int prob8(){
    int v[10][10], l,c,k,cnt=0;
    printf("Introduceti numarul de linii, coloane si nr elemente nule de gasit per coloana/linie:\n");
    scanf("%d %d %d", &l, &c, &k);
    printf("Introduceti elementele matricei:\n");
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &v[i][j]);
            }
    }
    printf("Coloanele cu %d elemente nule sunt:\n", k);
    for(int j=0;j<c;j++){
        for(int i=0;i<l;i++)
            if(v[i][j]==0)
                cnt++;
        if(cnt==k)
            for(int i=0;i<l;i++)
                printf("%d ", v[i][j]);
        printf("\n");
        cnt=0;
    }
    printf("\nLiniile cu %d elemente nule sunt:\n", k);
    for(int j=0;j<l;j++){
        for(int i=0;i<c;i++)
            if(v[i][j]==0)
                cnt++;
        if(cnt==k)
            for(int i=0;i<l;i++)
                printf("%d ", v[i][j]);
        printf("\n");
        cnt=0;
    }
    
    return 0;};
int main(){
    prob1();
    prob2();
    prob3();
    prob4();
    prob5();
    prob6();
    prob7();
    prob8();
    return 0;
}
