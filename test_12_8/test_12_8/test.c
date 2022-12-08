#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//递归的方法 
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
//int my_strlen(char* str)//用int*来存地址 
//{
//	int count=0;
//	while(*str!='\0')//解引用操作 
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
	int len = my_strlen(arr);//传的是数组第一个元素的地址 
	printf("%d", len);
	return 0;
}
//函数递归
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
//	printf("%d",printf("%d",printf("%d",88)));//打印的是数字的个数 
//	return 0;
//}
//链式访问
//#include <string.h>
//int main()
//{
//	int len=0;
//    len=strlen("abc");
//	printf("%d\n",len);
//	printf("%d",strlen("abc"));
//	return 0;
// } 
//嵌套调用 
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
//实参和形参
//int Add(int* p)//每调用一下这个函数，num自增1 
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
//二分查找
				 //本质上是指针 
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
//	                    //传递过去的是首元素的地址 
//	int ret=binary_search(arr,k,sz);
//	if(ret==-1)
//	{
//		printf("找不到"); 
//	}
//    else
//    {
//    	printf("找到啦，下标是：%d",ret);
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
//		printf("找不到"); 
//	}
//	else
//	{
//		printf("%d",ret);
//	}
//	return 0;
// } 
//闰年
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
//素数 
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
//	if(x==j)//两个==是相等 
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
//数组冒泡排序 
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
//	int* p=&a;////取地址 
//// 有一种变量用来存放地址——指针变量 p 类型是int* 
////	printf("%d\n",&a);//6618644
//	printf("%d\n",*p);   //6618644
//	*p=30,
//	printf("%d",a);
//	return 0;
// } 
//void Swatch(int* px,int* py)//px py 指针变量 
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
//	Swatch(&a,&b);//取地址传参(传址调用) 
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
//	int max=Max(a,b);//传值调用 
//	printf("%d",max);
//	return 0;
// } 
//库函数 
//strcpy 复制 
//#include <strings.h>
//int main()
//{
//	char arr1[]={"ABCD"};
//	char arr2[]={"**********"};
//	strcpy(arr2,arr1);//把arr1复制到arr2 
//	printf("%s",arr2);
//	return 0;
// } 
//memset 内存设置 
//int main()
//{
//	char arr[]={"hello word"};
//	memset(arr,'*',5);//替换 
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
//		printf("请选择：");
//     	scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//			    printf("三子棋，游戏开始\n");
//			 //   game();
//			    break; 
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入错误\n");	
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
//	int ret=0;//接收一个随机数
//	int guess=0;//接收猜的数字
//	ret=rand()%100+1;
//    while(1)
//    {
//	printf("请猜数字：");
//	scanf("%d",&guess);
//	if(guess>ret)
//	{
//		printf("猜大啦\n");
//	}
//	else if(guess<ret)
//	{
//		printf("猜小啦\n");
//	}
//	else
//	{
//		printf("猜对啦\n");
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
//		printf("请选择："); 
//	    scanf("%d",&input);
//		switch(input)
//	   {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏"); 
//			break; 
//		default:
//			printf("选择错误");
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
//			printf("%d*%d=%-2d  ",j,i,sum);//-2d左对齐两个空格,2d右对齐 
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
//100到200的素数
//#include <math.h> 
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=100;i<=200;i++)//还可以i=101,i+=2 从奇数中直接判断素数 
//	{
//		//试除法
//		//2到i-1个数
//        //i=a*b,a和b至少有一个数小于开平方i 
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

//辗转相除法 
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
//	//a最大值，b中间值，C最小值
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
//	char password[20]={0};//定义时要给数组赋地址空间，不然for循环只能循环一次 
//	int i;
//	for(i=1;i<=3;i++)
//	{
//		printf("请输入密码：");
//		scanf("%s",&password); 
//		if(strcmp(password,"123456")==0)//==不能比较两个字符串是否相等，只能使用库函数strcmp比较 
//		{
//			printf("输入正确\n"); 
//		}
//		else
//		{
//			printf("输入错误\n"); 
//		}
//	
//	}
//	if(i==4)
//	{
//		printf("三次密码均错误"); 
//	}
//	return 0;
// } 

//数组的替换 
//#include <windows.h>
//#include <stdlib.h> 
//int main()
//{
//	char arr1[]={"welcome to chongqing"};
//	char arr2[]={"********************"};
//	int left=0;
//	int right=sizeof(arr1)/sizeof(arr1[0])-2;//字符串减二 
//	//int right=strlen(arr1)-1;调用库函数string 就是字符串长度 
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		left++;
//		right--;
//		Sleep(1000); //延迟时间1s 使用库函数string 
//		system("cls");//执行系统函数的一个命令“cls” 清屏 使用库函数windows 
//		
//		
//	}
//	return 0;
//}

//二分查找，折半查找 
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int k=10;
//	int sz=sizeof(arr)/sizeof(arr[0]);//数组个数 
//	int l=0;//左下标 
//	int r=sz-1;//右下标 
//	while(l<=r)//当左下标等于右下标时 
//	{
//		int d=(l+r)/2;//中间下标
//		if(k>arr[d])//取的值大于中间坐标的值 
//		{
//			l=d+1;//左下标变成中间坐标+1 
//		}
//		else if(k<arr[d])//如果取的值小于中间坐标的值是 
//		{
//			r=d-1;//右下标变成中间坐标-1 
//		}
//		else//如果K=arr[d] 
//		{
//			printf("找到啦：%d",d);
//			break;
//		}
//		
//	}
//	if(l>r)//如果左下标大于右下标时找不到 
//	{
//		printf("找不到"); 
//	}
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int k=18;//写一个代码，从数组中（有序的） 找到该数字 
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
//		printf("找不到"); 
//	}
//	return 0;
// } 
//循环结构
//循环语句 while for 
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
//累加 
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
//整数%d 浮点数%f 字符%c 
//	//ctrl+z
//	while((ch=getchar())!=EOF)//end of file结束 
//	{
//		putchar(ch);
//		if(i==5)
//		continue;//是终止本次循环，也就是本次的continue
	//后面的代码不在执行，而是直接跳到while的判断部分 
//		printf("%d\n",i); 
//		continue;//死循环 
//		printf("%d\n",i); 
//		i++;
	//}

//	int i=0;
//	while(i<10)
//	{
//		if(i==5)
//		break;//终止后期所有循环，直接终止循环
//while中的break是永久终止循环的 
//		printf("%d\n",i);//1234 
//		printf("hhhh\n");
//		i++;
//	}
//	return 0;
//}
//
//选择结构（分支语句)
//if语句 else
//输出1到100中的奇数
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
//		if(i%2!=0)//else总是和它离得最近的一个if相匹配，不是看它的对齐 
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
//			switch(n)//使用的是case2的能++ 
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
//	printf("未成年:%d",age);
//	return 0;
//}

//switch语句写出日期
//switch 分支结构：x满足case后的值则执行响应语句 
//switch(x)
//{
//	case 1:语句1；
//	 case 1:语句1；
// } 
//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	if(day==1)//一个等号是赋值，两个等号是等于 
//	printf("星期一");
//	else if(day==2)
//	printf("星期二");
//	else if(day==3)
//	printf("星期三");
//	else if(day==4)
//	printf("星期四");
//	else if(day==5)
//	printf("星期五");
//	else if(day==6)
//	printf("星期六");
//	else if(day==7)
//	printf("星期天");
//	switch(day)
//	{
//		case 1:
//		printf("星期一");
//		break;
//		case 2:
//		printf("星期二");
//		break;
//		case 3:
//		printf("星期三");
//		break;
//		case 4:
//		printf("星期四");
//		break;
//		case 5:
//		printf("星期五");
//		break;
//		case 6:
//		printf("星期六");
//		break;
//		case 7:
//		printf("星期天");
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
//		printf("工作日");
//		break;
//		
//		case 6:
//		case 7:
//		printf("休息日");
//		break;
//		
//      default:
//      printf("输入错误");
//      break;
//
//	}
//	return 0;
// }

//中奖游戏，随机数 
//#include <stdlib.h>//rand srand 
//#include <time.h>//time(0)
//int main()
//{
//	int a,b;
//	srand(time(0));
//	a=rand()%(10)+1;
//	printf("请输入一个1--10的整数\n");
//	scanf("%d",&b);
//	if(a==b)
//	{
//		printf("恭喜你中奖了,中奖号码是：%d",&b); 
//	}
//	if(a!=b)//也可以用else
//	{
//		printf("祝你好运");
//	}
//	printf("中奖号码是：%d",a);
//	return 0;
//}


//密码锁
//int main()
//{
//	int use1,key1,use2,key2;
//	use1=123;
//	key1=456;
//	scanf("%d %d",&use2,&key2);
//	printf("账号：%d\n密码：%d\n",use2,key2);
//	if(use1==use2&&key1==key2)
//	{
//		printf("欢迎来到我家"); 
//		}	
//    if(use1!=use2||key1!=key2)
//    {
//    	printf("用户名或密码错误，请重新输入");
//	}	
//	return 0;
// } 