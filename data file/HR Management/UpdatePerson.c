void updatePerson(){
    char name[20];
    Person p;
    f=fopen("persons.txt","r");
    fp=fopen("temp.txt","w");
    printf("Update name:");
    scanf("%s",&name);
        while(fread(&p,sizeof(p),1,f)){
            if(strcmpi(name,p.name)==0){
                printf(":------ Existing Details ------:");
                printf("\n-------------------------------\n");
                printf("%-20s \t%-5d\n",p.name,p.age);
            }
        }
        rewind(f);
        while(fread(&p,sizeof(p),1,f)){
            if(strcmpi(name,p.name)==0){
               printf("New name:");
               scanf("%s",&p.name);
               printf("New age:");
               scanf("%d",&p.age);
               fwrite(&p,sizeof(p),1,fp);
            }else{
            fwrite(&p,sizeof(p),1,fp);
            }
        }
    fclose(f);
    fclose(fp);
    remove("persons.txt");
    rename("temp.txt","persons.txt");
    printf("Data Updated.");
}
