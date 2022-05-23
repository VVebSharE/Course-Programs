#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;//denotes number of words in a sentence
};

struct paragraph {
    struct sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
};

struct document {
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
};


struct document get_document(char* text) {
int m=1;
for(int i=0;text[i]!='\0';i++)
{
   if(text[i]=='\n')
   m++; 
}
struct document d;
d.paragraph_count=m;
d.data=(struct paragraph*)calloc(m,sizeof(struct paragraph));


m=0;
int s=0;
for(int i=0;text[i]!='\0';i++)
{
    if(text[i]=='.')
    s++;
    if(text[i]=='\n' || text[i+1]=='\0')
    {
        d.data[m].data=(struct sentence*)calloc(s,sizeof(struct sentence));
        d.data[m].sentence_count=s;
        s=0;
        m++;

    }
}


m=0;
s=0;
int w=0;
for(int i=0;text[i]!='\0';i++)
{
    if(text[i]=='\n')
    {
        m++;
        s=0;
    }
    if(text[i]==' ')
    w++;
    if(text[i]=='.')
    {
        w++;
        d.data[m].data[s].data=(struct word*)calloc(w,sizeof(struct word));
        d.data[m].data[s].word_count=w;
        w=0;
        s++;
    }
}

m=0;
s=0;
w=0;

int c=0;
d.data[m].data[s].data[w].data=(char*)calloc(50,sizeof(char));
for(int i=0;text[i]!='\0';i++)
{
    if(text[i]==' ')
    {
        d.data[m].data[s].data[w].data[c]='\0';
        
        c=0;
        w++;
        d.data[m].data[s].data[w].data=(char*)calloc(50,sizeof(char));
    }

    if(text[i]=='.')
    {
        d.data[m].data[s].data[w].data[c]='\0';
        c=0;
        w++;
        
        d.data[m].data[s].data[w].data=(char*)calloc(50,sizeof(char));
        w=0;
        s++;
    }

    if(text[i]=='\n')
    {
        m++;
        w=0;
        s=0;
        c=0;
        if(m<d.paragraph_count)
        if(s<d.data[m].sentence_count)
        if(w<d.data[m].data[s].word_count)
        d.data[m].data[s].data[w].data=(char*)calloc(50,sizeof(char));
    }

    if(text[i]>='a' && text[i]<='z')
    {   if(m<d.paragraph_count)
        if(s<d.data[m].sentence_count)
        if(w<d.data[m].data[s].word_count)
        d.data[m].data[s].data[w].data[c]=text[i];
        c++;
    }
    
}


return d;
}