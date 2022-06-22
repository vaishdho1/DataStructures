#include<iostream>
#include<string.h>
using namespace std;
struct stud{char name[80];
            int marks[10];
};
char * getTopper(struct stud s[],int nstudents,int subjectindex)
{int topindex,top,i;
top=-1;
for(i=0;i<nstudents;i++)
{if(top<s[i].marks[subjectindex])
  {
  top=s[i].marks[subjectindex];
  topindex=i;
}
}
return s[topindex].name;

};
float getavg(struct stud s,int nsubjects)
{int j;
float sum=0;
for(j=0;j<nsubjects;j++)
sum+=s.marks[j];
return sum/nsubjects;
};
void setvalues(struct stud*s,const char*name,float marks[],int nsubjects)
{int j;
strcpy(s->name,name);
for(j=0;j<nsubjects;j++)
s->marks[j]=marks[j];
};
int main()
{struct stud students[100];
int nstudents,nsubjects;
int i,j;
char name[10];
float marks[100];
cin>>nstudents>>nsubjects;
for(i=0;i<nstudents;i++)
{cin>>name;
for(j=0;j<nsubjects;j++)
cin>>marks[j];
setvalues(&students[i],name,marks,nsubjects);
}
for(i=0;i<nstudents;i++)
cout<<"\n"<<getavg(students[i],nsubjects);
for(j=0;j<nsubjects;j++)
{if(j==nsubjects-1)
cout<<"\n"<<getTopper(students,nstudents,j);
else
cout<<"\n"<<getTopper(students,nstudents,j);
}
return 0;
}
