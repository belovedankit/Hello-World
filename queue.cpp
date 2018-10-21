#include <iostream>
#include<stdlib.h>
#define MAX 5
using namespace std;
int rear=-1 ;
int front=-1 ;
void insert();
void del();
int Q[MAX] ;


int main()
{
  int ch ;
  while(1)
  {
      cout<<"\n1.INSERT \n2.DELETE \n3.DISPLAY \n4.EXIT\n" ;
      cin>>ch ;
      switch(ch)
      {
          case 1 : if(rear==MAX-1)
                    {
                        cout<<"queue overflow\n" ;
                    }
                   else
                   {
                       if(rear==-1)
                    {
                        front=0 ;
                        insert();
                    }
                        else
                    {
                        insert();
                    }
                   }
                    break ;

          case 2 : if(front==MAX-1)
                    {
                        cout<<Q[front]<<" deleted\n"  ;
                        del();
                        rear=front=-1 ;
                    }
                    else
                    {
                        if(front==-1)
                      {
                        cout<<"queue underflow\n" ;
                      }
                        else
                      {
                        del();
                      }
                    }
                    break ;
          case 3 : if(rear==-1)
                        cout<<"empty queue\n" ;
                   else
                    {
                        cout<<"QUEUE IS:" ;
                        for(int i=front;i<=rear;i++)
                        cout<<Q[i];
                    }
                    break ;
         case 4 : exit(0) ;
        }
    }

 }
void insert()
{  int element ;
   cout<<"enter the element to be inserted\n" ;
   cin>>element ;
   rear=rear+1 ;
   Q[rear]=element ;
   cout<<element<<" inserted" ;
}
void del()
{
    cout<<Q[front]<<" deleted"  ;
    front=front+1 ;
}
