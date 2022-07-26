void createPerson(){
    Person p;
    f=fopen("persons.txt","a+");
    char next='y';
    while(next=='y' || next=='Y'){
        printf("\nName:");
        scanf("%s",&p.name);
        printf("Age:");
        scanf("%d",&p.age);
        fwrite(&p,sizeof(p),1,f);
        printf("Data inserted successfully.");
        printf("\n\nAdd another recored? (Y/N):");
        next=getche();
    }
    fclose(f);
}
