#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
    int xueliang = 10000;
	int gongji = 10;
	int jingyan = 0;
	int jinbi = 30;
	int changjing;
	int qianghua;
	int xlqianghua;
	int gjqianghua;
	int boss; 
	int gjzhan = gongji;
	int xlzhan = xueliang;
	int jinbizhan;
	int bossxlzhan;
	int bossgjzhan;
	int bossjnone;
	int jianxl = 60;
	int jiangj = 12;
	int jixl = 75;
	int jigj = 18;
	int dwxl = 140;
	int dwgj = 25;
	int qxxl = 180;
	int qxgj = 40;
	int qxjnzhan;
	int qx = 0;
	int jineng;
	int jntwo ;
    int cooling1 = 0;
    int cooling2 = 0;
    int cooling3 = 0;
    int cooling4 = 0;
    int bye = 1;
    printf("��ӭ����xiye�������ϵĽ��ң���\n\n\n");
    printf("��������:\nѪ��=%d\n����=%d\n���=%d\n\n\n",xueliang,gongji,jinbi);
    printf("��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n5=��Ϸ����/��������\n");
    while(bye==1){
    scanf("%d",&changjing);
    switch (changjing) 
	{  
    	case 1:
    		printf("��ѡ����Ҫǿ��������\n�˳�=0  Ѫ��=1  ������=2\n");
			scanf("%d",&qianghua);
			switch (qianghua)
			{
			case 0:
			    printf("��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n");
			    break;
			case 1:
				if (jinbi>=50)
				{
					jinbi=jinbi-50;
					xlqianghua=rand() % 20;
					xueliang=xueliang+xlqianghua;
					printf("Ѫ��������%d!\n",xlqianghua);
					printf("Ѫ����ǿ����%d\n��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n",xueliang);
				}
				else 
				{
					printf("��Ҳ���TT\n��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n");
				}
				break;
			case 2:
			    if (jinbi>=50)
				{
			    	jinbi=jinbi-50;
			    	gjqianghua=rand() % 4;
			    	gongji=gongji+gjqianghua;
			    	printf("����������%d!\n",gjqianghua);
			    	printf("������ǿ����%d\n��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n",gongji);
			    }
			    	else 
				{
					printf("��Ҳ���TT\n��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n");
				} 
				break;
			default:
				printf("�ǲ��������������awa\n��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n");
				break;
         	}
         	break; 
	    case 2:	
		    printf("��ѡ����Ҫ��ս��xiye\n1=����xiye\n2=��еxiye\n3=����xiye\n4=����xiye");
			scanf("%d",&boss);	
			switch (boss)
			{ 
         	case 1:
	          	printf("������ս����xiye...\n����xiye����:\nѪ��60\n����12\nսʤ�ɵ�10-30���\n");
	          	bossxlzhan = jianxl;
	          	bossgjzhan = jiangj;
	          	jinbizhan = 10+rand() % 20;
	          	break;  
	        case 2:
	            printf("������ս��еxiye...\n��еxiye����:\nѪ��75\n����18\nսʤ�ɵ�15-38���\n");
	            bossxlzhan = jixl;
	            bossgjzhan = jigj;
	            jinbizhan = 15+rand() % 23;
	            break;
	        case 3:
	        	printf("������ս����xiye...\n����xiye����:\nѪ��140\n����25\nսʤ�ɵ�23-48���\n");
	            bossxlzhan = jixl;
	            bossgjzhan = jigj;
	            jinbizhan = 23+rand() % 25;
	            break; 	
	        case 4:
	        	printf("������ս����xiye...\n����xiye����:\nѪ��180\n����40\n���绽�꣺ÿ���غ϶�����������20-50���˺�\nսʤ�ɵ�42-67���\n");
	            bossxlzhan = qxxl;
	            bossgjzhan = qxgj;
	            jinbizhan = 42+rand() % 25;
	            qx = 1;
	            bossjnone = 0;
	        	
	        }
                while (xueliang > -1000) 
	            {
                    int flag = 0;
                    printf("�ҷ�������%d  Ѫ��%d\n�з�������%d  Ѫ��%d\n", gjzhan, xlzhan,bossgjzhan,bossxlzhan);
                    printf("����1:�Եз�����൱����������100%���˺�(����ȴ)\n");
                    printf("����2���з�����൱����������150%���˺�(��ȴ2�غ�)\n");
                    printf("����3��ʹ������+5(��ȴ3�غ�)\n");
                    printf("����4������ظ�40Ѫ��(��ȴ4�غ�)\n");
                    printf("ʹ�ü���");
                    scanf("%d", &jineng);
                    switch (jineng) 
	               {
                        case 1:
                        if (cooling1 == 0) 
			         	{
                             flag = 1;
                             xlzhan = xlzhan - bossgjzhan, bossxlzhan = bossxlzhan - gjzhan;
                             printf("��Եз������%d���˺�\n",gjzhan);
                             printf("�з����������%d���˺�\n",bossgjzhan);
                             cooling1 = 1 + 0;
                        }
                             break;
                        case 2:
                        if (cooling2 == 0)
				        {
                             flag = 1;
                             jntwo=2*gjzhan;
                             bossxlzhan = bossxlzhan-jntwo; xlzhan = xlzhan - bossgjzhan;
                              printf("��Եз������%d���˺�\n",jntwo);
                             printf("�з����������%d���˺�\n",bossgjzhan);
                             cooling2 = 2 + 1;
                        }
                             break;
                        case 3:
                        if (cooling3 == 0) 
				        {
                             flag = 1;
                             gjzhan = gjzhan + 5, xlzhan = xlzhan - bossgjzhan;
                             printf("��Ĺ���������5\n");
                             printf("�з����������%d���˺�\n",bossgjzhan);
                             cooling3 = 3 + 1;
                        }
                             break;
                        case 4:
                        if (cooling4 == 0) 
				        {
                             flag = 1;
                             xlzhan = xlzhan - bossgjzhan, xlzhan = xlzhan + 40;
                             printf("��ظ���40Ѫ��\n");
                             printf("�з����������%d���˺�\n",bossgjzhan);
                             cooling4 = 4 + 1;
                        }
                        break;
                        default: 
                        printf("�޴˼���\n");
                   }
                   if (qx = 1)
                    {
                    	if (flag)
						{
							bossjnone=bossjnone+1;
					 }
						if (bossjnone>=3)
						{
							bossjnone=0;
							qxjnzhan=20+rand() % 30;
							xlzhan=xlzhan-qxjnzhan;
							printf("����xiyeʹ���˼��ܺ��绽�꣬���������%d���˺�\n",qxjnzhan);
							printf("�ҷ�������%d  Ѫ��%d\n�з�������%d  Ѫ��%d\n", gjzhan, xlzhan,bossgjzhan,bossxlzhan);
						}
					}
                   if (xlzhan <= 0) 
	            	{
                        printf("������TT\n\n\n");
                        printf("��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n");
                        xlzhan=xueliang;
                        gjzhan=gongji;
                        bossxlzhan=0;
                        bossgjzhan=0;
                        cooling1=0;
		               	cooling2=0;
		            	cooling3=0;
			            cooling4=0; 
			            qx=0;
			            break;
                    }
                   if (bossxlzhan <= 0) 
	        	    {
                            printf("��Ӯ�ˣ���\n");
                            xlzhan=xueliang;
                            gjzhan=gongji;
                            bossxlzhan=0;
                            bossgjzhan=0;
                            jinbi=jinbi+jinbizhan;
                            cooling1=0;
		                	cooling2=0;
		                    cooling3=0;
		                	cooling4=0; 
		                	qx=0;
		                    printf("�����%d���,��ǰ���%d\n\n\n",jinbizhan,jinbi);
                            printf("��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n");
		                	break;
                    }
                    if (flag) 
		            {
                        if (cooling1) cooling1--;
                        if (cooling2) cooling2--;
                        if (cooling3) cooling3--;
                        if (cooling4) cooling4--;
                    } 
					else 
	              	{
                        printf("����������ȴ��\n\n\n");
                    }
                }
                break; 
        case 3:
        	printf("     xiye\n");
        	printf("Ѫ��=%d\n����=%d\n���=%d\n",xueliang,gongji,jinbi);
        	printf("��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=�����Ļ\n");
        	break;
        case 4:
        	system ("cls");
        	printf("�����\n");
        	printf("��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=�����Ļ\n");
        	break; 
        case 5:
        	printf("��˵�öԣ����ǡ�xiye������ð�ա���һ\n����Lic��yhy233.tk�����з���һ��ȫ��\n");
        	printf("������ʽ����ð����Ϸ�����·�����һ��\n������w���򡿵Ļ������磬�㽫����һλ\n");
        	printf("��Ϊ��xiye�������ؽ�ɫ�������ɵ�����\n�������Ը���죬�������ص�xiye�����ǣ�\n");
        	printf("������һ�����ǿ�У��һ�ʧɢ�ķ�����\n") ;
        	printf("ͬʱ���𲽷���xiye��������ֵ����ࡣ\n\n\n\n\n");
        	printf("�汾������־\n");
        	printf("1.����boss��������xiye������xiye\n");
        	printf("2.�޸�������bug��ͷͺ��\n");
        	printf("3.ս�������Ż�\n");
        	printf("4.�޸���ǿ�����ƣ�����ǿ�������Ը�Ϊ���ǿ��\n");
        	printf("\n\n\n");
        	printf("��ѡ����Ҫ����ĳ���\n1=ǿ��\n2=ս��\n3=�鿴��������\n4=������Ļ\n5=��Ϸ����/��������\n");
        	break;
    }
    }
    return 0;
}
