void deletePerson(){
    char name[20];
    char confirm;
    Person p;
    f=fopen("persons.txt","r");
    fp=fopen("temp.txt","w");
    printf("Delete name:");
    scanf("%s",&name);
    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(name,p.name)==0){
            printf(":------ Existing Details ------:");
            printf("\n-------------------------------\n");
            printf("%-20s \t%-5d\n",p.name,p.age);
        }
    }
    rewind(f);
    printf("Are you sure delete this recored? [y/n]:");
    confirm=getche();
    if(confirm=='y'||confirm=='Y'){
        while(fread(&p,sizeof(p),1,f)){
            if(strcmpi(name,p.name)!=0){
                fwrite(&p,sizeof(p),1,fp);
            }
        }
        fclose(f);
        fclose(fp);
        remove("persons.txt");
        rename("temp.txt","persons.txt");
        printf("\n\nData deleted.");
    }
}
