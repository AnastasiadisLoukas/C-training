#include <stdio.h>
int main()
   //to aem mou einai 2333.Anastasiadis Loukas
   /*kanw ousiastika 2 fores tous idious elegxous.
   1 gia tin imerominia gennisis kai 1 gia tin torini imerominia*/
    //dilwsi metablitwn
    {


        int year1,month1,day1,year2,month2,day2,disekto=0,disekto1=0,xronia,mines,meres;


        //elegxoi imerominias gennisis

    printf("parakalw pliktrologiste to xrono gennisis sas(4psifia)\n");
    scanf("%d", &year1);
    while (year1<1900 || year1>4000)
    {
       printf("\nmallon kanate kapoio lathos.parakalw ksanapliktrologiste to xrono gennisis sas\n");
       scanf("%d", &year1);
    }


    if ((year1%4==0 && year1%100!=0) || (year1%400==0)) //elegxos disektou etous gennisews
    {
        disekto=1;
    }

    printf("tora pliktrologiste to mina gennisis sas (1 ews 12)\n");
    scanf("%d",&month1);
    while (month1<1 || month1>12) //elegxos  mina gennisews
    {
        printf("\nmallon kanate kapoio lathos.parakalw ksanapliktrologiste to mina gennisis sas:");
        scanf("%d",&month1);
    }

    printf("tora pliktrologiste tin imera gennisis sas(1 ews 31)\n");
    scanf("%d",&day1);
    while (day1<1 || day1>31) //elegxos  meras gennisews
        {
            printf("mallon kanate kapoio lathos.parakalw pliktrologiste ksana tin imera gennisis sas\n");
        scanf("%d",&day1);
        }

    //telikos  elegxos stoixeiwn gia ti swsti imerominia gennisis(paratiroume oti oi mines 1,3,5,7,8,10 kai 12 den simperilambanontai afou o elegxos gia anw 31 meres ginetai se emfoleumeno while pio katw)


    while (((disekto==1 ) && ((month1==2 && day1>29) || (month1==4 && day1>30) || (month1==6 && day1>30) || (month1==9 &&day1>30) || (month1==11 && day1>30))) ||
        ((disekto==0) && (month1==2 && day1>28) || (month1==4 && day1>30) || (month1==6 && day1>30) || (month1==9 && day1>30) || (month1==11 && day1>30)))
    {
        year1=2000,month1=10,day1=10; //tixaioi arithmoi gia na ginei ksana o elegxos
        printf("mallon kanate kapoio lathos sti kataxwrisi stoixeiwn.3anadwste\n");
    printf("1)dwste xronologia gennisis\n");
    disekto=0;
    scanf("%d",&year1);
    while (year1<1900 || year1>4000)
    {
        printf("mallon kanate kapoio lathos sti kataxwrisi xronologias,ksanaprospathiste\n");
        scanf("%d",&year1);
    }
        if ((year1%4==0 && year1%100!=0) || (year1%400==0))
        {
            disekto=1;
        }
printf("dwste mina ksana\n");
scanf("%d",&month1);
while (month1<1 || month1>12)
{
    printf("lathos kataxwrisi,pliktrologiste mina ksana\n");
    scanf("%d", &month1);
    }
    printf("tora dwste imera tou mina\n");
    scanf("%d",&day1);
    while (day1<1 || day1>31)
    {
        printf("lathos kataxwrisi,ksanaprospathiste\n");
        scanf("%d",&day1);
    }
    }

    printf("parakalw dwste ton arithmo tou torinou xronou(4 psifia)\n");
    scanf("%d",&year2);
    while (year2<1900 || year2>4000) //elegxos torinou etous
    {
        printf("lathos kataxwrisi,ksanaprospathiste\n");
        scanf("%d",&year2);
    }

    if ((year2%4==0 && year2%100!=0) || (year2%400==0)) //elegxos disektou etous torinou
    {
        disekto1=1;
    }


    printf("tora pliktrologiste to torino mina (1 ews 12)\n");
    scanf("%d",&month2);
    while (month2<1 || month2>12) //elegxos torinou mina
    {
        printf("lathos kataxwrisi.parakalw ksanaprospathiste\n");
        scanf("%d",month2);
    }


    printf("tora pliktrologiste tin simerini mera (1 ews 31)\n");
    scanf("%d",&day2);
    while (day2<1 || day2>31) //elegxos simerinis meras
    {
        printf("lathos kataxwrisi.parakalw ksanaprospathiste\n");
        scanf("%d",&day2);
    }



    //telikos  elegxos stoixeiwn gia ti swsti simerini imerominia (paratiroume oti oi mines 1,3,5,7,8,10 kai 12 den simperilambanontai afou o elegxos gia anw 31 meres ginetai se emfoleumeno while pio katw)
    //epipleon elegxos gia to an to etos gennisis einai megalitero tou torinou
while (((((disekto1==1 ) && ((month2==2 && day2>29) || (month2==4 && day2>30) || (month2==6 && day2>30) || (month2==9 &&day2>30) || (month2==11 && day2>30))) ||
        ((disekto1==0) && (month2==2 && day2>28) || (month2==4 && day2>30) || (month2==6 && day2>30) || (month2==9 && day2>30) || (month2==11 && day2>30)))) || (year1>year2))

    {
        year2=2000,month2=10,day2=10; //tixaioi arithmoi gia na ginei ksana o elegxos
        printf("mallon kanate kapoio lathos sti kataxwrisi stoixeiwn.3anadwste\n");
    printf("dwste ton torino xrono\n");
    disekto1=0;
    scanf("%d",&year2);
    while (year2<1900 || year2>4000 )

    {
        printf("mallon kanate kapoio lathos sti kataxwrisi xronologias,ksanaprospathiste\n");
        scanf("%d",&year2);
    }
        if ((year2%4==0 && year2%100!=0) || (year2%400==0))
        {
            disekto1=1;
        }
        printf("dwste mina ksana\n");
scanf("%d",&month2);
while (month2<1 || month2>12)
{
    printf("lathos kataxwrisi,pliktrologiste mina ksana\n");
    scanf("%d", &month2);
    }
    printf("tora dwste imera tou mina\n");
    scanf("%d",&day2);
    while (day2<1 || day2>31)
         {
        printf("lathos kataxwrisi,ksanaprospathiste\n");
        scanf("%d",&day2);
    }


}

//oi elegxoi gia ti swsti kataxwrisi twn stoixeiwn oloklirwthikan.
//diergasia gia ton ipologismo tis ilikias

   //ipologismos imerwn
    if (day2>=day1)
         meres=day2-day1;

    else
        // afou day2<day1 tha prepei na danistoume tis meres enos mina gia na broume ti diafora twn imerwn.argotera omws tha prepei na afairesoume ton mina auto.
        if (month1==4 || month1==6 || month1==9 || month1==11)
			meres=30+day2-day1;
        else if (month1==1 || month1==3 || month1==5 || month1==7 || month1==8 || month1==10 || month1==12)
			meres=31+day2-day1;
			//o minas 2 xwrizetai se 2 katigoreies.1) an brisketai se disekto etos kai 2) an dn brisketai.
		else
            if (disekto==1)
			meres=29+day2-day1;
            else
			meres=28+day2-day1;

    //ipologismos minwn
    if (day2>=day1)
            if (month2<month1)
			mines=12+month2-month1; //danizomaste tous mines enos xronou.argotera tha prepei na afairesoume ena xrono
            else
			mines=month2-month1;


    else
            if (month2<=month1)
			mines=12+month2-month1-1; //to elleimma pou parousiazetai stous mines apo tis meres.episis danizomaste tous mines enos xronou
            else
			mines=month2-month1-1;

    //ipologismos xronwn
    if ((month2>month1) || ((month1==month2) && (day2>=day1)))
        xronia=year2-year1;

        else
		xronia=year2-year1-1; //to elleimma pou parousiazetai sta xronia apo tous mines


		//emfanisi tou apotelesmatos
	printf("\n    i ilikia sas einai\n %d xronia, %d mines kai %d meres\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~",xronia,mines,meres);



}



























