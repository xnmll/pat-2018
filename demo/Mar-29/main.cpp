#include <cstdio>
/*
author : Joe spring
pages beginning : P50
date : Mar-29/2018 19:54
content : 3.5 number base conversion
*/


//number : B1022
//int main()
//{
//    int a , b , d ;
//    scanf("%d%d%d",&a,&b,&d);
//    int sum = a+b;
//    int ans[31],num=0;
//    do{
//        ans[num++]=sum % d ;
//        sum /=d;
//    }while(sum!=0);
//    for(int i= num-1;i>=0;i--){
//        printf("%d",ans[i]);
//    }
//
//}


//number : B1037
//const int Galleon = 17 * 29;
//const int Sickle = 29;
//int main(){
//    int a1,b1,c1;
//    int a2,b2,c2;
//    scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);
//    int price = a1*Galleon+b1*Sickle+c1;
//    int money = a2*Galleon+b2*Sickle+c2;
//    int change = money-price;
//    if(change<0){
//        printf("-");
//        change=-change;
//    }
//    printf("%d.%d.%d\n",change/Galleon,change%Galleon/Sickle,change%Sickle);
//    return 0;
//}


//number : A1019
//bool Judge(int z[], int num){
//    for(int i=0;i<num/2;i++){
//        if(z[i]!=z[num-i-1]){
//            return false;
//        }
//    }
//}
//int main(){
//    int n,b,z[40],num=0;
//    scanf("%d%d",&n,&b);
//    do{
//        z[num++]=n%b;
//        n/=b;
//    }while(n!=0);
//    bool flag=Judge(z,num);
//    if(flag==true) printf("Yes\n");
//    else printf("No\n");
//    for(int i = num-1;i>=0;i--){
//        printf("%d",z[i]);
//        if(i!=0) printf(" ");
//    }
//    return 0;
//}


//number : A1027
//#include <cstdio>
//char radix[13] ={'0','1','2','3','4','5','6','7','8','9','A','B','C',};
//int main(){
//    int r,g,b;
//    scanf("%d%d%d",&r,&g,&b);
//    printf("#");
//    printf("%c%c",radix[r/13],radix[r%13]);
//    printf("%c%c",radix[g/13],radix[g%13]);
//    printf("%c%c",radix[b/13],radix[b%13]);
//    return 0;
//}


//number : A1058
//#include <cstdio>
//int main(){
//    int a[3] , b[3] , c[3];
//    scanf("%d.%d.%d %d.%d.%d",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
//    int carry = 0;
//    c[2] = (a[2]+b[2])%29;
//    carry = (a[2]+b[2])/29;
//    c[1]=(a[1]+b[1]+carry)%17;
//    carry=(a[1]+b[1]+carry)/17;
//    c[0]=a[0]+b[0]+carry;
//    printf("%d.%d.%d",c[0],c[1],c[2]);
//    return 0;
//}


//number : B1006
//#include <cstdio>
//int main(){
//    int n;
//    scanf("%d",&n);
//    int num = 0,ans[5];
//    while(n!=0){
//        ans[num]=n%10;
//        num++;
//        n=n/10;
//    }
//    for(int i = num -1 ; i>=0 ; i--){
//        if(i==2){
//            for(int j = 0 ; j < ans[i] ; j++){
//                printf("B");
//            }
//        }else if(i == 1){
//            for(int j = 0 ; j < ans[i] ; j++){
//                printf("S");
//            }
//        }else{
//            for(int j = 0 ; j <= ans[i] ; j++){
//                printf("%d",j);
//            }
//        }
//    }
//    return 0 ;
//}


//number : B1021
//#include <cstdio>
//#include <cstring>
//int main(){
//    char str[1010];
//    gets(str);
//    int len = strlen(str);
//    int count[10] ={0};
//    for(int i= 0;i<len;i++){
//        count[str[i]-'0']++;
//    }
//    for(int i=0;i<10;i++){
//        if(count[i]!=0){
//            printf("%d:%d\n",i,count[i]);
//        }
//    }
//    return 0;
//}


//number : B1031
#include <cstdio>
//#include <cstring>
//int w[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//char change[15]={'1','0','X','9','8','7','6','5','4','3','2'};
//int main(){
//    int n ;
//    scanf("%d",&n);
//    bool flag = true;
//    char str[20];
//    for(int i = 0 ; i < n ;i++){
//        scanf("%s",str);
//        int j , last =0;
//        for(j=0;j<17;j++){
//            if(!(str[j]>='0'&&str[j]<='9')) break;
//            last = last + (str[j]-'0')*w[j];
//        }
//        if(j<17){
//            flag = false;
//            printf("%s\n",str);
//        }else{
//            if(change[last %11]!=str[17]){
//                flag = false;
//                printf("%s\n",str);
//            }
//        }
//    }
//    if(flag==true){
//        printf("All passed\n");
//    }
//    return 0;
//}


//number : B1002
