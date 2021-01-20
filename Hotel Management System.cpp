#include<bits/stdc++.h>
 
using namespace std;
struct node
{
    int room;
    struct node *next;
};
 
struct node *head1=NULL,*head2=NULL,*head3=NULL,*temp,*s,*s1,*s2,*cur,*pre;
 
void dis_deluxe()
{
    temp=head1;
    if(head1==NULL)
    {
        cout<<"You haven't booked any deluxe room yet "<<endl;
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<"your booked deluxe room no is : ";
            cout<<temp->room<<"."<<endl;
            temp=temp->next;
        }
    }
}
 
void dis_atrium()
{
    temp=head2;
    if(head2==NULL)
    {
        cout<<"You haven't booked any atrium room yet "<<endl;
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<"your booked atrium room no is : ";
            cout<<temp->room<<"."<<endl;
            temp=temp->next;
        }
    }
}
 
void dis_business()
{
    temp=head3;
    if(head3==NULL)
    {
        cout<<"You haven't booked any business room yet "<<endl;
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<"your booked business room no is : ";
            cout<<temp->room<<"."<<endl;
            temp=temp->next;
        }
    }
}
 
int main()
{
    cout<<"                                         WELCOME TO HOTEL RADISSON BLU                                               "<<endl<<endl;
    cout<<"                                             **DETAILS OF OUR ROOM**"<<endl;
    cout<<"DELUXE ROOMS: "<<endl<<endl;
 
    cout<<"SERVICES FOR DELUXE ROOMS:  "<<endl;
    cout<<"Featuring one queen or two twin beds and three-piece bathrooms"<<endl;
    cout<<"Guests can put final touches on projects at the work desk, enjoy a drink from the minibar, and relax in the plush armchair"<<endl;
    cout<<"1. Electronic safe"<<endl;
    cout<<"2. Free Wi-Fi"<<endl;
    cout<<"3. Individual climate control"<<endl;
    cout<<"4. Minibar and room service (available 24 hours)"<<endl;
    cout<<"4. Phone with direct international dialing"<<endl<<endl<<endl;
 
    cout<<"ATRIUM ROOMS"<<endl<<endl;
 
    cout<<"Atrium Rooms offer one king or two double beds, elegant linens and comfortable armchairs"<<endl;
    cout<<"Free high-speed, wireless Internet so you can stay connected and productive"<<endl;
    cout<<"1. Electronic safe"<<endl;
    cout<<"2. Free Wi-Fi"<<endl;
    cout<<"3. Individual climate control"<<endl;
    cout<<"4. Minibar and room service (available 24 hours)"<<endl;
    cout<<"4. Phone with direct international dialing"<<endl<<endl<<endl;
 
 
    cout<<"BUSINESS CLASS ROOMS"<<endl<<endl;
 
    cout<<"Corporate travelers love our Business Class Rooms"<<endl;
 
    cout<<"1. Electronic safe"<<endl;
    cout<<"2. Free Wi-Fi"<<endl;
    cout<<"3. Individual climate control"<<endl;
    cout<<"4. Minibar and room service (available 24 hours)"<<endl;
    cout<<"4. Phone with direct international dialing"<<endl<<endl<<endl;
 
    cout<<"ADDITIONAL BUSINESS CLASS AMENITIES"<<endl;
    cout<<"Access to Business Class Lounge"<<endl;
    cout<<"Airport transfer"<<endl;
    cout<<"All-day refreshment in the Business Class Lounge"<<endl<<endl<<endl;
 
 
    int deluxe =100;
    int atrium =200;
    int  business =300;
 
 
    while(1)
    {
        cout<<"                                         For Booking DELUXE ROOMS **press 1 "<<endl;
        cout<<"                                         For Booking  ATRIUM ROOMS **press 2 "<<endl;
        cout<<"                                         For Booking BUSINESS CLASS ROOMS **press 3 "<<endl;
        cout<<"                                         For DELETING any reservation **press 4"<<endl;
        cout<<"                                         For watching your booked room **press 5"<<endl;
        cout<<"                                         For stopping the process **press 6"<<endl;
        int x;
        cin>>x;
        if(x==1)
        {
            deluxe++;
            struct node *newnode;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->room=deluxe;
 
            cout<<"Congratulations!!!"<<endl<<endl;
            cout<<"You have successfully booked deluxe room"<<endl;
            cout<<"Your room number "<<deluxe<<"."<<endl;
 
            newnode->next=NULL;
 
            if(head1==NULL)
            {
                head1=newnode;
                s=head1;
            }
            else
            {
                s->next=newnode;
                s=newnode;
            }
        }
        else if(x==2)
        {
            atrium++;
            struct node *newnode;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->room=atrium;
 
            cout<<"Congratulations!!!"<<endl<<endl;
            cout<<"You have successfully booked atrium room"<<endl;
            cout<<"Your room number "<<atrium<<"."<<endl;
 
            newnode->next=NULL;
            if(head2==NULL)
            {
                head2=newnode;
                s1=head2;
            }
            else
            {
                s1->next=newnode;
                s1=newnode;
            }
 
        }
        else if(x==3)
        {
            business++;
            struct node *newnode;
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->room=business;
 
            cout<<"Congratulations!!!"<<endl<<endl;
            cout<<"You have successfully booked business class room"<<endl;
            cout<<"Your room number "<<business<<"."<<endl;
 
 
            newnode->next=NULL;
            if(head3==NULL)
            {
                head3=newnode;
                s2=head3;
            }
            else
            {
                s2->next=newnode;
                s2=newnode;
            }
 
        }
        else if(x==4)
        {
            cout<<"Which Room reservation you want to delete"<<endl<<endl;
 
            cout<<"      For deleting reservation of DELUXE ROOMS **press 1 "<<endl;
            cout<<"      For deleting reservation of  ATRIUM ROOMS **press 2 "<<endl;
            cout<<"      For deleting reservation of BUSINESS CLASS ROOMS **press 3 "<<endl;
 
            int y;
            cin>>y;
 
            if(y==1)
            {
                if(head1==NULL)
                {
                    cout<<"sorry you have not any reservation"<<endl<<endl;
                }
                else
                {
                    pre=head1;
                    head1=head1->next;
 
                    cout<<"Thank you!!!"<<endl<<endl;
                    cout<<"Your resevation of deluxe room no "<<pre->room<<" was cancelled"<<endl;
 
                    delete(pre);
                }
            }
            else if(y==2)
            {
                if(head2==NULL)
                {
                    cout<<"sorry you have not any reservation"<<endl<<endl;
                }
                else
                {
                    pre=head2;
                    head2=head2->next;
 
                    cout<<"Thank you!!!"<<endl<<endl;
                    cout<<"Your resevation of atrium room no "<<pre->room<<" was cancelled"<<endl;
 
                    delete(pre);
                }
            }
            else if(y==3)
            {
                if(head3==NULL)
                {
                    cout<<"sorry you have not any reservation"<<endl<<endl;
                }
                else
                {
                    pre=head3;
                    head3=head3->next;
 
                    cout<<"Thank you!!!"<<endl<<endl;
                    cout<<"Your resevation of business class room no "<<pre->room<<" was cancelled"<<endl;
 
                    delete(pre);
                }
            }
        }
        else if(x==5)
        {
            cout<<"Here is the details of your booked list "<<endl<<endl;
 
            dis_deluxe();
            dis_atrium();
            dis_business();
            cout<<endl;
        }
        else if(x==6)
        {
            break;
        }
    }
 
    return 0;
}
