#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>




int main()


{
	srand(time(NULL)); //randomun her defasýnda farklý çalýsmasi icin gerekli kod
// Deðiþkenler  
int secim;
int secim2;//savaþmak mý korumak mý seçimini yapar.
int olumSecim;// oldukten sonra tekrar oynama secenegi;
int k;//herhangi bir tusa basmak icin kullanýlýr

char isim[100];

//kararkter icin degiskenler
 int can;
 int atak;
 
 int Ustrandom;//random atak icin ust sayi
 int kopkeRandom;//kopek seciminde bir olasilik tutar
 //Zombi için deðiþkenler
 int Zcan;
 int Zatak;
 //Domuzicin deðiþkenler
 int Dcan;
 int Datak;
 //At deðiþkenler
 int Acan;
 int Aatak;
 //kurt deðiþkenler
 int Kcan;
 int Katak;
 //kopek deðiþkenler
 int Kocan;
 int Koatak;
 //yamyam deðiþkenler
 int  Ycan;
 int Yatak;
 //Dag Kecisi icin deðiþkenler
 int DKcan;
 int DKatak;
 // Dag ayisi icin degiskenler
 int DAcan;
 int DAatak;
 //Okcu icin degiskenler
 int Ocan;
 int Oatak;
 
 
 

 



yenidenBaslat: printf("           ARENA OYUNUNA HOS GELDINIZ               \n");
sleep(1);
printf(" 1.Karakteriniz Sovalye \n Atak:1-6 arasi \n Can:10 \n ****************** \n");

printf(" 2.Karakteriniz Cellat \n Atak:1-10 arasi \n Can:7 \n ****************** \n");

printf(" 3.Karakteriniz Zirhli \n Atak:1-4 arasi \n Can:20 \n ****************** \n");

printf(" Oyuna baslamak icin karakter secmelisiniz. Lutfen secmek icin 1-3 arasi rakam giriniz : ");
goSecim:scanf("%d",&secim);	

switch(secim)
{
	
	
	case 1: 
	sleep(1);
	can=10; //karaktere göre canve zirh atamasi
	
	
	Ustrandom=6;
	
	printf("Demek Sovalyeyi sectin. Senin icin can onemli olmali \n");
	strcpy(isim, "Sovalye");
	break;
	
	case 2:
	sleep(1);
	can=7;
	
	
	Ustrandom=10;
	 printf("Demek Cellati sectin. Senin icin atak baya onemli olmali \n");
	 strcpy(isim, "Cellat");
	break;
	
	case 3:
	sleep(1);
	can=20;
	
	
	Ustrandom=4;
	 printf("Demek Zirhliyi sectin. Umarim dusmanlara vurabilirsin \n");
	 strcpy(isim, "Zirhli");
	break;
	
	default: printf("Ups sanirim yanlis girdiniz tekrar secelim. \n");
	
	goto goSecim;
}
//secim=0;


printf("Karakterini sectigine gore artik yola koyulabiliriz. \n ***************************************************************** \n");
sleep(2);
printf(" %s%s",isim," yolda yururken karsina 3 tane yol cikar. \n ");
sleep(4);
printf("%s%s",isim," bir secim yapmak zorundadir \n");
printf(" 1.yol ormana gider.Ormanda karsina zombi,domuz veya at cikabilir.\n*************************************************************************\n");
printf(" 2.yol kayalik bolgelere gider. Kayalik bolgelerde karsina kurt,kopek ve yamyamlar cikabilir. \n*************************************************************************\n");
printf(" 3.yol daga gider. Dagda karsina dag kecisi,dag ayisi ve okcu cikabilir \n*************************************************************************\n");
printf(" Secim yapmak icin 1 ile 3 arasi bir rakam giriniz : ");
goSecim2:scanf("%d",&secim);
 
switch(secim)
{
	case 1:{
		
	 printf("Ormanda islerin zor olabilir ama belkide daha degisik seyler ile karsilasabilirsin. \n",sleep(6));
	 printf("%s%s",isim," Ormanda yurumeye karar verir. Ormanda etrafinda her an bir sey cikma tehlikesi ile yururken bir ses duyar  \n",sleep(10));
  	 printf(" Yaklasmaya karar veren %s%s",isim," sessizce ilerler...\n",sleep(3));
	 printf(" o da ne !!!\n",sleep(3));
	 for(int i=1;i<100000;i++){
	 	int mobSecim=rand()%3+1;// secim icin rastgele sayi üretir
	 	switch(mobSecim)
		 {
	 		case 1:// Zombý secimi 
			 {
			 
	 			printf(" Bir ZOMBI !!!! \n",sleep(1));
	 			goSecim99:printf(" Birseyler yapmalisin \n ya kacacaksin ya da bir darbe indireceksin.",sleep(3));
	 			printf("Savasmak icin 1 kacmak icin 2 ye basiniz \n");
	 			scanf("%d",&secim2);//vurmak ve korunmak secimini yapar
	 			switch(secim2)
			    {
	   			 
	        		case 1://**************************** Vurmak Secenegi *******************************
					{
					printf("%s%s",isim," icin guzel secim !\n");
	 			 	
	 			 	Zcan=rand()%6+4;//0-8 arasý bir sayý
	 			 	goSecim4:atak=rand()%Ustrandom+1; 
	 			 	Zcan=Zcan-atak;
	 			 	if(Zcan<=0)
		 		 	{
	 				printf(" Zombiye oyle bir vurdun ki nerden geldigini sasirdi. tebrikler Zombiyi öldürdün\n");
	 				printf("***************************************************************\n");
	 				sleep(6);
				  	}
		 		 	else
		  			{
		  		 	printf("Zombiye %d%s",atak," vurdun \n",sleep(2));
		  		 	printf("Zombi senin atagindan sonra ayaga kalkti ve sana vurdu... \n",sleep(1));
		  		 	Zatak=rand()%4+1;
		  		 	can=can-Zatak;
		  		 	printf("Zombi sana %d",Zatak,"vurdu.%d ",can,"canin kaldi. \n");
		  		 	printf("Zombiyi oldurmek icin tekrar bir darbe indir !!!!!!\n");
		  		 	sleep(6);
		  		 	goto goSecim4;//tekrar atak yapmasi icin goto kullanilir
		 			}
		  			break;
					}
					case 2://********************** kacma secenegi  *************************
					{ 
						can=can-1;
						printf("Kacarken yaralandin ve canin 1 azaldi \n");
						printf("***************************************************************\n");
						sleep(4);
						break;
					}
	 		 		default://*****************yanlis secim yeri****************************
					  { 
	 		 			printf("Sanirim yanlis bastiniz. Tekrar deneyelim :");
						goto goSecim99;
					  }
	 			}  
				 if(can<=0){
				 	i=1000001;
				 	printf("Caniniz kalmadi oldunuz...\n");
				 	printf("***************************************************************\n");
				 	
				 } 
	 		}
	 		case 2://Domuz Secimi
			 {
	 			printf(" Bir Domuz !!!! \n",sleep(1));
	 			goSecim6:printf(" Birseyler yapmalisin \n ya kacacaksin ya da bir darbe indireceksin.\n",sleep(3));
	 			printf("Savasmak icin 1 kacmak icin 2 ye basiniz \n");
	 			scanf("%d",&secim2);//vurmak ve korunmak secimini yapar
	 			switch(secim2)
			    {
	   			 
	        		case 1://**************************** Vurmak Secenegi *******************************
					{
					printf("%s%s",isim," icin guzel secim !\n");
					sleep(1);
	 			 	
	 			 	Dcan=rand()%10+4;//10-14arasý bir sayý
	 			 	goSecim5:atak=rand()%Ustrandom+1; 
	 			 	Dcan=Dcan-atak;
	 			 	if(Dcan<=0)
		 		 	{
	 				printf(" Domuza oyle bir vurdun ki felegi sasti :D. tebrikler Domuzu oldurdun\n");
	 				sleep(6);
				  	}
		 		 	else
		  			{
		  		 	printf("Domuza %d%s",atak," vurdun \n",sleep(2));
		  		 	printf("Domuz hasar alinca kudurdu. Sana vurmak icin hazrilaniyor. \n",sleep(6));
		  		 	Datak=rand()%4+1;
		  		 	can=can-Datak;
		  		 	printf("Domuz sana %d%s",Datak,"vurdu. %d%s",can,"canin kaldi. \n");
		  		 	if(can<=0){
				 	i=1000001;
				 	printf("Caniniz kalmadi oldunuz...\n");
				 	printf("***************************************************************\n");
				 	
				 		} 
		  		 	printf("Domuzu oldurmek icin tekrar bir darbe indir !!!!!!\n");
		  		 	sleep(6);
		  		 	
		  		 	goto goSecim5;//tekrar atak yapmasi icin goto kullanilir
		 			}
		  			break;
					}
					case 2://********************** kacma secenegi  *************************
					{ 
						can=can-1;
						printf("Kacarken yaralandin ve canin 1 azaldi \n");
						sleep(1);
						break;
					}
	 		 		default://*****************yanlis secim yeri****************************
					  { 
	 		 			printf("Sanirim yanlis bastiniz. Tekrar deneyelim :");
						goto goSecim6;
					  }
	 			}   
				
			 }
		    case 3:// At Secimi
			{
		    	printf("Bir At !!!! \n",sleep(1));
	 			goSecim7:printf(" At seni kutsadi ve 2 can vermek istedi.\n",sleep(3));
	 			printf("kabul etmek icin 1 reddetmek icin 2 ye basiniz \n");
	 			scanf("%d",&secim2);//kabul ve red secenegini yapar
	 			switch(secim2)
			    {
	   			 
	        		case 1://**************************** Kabul Secenegi *******************************
					{
					printf(" At kabul ettigini gorunce cok sevindi ve mutluluktan patladi \n");
					printf("***************************************************************\n");
					
					sleep(6);
	 			 	can=can+2;
		  			break;
					}
					case 2://********************** Reddetme secenegi  *************************
					{ 
					printf("At reddettigini gorunce sana bir vurdu pestilin cikti \n");
					sleep(6);
					Aatak=rand()%6+1;
					can=can-Aatak;
					printf("Attan güzel bir darbe alinca canin %d%s",Aatak," azaldi! \n");
					sleep(1);
					printf("Canin: %d",can);
					printf("***************************************************************\n");
					sleep(6);
					break;
					}
	 		 		default://*****************yanlis secim yeri****************************
					  { 
	 		 			printf("Sanirim yanlis bastiniz. Tekrar deneyelim :");
						goto goSecim7;
					  }
	 			}   
				if(can<=0){
				 	i=1000001;
				 	printf("Caniniz kalmadi oldunuz...\n");
				 	
				 } 
			}
		 }
	 }
	 
		break;
	}
	case 2:{
		printf("Kayalik bolge zor gibi gozukuyor ama bu zorlugun ustesinden gelebilirsen seni guzel seyler bekliyor. \n",sleep(5));
		printf("%s%s",isim," Kayalik bolgede yururken zorlanir. Kayalik bolgede giderken bir yerden kucuk tas duser...  \n",sleep(10));
  	 	printf(" Tasin dusdugu yere  %s%s",isim," yavasca gider...\n",sleep(3));
	 	printf(" Bir anda bir cisim cikar !!!\n",sleep(3));
	 	for(int j=1;j<100000;j++){
	 		 int mobSecim2=rand()%3+1;// secim icin rastgele sayi üretir 1 2 3 
	 		switch(mobSecim2)
			 {
			 	case 1://kurt secimi 
				 {
				 	printf(" Bir Kurt !!!! \n",sleep(1));
	 			goSecim8:printf(" Birseyler yapmalisin \n ya kacacaksin ya da kafasina buyuk bir darbe indireceksin .\n",sleep(3));
	 			goSecim3:printf("Buyuk bir darbe icin 1 kacmak icin 2 ye basiniz \n");
	 			scanf("%d",&secim2);//vurmak ve korunmak secimini yapar
					switch(secim2)
					{
						case 1://**************************** Vurmak Secenegi *******************************
					{
					printf(" Kurtla savasmak herkesin yapabilecegi bir sey degil. !\n");
	 			 	
	 			 	Kcan=rand()%6+8;//6 14 arasýarasý bir sayý
	 			 	goSecim100:atak=rand()%Ustrandom+1; 
	 			 	Kcan=Kcan-atak;
	 			 	if(Kcan<=0)
		 		 	{
	 				printf("Kurdu agir darbelerin sonucunda oldurdun !!!!!!\n");
	 				printf("***************************************************************\n");
	 				sleep(6);
				  	}
		 		 	else
		  			{
		  		 	printf("Kurda %d%s",atak," vurdun \n",sleep(2));
		  		 	printf("Kurt bu darbenin sonucunda sersemledi ama simdi daha hirsli bir sekilde sana geliyor !!!! \n  ",sleep(5));
		  		 	Katak=rand()%5+3;
		  		 	can=can-Katak;
		  		 	goSecim9:printf("Kurt sana %d%s",Katak,"vurdu.\n");
		  		 	printf(" %d%s",can,"canin kaldi. \n");
		  		 	printf("Kurtu oldurmen lazim yoksa isin bitecek,vur !!!!!!\n");
		  		 	sleep(6);
		  		 	goto goSecim100;//tekrar atak yapmasi icin goto kullanilir
		 			}
		  			break;
					}
					case 2://********************** kacma secenegi  *************************
					{ 
						can=can-2;
						printf("Kayalar ustunde kacmaya calýsýrken dustun ve canin 2 azaldi \n",sleep(4));
						printf("Kurt seni yerde gordu ve saldiriya geciyor \n");
						goto goSecim9;//kacarken kurt saldirisi icin gider
						sleep(4);
						break;
					}
	 		 		default://*****************yanlis secim yeri****************************
					  { 
	 		 			printf("Sanirim yanlis bastiniz. Tekrar deneyelim :");
						goto goSecim3;
					  }
	 			}  
				 if(can<=0){
							printf("Caniniz kalmadi oldunuz...\n");
							printf("***************************************************************\n");
							goto olumYeri;
							} 
					}
				 
				 case 2:// Kopek Secimi
				 {
				 	printf("Bir Kopke !!!! \n",sleep(1));
	 			printf(" Kopke seni gorunce cok sevinir ve seni yere yatirip yalamaya calisir\n ya yalamasina izin vereceksin ya da uzerinden firlatacaksin  .\n",sleep(3));
	 			printf("Yalamasina izin vermek icin 1 firlatmak icin 2 \n");
	 			scanf("%d",&secim2);//yalama ve firlatma secenegi
					switch(secim2)
					{
						case 1://**************************** yalama secenegi*******************************
					{
					printf("Kopkeleri herkes sever degil  mi. !\n");
					kopkeRandom=rand()%2+1;
					 switch(kopkeRandom)
					{
						case 1:{
							printf("Kopke seni cok sevdi ve salyalarindan bagisiklik kazandin canin 2 artti!! \n",sleep(7));
					can=can+2;
					printf("Canin: %d",can);
					sleep(5);
					break;
						}
					case 2:{
						printf("Kopke seni yaladi ve mutlu oldu. Sende cok mutlu oldun. \n ",sleep(5));
						break;
					}
					}
					
	 			 	
		 			}
		  			break;
		  			case 2://********************** Firlatma secenegi *************************
					{ 
						can=can-2;
						printf("Kopke senin bu hareketine cok uzuldu ve aglayarak gitti :( \n",sleep(4));
						printf("Bunun uzerine cok uzuldun !!! :(:( \n");
						kopkeRandom=rand()%10+10;// 10 20 arasý sayý tutar
						if(kopkeRandom==15){
							printf("Kopek gidince kalbin paramparca oldu. canin bir sey yapmak istemiyor.\n");
							printf("Vicdansiz bir insana donustugunden canin 5 azaldi :D \n",sleep(5));
							can=can-5;
							printf("Canin: %d",can);
					     sleep(5);
						}
						else{
							printf("yoluna devam ettin.. \n");
							printf("***************************************************************\n");
							sleep(3);
						}
						
						
						break;
					}
					default://*****************yanlis secim yeri****************************
					  { 
	 		 			printf("Sanirim yanlis bastiniz. Tekrar deneyelim :");
						goto goSecim3;
					  } 
					}
					if(can<=0){
							printf("Caniniz kalmadi oldunuz...\n");
							goto olumYeri;
							} 
					
				 }
				 
				 case 3://yamyam secimi
				 {
					
	 			    int yamyamSecim=rand()%2+1;
	 			    switch(yamyamSecim)// Yamyam 3 tane secenegi var onu baslatir
					 {
					 	case 1:
						 {
					 		printf("Bir Yamyam !!!! \n",sleep(1));
	 			    		printf(" Yamyam size vucudunuzdan 1 kit karsiliginda hayatnizi bagisliyor  .\n",sleep(3));
	 			    		printf("kitlatmak icin 1 i savasmak icin 2 \n");
	 			    		scanf("%d",&secim2);//yalama ve firlatma secenegi
	 			    		switch(secim2){
	 			    			case 1://kitlatmak secenegi
								 {
								 	int yRandom=rand()%4+1;
								 	can-=yRandom;
	 			    				printf("Yamyam sizden %d %s",yRandom," can aldi \n");
	 			    				sleep(5);
	 			    				if(can<=0){
							printf("Caniniz kalmadi oldunuz...\n");
							goto olumYeri;
							} 
									break;
								 }
								 case 2:// Savasmak secenegi
								 {
								 	Ycan=rand()%8+5;
								 	goSecim98:Yatak=rand()%7+3;//3 ile 10 arasý bir sayý secer
								 	can-=Yatak;
								 	printf("Yamyam Size mizrak ile bir güzel vurdu. \n",sleep(4));
								 	if(can<=0){
							printf("Caniniz kalmadi oldunuz...\n");
							goto olumYeri;
							}
								 	printf("Caniniz %d%s",Yatak,"azaldi. \n");
								 	sleep(4);
								 	printf("Caniniz:%d\n",can);
								 	sleep(5);
								 	printf("Yamyama darbe indirdin.\n",sleep(4));
								 	atak=rand()%Ustrandom+1;
								 	Ycan-=atak;
								 	printf("Yamyama %d %s",atak,"vurdunuz..\n");
								 	sleep(5);  
								 	if(Ycan<=0){
								 		printf("Yamyami oldurdunuz ... \n");
								 		printf("yamyam oldu ve iksir buldun,ictin. Canin 2 yukseldi.. \n",sleep(6));
								 	can+=2;
								 		
									 }
									 else if(can<=0){
							printf("Caniniz kalmadi oldunuz...\n");
							goto olumYeri;
							} 
									 else{
									 	printf("yamyam tekrar vurmaya hazirlaniyor..\n");
								 	sleep(2);
								 	goto goSecim98;
									 }
								 	
									
								 }
							 }
	 			    		
	 			    		
							
						 }
					    case 2:
						{
							printf("Bir Yamyam!!!! \n",sleep(1));
	 			    		printf(" Yamyam seni kendi kabilesinden zannetti .\n",sleep(3));
	 			    		printf("yamyamin bogrune mizrak sokmak icin 1 i Hicbirsey olmamis gibi gitmek icin 2 yi seciniz.. \n");
	 			    		scanf("%d",&secim2);//mizrak ve kacmak
	 			    		switch(secim2){
	 			    			case 1://bogur
								 {
								 	printf("yamyam oldu ve iksir buldun,ictin. Canin 2 yukseldi.. \n",sleep(3));
								 	can+=2;
								 }
								 case 2:// kacmak
								 {
								 	printf("Yamyama selam verdiniz ve uzaklastiniz. \n",sleep(3));
								 	int selamRandom=rand()%20;
								 	if(selamRandom<=5){
								 		printf("Yamyam Aleykumselam dedi ve gitti. \n",sleep(3));
									 }
									 else if(selamRandom>5&&selamRandom<=10){
									 	printf("Yamyam size Raitiku taiiiibu Erduganu dedi ve gitti.. \n",sleep(3));
									 }
									 else{
									 	
									 }
								 	
						}
					 
					 
					 }
	 			    
				 }
				 		
				 
				 }
				 
				  
	}
	
}
}

}
case 3:{
		printf(" Daga gitmek seni zorlayabilir. burada her sey ile karsilasabilirsin. \n");
		sleep(3);
		printf(" %s%s",isim," Dag yolunu sectikten sonra yurumeye baslar.. \n",sleep(5));
		printf(" Dagi tirmanmaya baslarken calilar hisirdamaya baslar.. \n",sleep(6));
		printf(" %s%s",isim," hisirtiyi duyar ve bekler. Sonra ustune gitmeye karar verir...\n",sleep(7));
		printf("Sessizce giderken bir cisim cikar...!!!!!!\n",sleep(5));
		
		for(int l=1;l<100000;l++){
	 	int mobSecim=rand()%3+1;// secim icin rastgele sayi üretir
	 	switch(mobSecim){
	 		case 1://dag kecisi secimi
			 {
	 			printf("Bu bir dag kecisi !!! \n",sleep(5));
	printf("Dag kecisinin boynuz darbesinden kacmak icin agaca tirmanmalisin ya da keci ile savasacaksin. Kacmak icin 1 savasmak icin 2 yi tuslayiniz.. \n",sleep(9));
	scanf("%d",&secim2);
	switch(secim2)
	{
		case 1://kacma secenegi
		{
			printf("Kacmak icin agaca tirmadin \n",sleep(3));
			printf("Agaca tirmanirken 1 canin azaldi. \n",sleep(3));
			can-=1;
			printf("Caniniz:%d\n",can);
			if(can<=0)
				{
				
					printf("Caniniz Kalmadi oldunuz.!",sleep(2));
					l=100000;
					goto olumyeri3;
				}
			sleep(2);
			printf("Keci sizi o kadar cok bekledi ki unutup gitti. \n",sleep(5));
			printf("***************************************************************\n");
			break;
		}
		case 2://savasma secenegi
		{
			DKcan=rand()%4+5;//4 iþe 9 arasý sayý
			printf("Keci size guzel bir boynuz darbesi icin hazirlaniyor... \n",sleep(7));
			keci:DKatak=rand()%3+4;//3 ile 7 arasý bir sayý
			printf("Keci size %d%s",DKatak," vurdu.\n");
			sleep(4);
			printf("Canin: %d",can);
				if(can<=0)
				{
				
					printf("Caniniz Kalmadi oldunuz.!",sleep(2));
					l=100000;
					goto olumyeri4;
				}
						
					printf("Keciye vurmak icin hazirlaniyorsun..\n",sleep(4));
					atak=rand()%Ustrandom+1; 
					DKcan-=atak;
					printf("Keciye %d%s",atak," vurdun.\n");
					if(DKcan<=0){
						printf("Keciyi oldurmeyi basardin.\n",sleep(4));
						printf("***************************************************************\n");
					
				    }
				    else
					{
						printf("keci sana vurmaya hazirlaniyor... \n",sleep(4));
						goto keci;
					}
				break;
		}
	}
				break;
			 }
			 case 2://dag ayisi secimi
			 {
			 	printf("Bu bir dag ayisi  !!!\n",sleep(5));
			 	printf("Kastamonu Ayisi oldugunu hemen anladin ve ona gore hareket etmeyi planliyorsun.\n",sleep(5));
			 	printf("Dag ayisiyla ya savasacaksin ya da ben de Kastamonuluyum diyeceksin. Savasmak icin 1 Soylemek icin 2 \n",sleep(5));
			 	scanf("%d",&secim2);
				switch(secim2)
				{
					case 1://savasma secenegi
					{
						DAcan=rand()%9+5;//5 ile 14 arasi sayi
						ayi:printf("Dag ayisina vurmak icin hazirlaniyorsun.. \n",sleep(5));
						atak=rand()%Ustrandom+1;
						DAcan-=atak;
						printf("Ayiya %d%s",atak,"vurdun.\n");
					if(DAcan<=0){
						printf("Ayiyi oldurmeyi basardin. Helal Olsun\n",sleep(4));
						printf("***************************************************************\n");
					
				    }
				    else
					{
						printf("Ayi sana vurmaya hazirnaiyor... \n",sleep(4));
						DAatak=rand()%6+5;//6 ile 11 arasi sayi secer
						printf("Ayi size %d%s",DAatak,"vurdu.\n");
						if(can<=0)
						{
							printf("Caniniz Kalmadi oldunuz.! \n",sleep(2));
							l=10000011;
							goto olumyeri2;
						}
							goto ayi;	
					}
						
						break;
					}
					case 2://Soyleme secenegi
					{
						printf("Ben de KASTAMONULUYUM!!! \n",sleep(2));
						int ayiSecim=rand()%2+1;
						switch(ayiSecim){
							
							case 1:{
								printf("Ayi bu taktigini yemedi ve 7 vurup yine de seni birakti.\n",sleep(5));
								printf("***************************************************************\n");
								can-=7;
								break;
							}
							case 2:{
								printf("Ayi sizin Kastamonulu olmaniza sevindi ve size özel cekme helvasindan verdi.",sleep(5));
								printf("Helvayi yediniz ve caniniz 5 artti.\n",sleep(5));
								printf("***************************************************************\n");
								can+=5;
								break;
							}
						}
						break;
					}
				
				}
			 	
				break;
			 }
			 case 3://okcu secimi
			 {
			 	printf("Bu bir Okcu  !!!\n",sleep(5));
			 	printf("Okcu sana ok atmaya hazirlaniyor.\n",sleep(5));
			 	printf("Okcunun okundan kacip vurmak icin 1 kacmak icin 2 tusla \n",sleep(5));
			 	scanf("%d",&secim2);
				switch(secim2)
				{
					case 1: //kacip vurmak
					{
						Ocan=rand()%4+3;
						int okrndm=rand()%2+1;
						if(okrndm==1){
						printf("Okcunun okundan kacamadin \n",sleep(4));
						okcu:Oatak=rand()%4+2;
						printf("Okcu size %d%s",Oatak,"vurdu.\n");
						if(can<=0)
						{
							printf("Caniniz Kalmadi oldunuz.! \n",sleep(2));
							l=10000011;
						}
						printf("okcuya vurmaya hazirlaniyorsunuz... \n",sleep(5));
						atak=rand()%Ustrandom+1;
						Ocan-=atak;
						printf("Okcuya %d%s",atak,"vurdun.\n");
						printf("Okcu senden uzaklasti ve yine ok atmaya calisiyor. \n",sleep(6));
						goto okcu;
						}
						else if(Ocan<=0){
							printf("Okcuyu oldurmeyi basardin!! \n",sleep(4));
							printf("***************************************************************\n");
						}
						else if(okrndm==2){
						printf("Okcunun okundan kactin \n",sleep(4));
						
						okcu2:printf("okcuya vurmaya hazirlaniyorsunuz... \n",sleep(5));
						atak=rand()%Ustrandom+1;
						Ocan-=atak;
						printf("Okcuya %d%s",atak,"vurdun.\n");
						printf("Okcu senden uzaklasti ve yine ok atmaya calisiyor. \n",sleep(6));
						Oatak=rand()%4+2;
						printf("Okcu size %d%s",Oatak,"vurdu.\n");
						if(can<=0)
						{
							printf("Caniniz Kalmadi oldunuz.! \n",sleep(2));
							l=10000011;
						}
						goto okcu2;
						}
						
					}
					case 2://kacmak
					{
						printf("Okcu siz kacarken size 3 vurdu \n");
						can=-3;
						if(can<=0)
						{
							printf("Caniniz Kalmadi oldunuz.! \n",sleep(2));
							l=10000011;
							goto olumyeri5;
						}
						printf("Canin: %d\n",can);
						printf("***************************************************************\n");
						
						sleep(3);
						
						
					}
				}
				break;
			 }
			 
	 		
		 }
	     }
		break;
	}
	default: printf("Sanirim yanlis bastiniz. Tekrar deneyelim :");
	goto goSecim2;
	
olumyeri5:olumyeri4:olumyeri3:olumyeri2:olumYeri:printf("Oyun Bitti !! \n");
printf("Tekrar oynamak istiyor musunuz ? Istiyorsaniz 1 e basiniz ");
scanf("%d",&olumSecim);
switch(olumSecim){
	case 1: 
	printf("***************************************************************\n");
	goto yenidenBaslat;
	default:
		break;}}}








