//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,sum=1;
//    scanf("%d",&n);
//    n-=1;
//    while(n>0)
//    {
//        sum=(sum+1)*2;
//        n-=1;
//    }
//    printf("%d",sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,a,b,p,f1=1,f2=1,ftemp,count=3;
//    scanf("%d%d%d%d",&n,&a,&b,&p);
//    if(n==1)
//        printf("%d",f1%p);
//    else if(n==2)
//        printf("%d",f2%p);
//    else
//    {
//        while(count<=n)
//        {
//            ftemp=a*f1+b*f2;
//            f1=f2;
//            f2=ftemp;
//            count++;
//        }
//        printf("%d",ftemp%p);
//    }
//    return 0;
//}
//#include<stdio.h>
//int tan(int*arr,int n)
//{
//    int count=0,tmp=0;
//    while(tmp<n)
//    {
//        count++;
//        tmp+=arr[tmp];
//    }
//    return count;
//}
//int main()
//{
//    int n,i=0;
//    scanf("%d",&n);
//    int a[n],b[n],counta,countb;
//    for(i=0;i<n;i++)
//        scanf("%d",&a[i]);
//    for(i=0;i<n;i++)
//        scanf("%d",&b[i]);
//    counta=tan(a,n);
//    countb=tan(b,n);
//    if(counta>=countb)
//        printf("%d",countb);
//    else
//        printf("%d",counta);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%g\n",6.315321311);
//    printf("%f",6.3513);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%e",3122313.001);
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    printf("%d%d",EXIT_SUCCESS,EXIT_FAILURE);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    int line=1;
//    char temp;
//    while((temp=getchar()))
//    {
//        if(line==1)
//        {
//
//        }
//        putchar(temp);
//        if(temp=='\n')
//        {
//            printf("%d.",line);
//            line++;
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char temp;
//    int P,A,T,n,i,flag,kaitoua,zhongjiana,moweia;
//    scanf("%d",&n);
//    getchar();
//    for(i=0;i<n;i++)
//    {
//        P=0,A=0,T=0,flag=1,kaitoua=0,zhongjiana=0,moweia=0;
//        while((temp=getchar())&&temp!='\n')
//        {
//            if(temp!='P'&&temp!='A'&&temp!='T'&&temp!=' ')
//            {
//                flag=0;
//            }
//            if((P==0||A==0)&&temp=='T')
//            {
//                flag=0;
//            }
//            if(P==0&&temp=='A')
//                kaitoua++;
//            if(P==1&&T==0&&temp=='A')
//                zhongjiana++;
//            if(P==1&&T==1&&temp=='A')
//                moweia++;
//            if(P!=0&&temp=='A')
//                A++;
//            if(temp=='P')
//                P++;
//            if(temp=='T')
//                T++;
//            if(P>1)
//            {
//                flag=0;
//            }
//            if(T>1)
//            {
//                flag=0;
//            }
//        }
//        if(flag&&T&&P&&A&&kaitoua*zhongjiana==moweia)
//            printf("YES");
//        else
//            printf("NO");
//        if(i!=n-1)
//            printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int max=-1,min=101,n,i,tmp;
//    char namemax[11],namemin[11],idmax[11],idmin[11],nametmp[11],idtmp[11];
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%s%s%d",nametmp,idtmp,&tmp);
//        if(tmp>max)
//        {
//            strcpy(namemax,nametmp);
//            strcpy(idmax,idtmp);
//            max=tmp;
//        }
//        if(tmp<min)
//        {
//            strcpy(namemin,nametmp);
//            strcpy(idmin,idtmp);
//            min=tmp;
//        }
//    }
//    printf("%s %s\n%s %s",namemax,idmax,namemin,idmin);
//    return 0;
//}
