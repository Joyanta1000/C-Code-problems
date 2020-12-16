  #include<stdio.h>
  #include<string.h>
  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
      vector<string>gram;
       char stp[20],part1[20],part2[20],modifiedGram[20],newGram[20],tempGram[20];
       int i,j=0,k=0,l=0,pos;
       int n;
       cin>>n;
       for(i=0;i<n;i++)
       {
       printf("Enter Production %d : A->",i+1);
       gets(stp);
       gram.push_back(stp);
       }
       for(j=0;j<n;i++)
       {
           for(i=0;gram[j]!='\0';i++)
       {
       for(i=0;gram[i]!='|';i++,j++)
           part1[j]=gram[i];
      part1[j]='\0';
      for(j=++i,i=0;gram[j]!='\0';j++,i++)
            part2[i]=gram[j];
       part2[i]='\0';
       for(i=0;i<strlen(part1)||i<strlen(part2);i++)
      {
            if(part1[i]==part2[i])
            {
                 modifiedGram[k]=part1[i];
                 k++;
                 pos=i+1;
            }
       }
       for(i=pos,j=0;part1[i]!='\0';i++,j++){
            newGram[j]=part1[i];
       }
      newGram[j++]='|';
       for(i=pos;part2[i]!='\0';i++,j++){
           newGram[j]=part2[i];
       }
       modifiedGram[k]='X';
       modifiedGram[++k]='\0';
      newGram[j]='\0';
      printf("\n A->%s",modifiedGram);
       printf("\n X->%s\n",newGram);

       }
       cout<<endl;
       }
}
