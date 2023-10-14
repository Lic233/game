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
    printf("欢迎来到xiye主义至上的教室！！\n\n\n");
    printf("自身属性:\n血量=%d\n攻击=%d\n金币=%d\n\n\n",xueliang,gongji,jinbi);
    printf("请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n5=游戏背景/更新内容\n");
    while(bye==1){
    scanf("%d",&changjing);
    switch (changjing) 
	{  
    	case 1:
    		printf("请选择你要强化的属性\n退出=0  血量=1  攻击力=2\n");
			scanf("%d",&qianghua);
			switch (qianghua)
			{
			case 0:
			    printf("请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n");
			    break;
			case 1:
				if (jinbi>=50)
				{
					jinbi=jinbi-50;
					xlqianghua=rand() % 20;
					xueliang=xueliang+xlqianghua;
					printf("血量增加了%d!\n",xlqianghua);
					printf("血量已强化到%d\n请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n",xueliang);
				}
				else 
				{
					printf("金币不足TT\n请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n");
				}
				break;
			case 2:
			    if (jinbi>=50)
				{
			    	jinbi=jinbi-50;
			    	gjqianghua=rand() % 4;
			    	gongji=gongji+gjqianghua;
			    	printf("攻击增加了%d!\n",gjqianghua);
			    	printf("攻击已强化到%d\n请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n",gongji);
			    }
			    	else 
				{
					printf("金币不足TT\n请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n");
				} 
				break;
			default:
				printf("是不是输入错误了呢awa\n请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n");
				break;
         	}
         	break; 
	    case 2:	
		    printf("请选择你要挑战的xiye\n1=建筑xiye\n2=机械xiye\n3=帝王xiye\n4=气象xiye");
			scanf("%d",&boss);	
			switch (boss)
			{ 
         	case 1:
	          	printf("正在挑战建筑xiye...\n建筑xiye属性:\n血量60\n攻击12\n战胜可得10-30金币\n");
	          	bossxlzhan = jianxl;
	          	bossgjzhan = jiangj;
	          	jinbizhan = 10+rand() % 20;
	          	break;  
	        case 2:
	            printf("正在挑战机械xiye...\n机械xiye属性:\n血量75\n攻击18\n战胜可得15-38金币\n");
	            bossxlzhan = jixl;
	            bossgjzhan = jigj;
	            jinbizhan = 15+rand() % 23;
	            break;
	        case 3:
	        	printf("正在挑战帝王xiye...\n帝王xiye属性:\n血量140\n攻击25\n战胜可得23-48金币\n");
	            bossxlzhan = jixl;
	            bossgjzhan = jigj;
	            jinbizhan = 23+rand() % 25;
	            break; 	
	        case 4:
	        	printf("正在挑战气象xiye...\n气象xiye属性:\n血量180\n攻击40\n呼风唤雨：每两回合对自身造成随机20-50点伤害\n战胜可得42-67金币\n");
	            bossxlzhan = qxxl;
	            bossgjzhan = qxgj;
	            jinbizhan = 42+rand() % 25;
	            qx = 1;
	            bossjnone = 0;
	        	
	        }
                while (xueliang > -1000) 
	            {
                    int flag = 0;
                    printf("我方：攻击%d  血量%d\n敌方：攻击%d  血量%d\n", gjzhan, xlzhan,bossgjzhan,bossxlzhan);
                    printf("技能1:对敌方造成相当于自身攻击力100%的伤害(无冷却)\n");
                    printf("技能2：敌方造成相当于自身攻击力150%的伤害(冷却2回合)\n");
                    printf("技能3：使自身攻击+5(冷却3回合)\n");
                    printf("技能4：自身回复40血量(冷却4回合)\n");
                    printf("使用技能");
                    scanf("%d", &jineng);
                    switch (jineng) 
	               {
                        case 1:
                        if (cooling1 == 0) 
			         	{
                             flag = 1;
                             xlzhan = xlzhan - bossgjzhan, bossxlzhan = bossxlzhan - gjzhan;
                             printf("你对敌方造成了%d点伤害\n",gjzhan);
                             printf("敌方对你造成了%d点伤害\n",bossgjzhan);
                             cooling1 = 1 + 0;
                        }
                             break;
                        case 2:
                        if (cooling2 == 0)
				        {
                             flag = 1;
                             jntwo=2*gjzhan;
                             bossxlzhan = bossxlzhan-jntwo; xlzhan = xlzhan - bossgjzhan;
                              printf("你对敌方造成了%d点伤害\n",jntwo);
                             printf("敌方对你造成了%d点伤害\n",bossgjzhan);
                             cooling2 = 2 + 1;
                        }
                             break;
                        case 3:
                        if (cooling3 == 0) 
				        {
                             flag = 1;
                             gjzhan = gjzhan + 5, xlzhan = xlzhan - bossgjzhan;
                             printf("你的攻击增加了5\n");
                             printf("敌方对你造成了%d点伤害\n",bossgjzhan);
                             cooling3 = 3 + 1;
                        }
                             break;
                        case 4:
                        if (cooling4 == 0) 
				        {
                             flag = 1;
                             xlzhan = xlzhan - bossgjzhan, xlzhan = xlzhan + 40;
                             printf("你回复了40血量\n");
                             printf("敌方对你造成了%d点伤害\n",bossgjzhan);
                             cooling4 = 4 + 1;
                        }
                        break;
                        default: 
                        printf("无此技能\n");
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
							printf("气象xiye使用了技能呼风唤雨，对你造成了%d点伤害\n",qxjnzhan);
							printf("我方：攻击%d  血量%d\n敌方：攻击%d  血量%d\n", gjzhan, xlzhan,bossgjzhan,bossxlzhan);
						}
					}
                   if (xlzhan <= 0) 
	            	{
                        printf("你输了TT\n\n\n");
                        printf("请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n");
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
                            printf("你赢了！！\n");
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
		                    printf("获得了%d金币,当前金币%d\n\n\n",jinbizhan,jinbi);
                            printf("请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n");
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
                        printf("技能正在冷却中\n\n\n");
                    }
                }
                break; 
        case 3:
        	printf("     xiye\n");
        	printf("血量=%d\n攻击=%d\n金币=%d\n",xueliang,gongji,jinbi);
        	printf("请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清除屏幕\n");
        	break;
        case 4:
        	system ("cls");
        	printf("已清除\n");
        	printf("请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清除屏幕\n");
        	break; 
        case 5:
        	printf("你说得对，但是《xiye的奇妙冒险》是一\n款由Lic，yhy233.tk自主研发的一款全新\n");
        	printf("不开放式世界冒险游戏。故事发生在一个\n叫做【w星球】的幻想世界，你将扮演一位\n");
        	printf("名为【xiye】的神秘角色，在自由的旅行\n中邂逅性格各异，能力独特的xiye分身们，\n");
        	printf("和他们一起击败强敌，找回失散的分身——\n") ;
        	printf("同时，逐步发掘【xiye】这个名字的真相。\n\n\n\n\n");
        	printf("版本更新日志\n");
        	printf("1.新增boss——帝王xiye，气象xiye\n");
        	printf("2.修复了无数bug（头秃）\n");
        	printf("3.战斗界面优化\n");
        	printf("4.修改了强化机制，现在强化的属性改为随机强化\n");
        	printf("\n\n\n");
        	printf("请选择你要进入的场景\n1=强化\n2=战斗\n3=查看自身属性\n4=清理屏幕\n5=游戏背景/更新内容\n");
        	break;
    }
    }
    return 0;
}
