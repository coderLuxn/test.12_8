#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ݹ�ķ��� 
//int my_strlen(char* str)
//{
//	if(*str!='\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int my_strlen(char* str)//��int*�����ַ 
//{
//	int count=0;
//	while(*str!='\0')//�����ò��� 
//	{
//		count++;
//		str++;
//		
//	} 
//	return count;
//}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);//�����������һ��Ԫ�صĵ�ַ 
	printf("%d", len);
	return 0;
}
//�����ݹ�
//int main()
//{
//	printf("hehehhehhhehh\n");
//	main();
//	return 0;
//}

//int print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//	
//} 
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	print(num);
//}

//int main()
//{
//	printf("%d",printf("%d",printf("%d",88)));//��ӡ�������ֵĸ��� 
//	return 0;
//}
//��ʽ����
//#include <string.h>
//int main()
//{
//	int len=0;
//    len=strlen("abc");
//	printf("%d\n",len);
//	printf("%d",strlen("abc"));
//	return 0;
// } 
//Ƕ�׵��� 
//void new_line()
//{
//	printf("hehheheh\n");
//}
//void new1_line()
//{
//	int i;
//	for(i=1;i<=3;i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	new1_line();
//}
//ʵ�κ��β�
//int Add(int* p)//ÿ����һ�����������num����1 
//{
//	(*p)++;
//}
//int main()
//{
//	int num;
//	Add(&num);
//	printf("%d\n",num);
//	Add(&num);
//	printf("%d\n",num);
//	Add(&num);
//	printf("%d\n",num);
//	return 0;
//}
//���ֲ���
				 //��������ָ�� 
//int binary_search(int arr[],int k,int sz)
//{
//	
//	int left=0,right=sz-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(k<arr[mid])
//		{
//			right=mid-1;
//		}
//		else if(k>arr[mid])
//		{
//			left=mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	                    //���ݹ�ȥ������Ԫ�صĵ�ַ 
//	int ret=binary_search(arr,k,sz);
//	if(ret==-1)
//	{
//		printf("�Ҳ���"); 
//	}
//    else
//    {
//    	printf("�ҵ������±��ǣ�%d",ret);
//	}
//	return 0;
//}
//int is_binary_search(int arr[],int k,int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		if(k==arr[i])
//		{
//			return i;
//			
//		}
//	} 
//	return -1;
//}
//int main()
//{
//	int arr1[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
////	printf("%d",sz);
//	int k=7;
//	int ret=is_binary_search(arr1,k,sz);
//	if(ret==-1)
//	{
//		printf("�Ҳ���"); 
//	}
//	else
//	{
//		printf("%d",ret);
//	}
//	return 0;
// } 
//����
//int is_leap_year(int y)
//{
//	if(y%4==0 && y%100!=0 ||y%400==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year;
//	for(year=1000;year<=2000;year++)
//	{
//		if(is_leap_year(year)==1)
//		{
//			printf("%d\n",year);
//		}
//	}
//	
//	return 0;
// } 
//���� 
//int is_prime(int x)
//{
//	int j=0;
//	for(j=2;j<x;j++)
//	{
//		if(x%j==0)
//		{
//			return 0;//break;
//		}
//	}
//	if(x==j)//����==����� 
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i;
//	for(i=100;i<=200;i++)
//	{
//		if(is_prime(i)==1)
//	{
//		printf("%d\n",i);
//	}
//	}
//	return 0;
//}
//����ð������ 
//void Swatch(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag=0;
//		int j=0;
//		int tem=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]<arr[j+1])
//		    {
//		    	tem=arr[j];
//			    arr[j]=arr[j+1];
//			    arr[j+1]=tem;
//			    flag=1;
//		}
//		}
//		if(flag==0)
//		{
//		   break;
//		}
//		
//	}
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n",sz);
//	Swatch(arr,sz);
//	for(i=0;i<sz;i++)//4
//	{
//		printf("%d\n",arr[i]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a=10;
////	printf("%d\n",&a);//6618644
//	int* p=&a;////ȡ��ַ 
//// ��һ�ֱ���������ŵ�ַ����ָ����� p ������int* 
////	printf("%d\n",&a);//6618644
//	printf("%d\n",*p);   //6618644
//	*p=30,
//	printf("%d",a);
//	return 0;
// } 
//void Swatch(int* px,int* py)//px py ָ����� 
//{
//	int tem=0;
//	tem=*px;
//	*px=*py;
//	*py=tem;	
//}
//
//int main()
//{
//	int a=10;
//	int b=20;
//	Swatch(&a,&b);//ȡ��ַ����(��ַ����) 
//	printf("%d  %d",a,b);
//	return 0;
//}
//int Max(int x,int y)
//{
//	if(x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//	int max=0;
//	if(x>y)
//	{
//		max=x;
//	}
//	else
//	{
//		max=y;
//	}
//	return max;
//}
//int main()
//{
//	int a=30;
//	int b=20;
//	int max=Max(a,b);//��ֵ���� 
//	printf("%d",max);
//	return 0;
// } 
//�⺯�� 
//strcpy ���� 
//#include <strings.h>
//int main()
//{
//	char arr1[]={"ABCD"};
//	char arr2[]={"**********"};
//	strcpy(arr2,arr1);//��arr1���Ƶ�arr2 
//	printf("%s",arr2);
//	return 0;
// } 
//memset �ڴ����� 
//int main()
//{
//	char arr[]={"hello word"};
//	memset(arr,'*',5);//�滻 
//	printf("%s",arr);
//	return 0;
//}
//#include <string.h>
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.paly 0.exit***\n");
//	printf("*******************\n");
//}
//void test()
//{
//	int input=0;
//	
//	do
//	{
//		menu(); 
//		printf("��ѡ��");
//     	scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//			    printf("�����壬��Ϸ��ʼ\n");
//			 //   game();
//			    break; 
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�������\n");	
//				break; 
//		}
//	}while(input);
//}
//
//int main()
//{
//
//	test();
//	
//	return 0;
// } 
//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("*** 1.play 0.exit ***\n");
//	printf("*********************\n");
// } 
//void game()
//{
//	int ret=0;//����һ�������
//	int guess=0;//���ղµ�����
//	ret=rand()%100+1;
//    while(1)
//    {
//	printf("������֣�");
//	scanf("%d",&guess);
//	if(guess>ret)
//	{
//		printf("�´���\n");
//	}
//	else if(guess<ret)
//	{
//		printf("��С��\n");
//	}
//	else
//	{
//		printf("�¶���\n");
//		break; 
//	 } 
//    }
//}
//
//int main()
//{
//	srand(time(0));
//	int input=0;
//	do
//	{
//		menu();
//		printf("��ѡ��"); 
//	    scanf("%d",&input);
//		switch(input)
//	   {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ"); 
//			break; 
//		default:
//			printf("ѡ�����");
//			break; 
//	    }
//   }while(input);
//   
//	return 0;
// } 
//int main()
//{
//	int i,j;
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			int sum=j*i;
//			printf("%d*%d=%-2d  ",j,i,sum);//-2d����������ո�,2d�Ҷ��� 
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//10
//    int max=arr[0];
//	for(i=1;i<sz;i++)
//	{
//		if(max<arr[i])
//		{
//			max=arr[i];
//		}
//	}
//	printf("%d",max);
//	return 0;
//}
//int main()
//{
//	int i=0;
//	double sum=0.0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%2!=0)
//		{
//			sum=sum+1.0/i;
//		}
//		else
//		{
//			sum=sum-1.0/i;
//		}
//	}
//	printf("%f",sum);
//	return 0;
//}

//int main()
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum=sum+flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf",sum);
//	return 0;
// } 
//100��200������
//#include <math.h> 
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=100;i<=200;i++)//������i=101,i+=2 ��������ֱ���ж����� 
//	{
//		//�Գ���
//		//2��i-1����
//        //i=a*b,a��b������һ����С�ڿ�ƽ��i 
//		int j=0;  
//		//for(j=2;j<i;j++) 
//        for(j=2;j<=sqrt(i);j++)
//		{
//		//	if(i%j==0)
//          if(i%j==0)
//			break;
//		}
//	//	if(j==i)
//      if(j>sqrt(i))
//		{
//			count+=1;
//			printf("%d\n",i);
//		}
//	} 
//	 printf("count:%d",count);
//	return 0;
//}

//շת����� 
//int main()
//{
//	int m,n,r;
//	scanf("%d %d",&m,&n);
//	while(m%n)
//	{
//		r=m%n;
//		m=n;
//		n=r; 
//	}
//	printf("%d",n);
//	return 0;
//}

//int main()
//{
//	int a,b,i=0,t;
//	scanf("%d %d",&a,&b);
//	if(a<b)
//	{
//		int tem=a;
//		a=b;
//		b=tem;
//	}
//	for(i=1;i<=b;i++)
//	{
//		if(a%i==0 && b%i==0)
//		t=i;
//	}
//	
//	printf("%d\n",t);
//	return 0;
// } 

//1-100,3
//int main()
//{
//	int i=0,n=100;
//	for(i=1;i<=n;i++)
//	{
//		if(i%3==0)
//		printf("%d\n",i);
//	}
//	return 0;
//}
//int main()
//{
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	//a���ֵ��b�м�ֵ��C��Сֵ
//	if(a<b)
//	{
//		int tem=a;
//		b=a;
//		b=tem;
//	 } 
//	 if(a<c)
//	 {
//	 	int tem=a;
//	 	a=c;
//	 	c=tem;
//	 }
//	 if(b<c)
//	 {
//	 	int tem=b;
//	 	b=c;
//	 	c=tem;
//	 }
//	 printf("%d %d %d",a,b,c);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char password[20]={0};//����ʱҪ�����鸳��ַ�ռ䣬��Ȼforѭ��ֻ��ѭ��һ�� 
//	int i;
//	for(i=1;i<=3;i++)
//	{
//		printf("���������룺");
//		scanf("%s",&password); 
//		if(strcmp(password,"123456")==0)//==���ܱȽ������ַ����Ƿ���ȣ�ֻ��ʹ�ÿ⺯��strcmp�Ƚ� 
//		{
//			printf("������ȷ\n"); 
//		}
//		else
//		{
//			printf("�������\n"); 
//		}
//	
//	}
//	if(i==4)
//	{
//		printf("�������������"); 
//	}
//	return 0;
// } 

//������滻 
//#include <windows.h>
//#include <stdlib.h> 
//int main()
//{
//	char arr1[]={"welcome to chongqing"};
//	char arr2[]={"********************"};
//	int left=0;
//	int right=sizeof(arr1)/sizeof(arr1[0])-2;//�ַ������� 
//	//int right=strlen(arr1)-1;���ÿ⺯��string �����ַ������� 
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		left++;
//		right--;
//		Sleep(1000); //�ӳ�ʱ��1s ʹ�ÿ⺯��string 
//		system("cls");//ִ��ϵͳ������һ�����cls�� ���� ʹ�ÿ⺯��windows 
//		
//		
//	}
//	return 0;
//}

//���ֲ��ң��۰���� 
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int k=10;
//	int sz=sizeof(arr)/sizeof(arr[0]);//������� 
//	int l=0;//���±� 
//	int r=sz-1;//���±� 
//	while(l<=r)//�����±�������±�ʱ 
//	{
//		int d=(l+r)/2;//�м��±�
//		if(k>arr[d])//ȡ��ֵ�����м������ֵ 
//		{
//			l=d+1;//���±����м�����+1 
//		}
//		else if(k<arr[d])//���ȡ��ֵС���м������ֵ�� 
//		{
//			r=d-1;//���±����м�����-1 
//		}
//		else//���K=arr[d] 
//		{
//			printf("�ҵ�����%d",d);
//			break;
//		}
//		
//	}
//	if(l>r)//������±�������±�ʱ�Ҳ��� 
//	{
//		printf("�Ҳ���"); 
//	}
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int k=18;//дһ�����룬�������У�����ģ� �ҵ������� 
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<=sz;i++)
//	{
//		if(k==arr[i])
//		{
//			printf("%d",i);
//			break;
//		}
//	}
//	if(i>=sz)
//	{
//		printf("�Ҳ���"); 
//	}
//	return 0;
// } 
//ѭ���ṹ
//ѭ����� while for 
//int main()
//{
//	int n=0,i=0;
//	int sum=0;
//	int ret=1;
////	scanf("%d",&n);
//	for(n=1;n<=3;n++)
//	{
//		ret=1;
//		for(i=1;i<=n;i++)
//	{
//		
//		ret=ret*i;
//	}
//	sum=sum+ret;
//	}
//	
//	printf("%d",sum);
//	return 0;
// } 
//�ۼ� 
//int main()
//{
//	int i,n,sum=1;
//	scanf("%d",&n);
//	for(i=2;i<=n;i++)
//	{
//		sum=sum*i;
//	}
//	printf("%d",sum);
//	return 0;
// } 
// int main()
// {
// 	int i=1,n,sum=1;
// 	scanf("%d",&n);
// 	while(i<=n)
// 	{
// 		sum=sum*i;
// 		i++;
//	}
//	printf("%d",sum);
// 	return 0;
// }
//int main()
//{
//	int ch=0;
//����%d ������%f �ַ�%c 
//	//ctrl+z
//	while((ch=getchar())!=EOF)//end of file���� 
//	{
//		putchar(ch);
//		if(i==5)
//		continue;//����ֹ����ѭ����Ҳ���Ǳ��ε�continue
	//����Ĵ��벻��ִ�У�����ֱ������while���жϲ��� 
//		printf("%d\n",i); 
//		continue;//��ѭ�� 
//		printf("%d\n",i); 
//		i++;
	//}

//	int i=0;
//	while(i<10)
//	{
//		if(i==5)
//		break;//��ֹ��������ѭ����ֱ����ֹѭ��
//while�е�break��������ֹѭ���� 
//		printf("%d\n",i);//1234 
//		printf("hhhh\n");
//		i++;
//	}
//	return 0;
//}
//
//ѡ��ṹ����֧���)
//if��� else
//���1��100�е�����
//int main()
//{
//	int i=1;
//	while(i<

//=100)
//	{
//       printf("%d\n",i);
//	   i+=2;
//
//	}
//	while(i<=100)
//	{
//		if(i%2!=0)//else���Ǻ�����������һ��if��ƥ�䣬���ǿ����Ķ��� 
//        printf("%d\n",i);
//        i++;
//	}

//int main()
//{
//	int n=1;
//	int m=2;
//	switch(n)
//	{
//		case 1:
//			m++;
//		case 2:
//			n++;
//		case 3:
//			switch(n)//ʹ�õ���case2����++ 
//			{
//				case 1:
//					n++;
//				case2:
//					n++;
//					m++;
//				break;
//			}
//		case 4:
//			m++;
//			break;
//		default:
//			break;	
//	}
//	printf("m: %d\n n: %d",m,n);
//	return 0;
//}


//	scanf("%d",&age);
//	if(age<10)
//	printf("δ����:%d",age);
//	return 0;
//}

//switch���д������
//switch ��֧�ṹ��x����case���ֵ��ִ����Ӧ��� 
//switch(x)
//{
//	case 1:���1��
//	 case 1:���1��
// } 
//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	if(day==1)//һ���Ⱥ��Ǹ�ֵ�������Ⱥ��ǵ��� 
//	printf("����һ");
//	else if(day==2)
//	printf("���ڶ�");
//	else if(day==3)
//	printf("������");
//	else if(day==4)
//	printf("������");
//	else if(day==5)
//	printf("������");
//	else if(day==6)
//	printf("������");
//	else if(day==7)
//	printf("������");
//	switch(day)
//	{
//		case 1:
//		printf("����һ");
//		break;
//		case 2:
//		printf("���ڶ�");
//		break;
//		case 3:
//		printf("������");
//		break;
//		case 4:
//		printf("������");
//		break;
//		case 5:
//		printf("������");
//		break;
//		case 6:
//		printf("������");
//		break;
//		case 7:
//		printf("������");
//		break;
//	}
//	return 0;
//}
//
//int main()
//{
//	int day=0;
//	int n=1;
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1:
//			if(n==1)
//			printf("hehhehe\n");
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//		printf("������");
//		break;
//		
//		case 6:
//		case 7:
//		printf("��Ϣ��");
//		break;
//		
//      default:
//      printf("�������");
//      break;
//
//	}
//	return 0;
// }

//�н���Ϸ������� 
//#include <stdlib.h>//rand srand 
//#include <time.h>//time(0)
//int main()
//{
//	int a,b;
//	srand(time(0));
//	a=rand()%(10)+1;
//	printf("������һ��1--10������\n");
//	scanf("%d",&b);
//	if(a==b)
//	{
//		printf("��ϲ���н���,�н������ǣ�%d",&b); 
//	}
//	if(a!=b)//Ҳ������else
//	{
//		printf("ף�����");
//	}
//	printf("�н������ǣ�%d",a);
//	return 0;
//}


//������
//int main()
//{
//	int use1,key1,use2,key2;
//	use1=123;
//	key1=456;
//	scanf("%d %d",&use2,&key2);
//	printf("�˺ţ�%d\n���룺%d\n",use2,key2);
//	if(use1==use2&&key1==key2)
//	{
//		printf("��ӭ�����Ҽ�"); 
//		}	
//    if(use1!=use2||key1!=key2)
//    {
//    	printf("�û����������������������");
//	}	
//	return 0;
// } 