 #include <stdio.h>
//liệt kê chẵn lẻ
//tổng các số chẳn lẻ
//các số chia hết cho 3 và 9
// chèn số vào mảng làm dịch mảng lên
// kiểm tra,liệt kê số nguyên tố và tổng các số nguyên tố
//xóa 1 phần từ trong mảng
void lietkechan(int A[],int n){
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            printf("%3d", A[i] );
        }   
    }
  printf("\n");
}
void lietkele(int A[],int n){
    for(int i=0;i<n;i++){
        if(A[i]%2==1){
            printf("%3d",A[i]);
        }   
    }
    printf("\n");
}
void tongcacsochan(int A[], int n,int sumeven=0){
for (int i=0;i<n;i++){
    if (A[i]%2==0){
        sumeven=sumeven+A[i];
    }
}
printf ("%d\n",sumeven);
}
void tongcacsole(int A[],int n,int sumodd=0){
for (int i=0;i<n;i++){
    if (A[i]%2==1){
        sumodd=sumodd+A[i];
    }
}
printf("%d\n",sumodd);
}
void cacsochiahetcho3(int A[],int n){
    for(int i=0;i<n;i++){
        if(A[i]%3==0){
            printf("%2d",A[i]);
        }
    }
    printf("\n");
}
void cacsochiahetcho9(int A[],int n){
    for(int i=0;i<n;i++){
        if (A[i]%9==0){
            printf("%2d",A[i]);
        }
    }
    printf("\n");
}
void mangchensovaolamdichsokia(int A[],int n,int vitri,int sochen){
    for(int i = n;i >= vitri;i--){
        A[i]=A[i-1];
    }
    A[vitri-1]=sochen;
    printf ("mang sau khi chen:\n");
    for(int i=0;i<n;i++){
        printf("%3d",A[i]);
    }
    printf ("\n");       
}
int kiemtrasnt(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int demsonguyento(int A[],int n){
    int demsont =0;
    for(int i=0;i<n;i++){
        if(kiemtrasnt(A[i])){
            demsont++;
        }
    }
    printf("co %d so nguyen to \n",demsont);
    return demsont;
}
void lietkecacsont(int A[],int n){
    printf (" cac so nguyen to co trong mang la");
    for(int i=0;i<n;i++){
        if(kiemtrasnt(A[i])){
            printf("%2d",A[i]);
        }
    }
    printf ("\n");
}
int tongcacsonguyento(int A[],int n){
    int sumsnt=0;
    for(int i=0;i<n;i++){
        if(kiemtrasnt(A[i])){
            sumsnt=sumsnt+A[i];
        }
    }
    printf ("tong cac so nguyen to la %d",sumsnt);
    return sumsnt;
}
void xoamang(int A[],int n,int vitrixoa){
    printf("\n vi tri muon xoa la:");
    scanf("%d",&vitrixoa);
    if(vitrixoa>0 && vitrixoa <=n){
        for(int i=vitrixoa;i<=n;i++){
            A[i-1]=A[i];
        }
        n--;
        printf("\nmang sau khi xoa la:");
        for(int i=0;i<n;i++){
            printf("%4d",A[i]);
        }
    }
    else("\n mang khong the xoa");
}

int main(){
    int n;
    // in cac gia tri cua bien
    printf("nhap so phan tu cua mang");
    scanf("%d",&n);
    int A[n];
    for (int i =0;i < n;i++){
        printf("nhap gia tri cua mang%d:",i);
        scanf("%d",&A[i]);
        
    }
    for (int i=0;i<n;i++){
        printf("gia tri bien %dla:%d\n",i,A[i]);
    }
    // tim max
    int max =A[0];
    for (int i=0;i<n;i++){
        if(max<A[i])
        max = A[i];
    }
    printf ("max la %d\n",max);
    // tim min
    int min =A[0];
    for (int i = 1;i<n;i++){
        if(min>A[i]){;
        min=A[i];
        }
    }
    printf ("min la %d\n",min);
    //liệt kê các số chẵn
    printf("cac gia tri chan trong mang la: ");
    lietkechan(A, n);
    // liệt kê cac số lẻ
    printf("cac gia tri le trong mang la: ");
    lietkele(A,n);
    // tổng cac số chẵn
    printf("tong cac chu so chan trong mang la:");
    tongcacsochan(A,n);
    // tổng các số lẻ
    printf("tong cac chu so le trong mang la:");
    tongcacsole(A,n);
    //các số chia hết cho 3
    printf("cac so chia het cho 3 la:");
    cacsochiahetcho3(A,n);
    //các số chai hết cho 9 
    printf("cac so chia het cho 9 la:");
    cacsochiahetcho9(A,n);
    //chèn thêm 1 mảng
    int vitri;
    int sochen;
    printf ("nhap vi tri muon chen vao:");
    scanf("%d",&vitri);
    printf("\n");
    printf("nhap so can chen la:");
    scanf("%d,",&sochen);
    printf("\n");
    mangchensovaolamdichsokia(A,n,vitri,sochen);
    // đếm số và liệt kê các số nguyên tố
    demsonguyento(A,n);
    lietkecacsont(A,n);
    tongcacsonguyento(A,n);
    // xóa 1 phần tử trong mảng
    int vitrixoa;
    xoamang(A,n,vitrixoa);

    


}