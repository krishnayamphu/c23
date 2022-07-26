void  searchPerson(){
char name[20];
Person p;
f=fopen("persons.txt","r");
printf("Search name:");
scanf("%s",&name);
    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(name,p.name)==0){
            printf(":------ Existing Details ------:");
            printf("\n-------------------------------\n");
            printf("%-20s \t%-5d\n",p.name,p.age);
        }
    }
}
