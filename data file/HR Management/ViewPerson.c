void viewPerson(){
    Person p;
    f=fopen("persons.txt","r");
    printf("Name\t\t\tAge");
    printf("\n-------------------------------\n");
    while(fread(&p,sizeof(p),1,f)){
        printf("%-20s \t%-5d\n",p.name,p.age);
    }
    fclose(f);
}
