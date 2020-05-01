#include<iostream>
#include"flavours.h"
using namespace std;

class order{
    private:
        double bill;
        bool gluten[3];
        //string FLAVOURS[7];
        int counter[7];
        int COUNTER[2];
        int PAIR[7];
        double small=200,medium=400,large=600;
        public:
            string FLAVOURS[7];
            string CRUSTS[2];
    public:
        order()
        {   bill=0;
            //tikka obj1; fajita obj2;
            FLAVOURS[0]="tikka";FLAVOURS[1]="fajita";FLAVOURS[2]="chilli delight";FLAVOURS[3]="bbq_buzz";FLAVOURS[4]="seek kebab";FLAVOURS[5]="The cheese";FLAVOURS[6]="Veggie Delight";
            gluten[0]=tikka::get_gluten();gluten[1]=fajita::get_gluten();gluten[2]=chilli_delight::get_gluten();gluten[3]=bbq_buzz::get_gluten();gluten[4]=seekh_kebab::get_gluten();gluten[5]=The_cheese::get_gluten();gluten[6]=veggie_delight::get_gluten();
            int i;
            for(i=0;i<7;i++)
            {
                counter[i]=0;
            }
            for(i=0;i<7;i++)
            {
                PAIR[i]=0;
            }
            for(i=0;i<2;i++)
            {
                COUNTER[i]=0;
            }
            CRUSTS[0]="tatti";CRUSTS[1]="ALI";
        }
        void check_gluten()
        {
            cout<<"The following flavours are gluten free :"<<endl;
            int i;
            for(i=0;i<7;i++)
            {
                if(gluten[i]==false)
                {
                    cout<<FLAVOURS[i]<<endl;
                }
            }
        }
        void take_order()
        {
            int z,j,choice1,choice2,i=0;
            for(j=0;choice1!=69;j++)
            {
                //fflush(stdin);
                cout<<"Enter the button corresponding to the flavour"<<endl;
                cin>>choice1;
                if(choice1==1)
                {
                    flavours *ptr;
                    ptr= new tikka;
                    counter[0]++;
                    bill=bill+ptr->get_price();
                }
                else if(choice1==2)
                {
                    flavours *ptr;
                    ptr= new fajita;
                    counter[1]++;
                    bill=bill+ptr->get_price();
                }
                else if(choice1==3)
                {
                    flavours *ptr;
                    ptr= new chilli_delight;
                    counter[2]++;
                    bill=bill+ptr->get_price();
                }
                else if(choice1==4)
                {
                    flavours *ptr;
                    ptr= new bbq_buzz;
                    counter[3]++;
                    bill=bill+ptr->get_price();
                }
                else if(choice1==5)
                {
                    flavours *ptr;
                    ptr= new seekh_kebab;
                    counter[4]++;
                    bill=bill+ptr->get_price();
                }
                else if(choice1==6)
                {
                    flavours *ptr;
                    ptr= new The_cheese;
                    counter[5]++;
                    bill=bill+ptr->get_price();
                }
                else if(choice1==7)
                {
                    flavours *ptr;
                    ptr= new veggie_delight;
                    counter[6]++;
                    bill=bill+ptr->get_price();
                }
                cout<<"Enter the button corresponding to the crust"<<endl;
                cin>>choice2;
                if(choice2==1)
                {
                    
                    tatti obj;
                    bill=bill+obj.get_price();
                    COUNTER[0]++;
                    //cout<<"ISTINA"<<choice1<<endl;
                    PAIR[i]=1;
                    i++;                    
                }
                else if(choice2==2)
                {
                    ali obj;
                    bill=bill+obj.get_price();
                    COUNTER[1]++;
                    PAIR[i]=2;
                    i++;                    
                }
            }
        }
        void disp_order()
        {
            cout<<"Dear customer you have ordered the following flavours"<<endl;
            int i,j=0,q;
            for(i=0;i<7;i++)
            {
                if(counter[i]!=0 )
                {
                    if(counter[i]>1)
                    {
                        for(q=0;q<counter[i];q++)
                        {
                            cout<<FLAVOURS[i]<<" with ";
                            if(PAIR[j]==1)
                                {
                                    cout<<"TATII"<<endl;
                                    j++;
                                }
                            else if(PAIR[j]==2)
                                {
                                    cout<<"ALIS MOM"<<endl;
                                    j++;
                                }
                        }
                    }    
                    else
                    {
                    cout<<counter[i]<<"x "<<FLAVOURS[i]<<" with ";
                    
                    if(PAIR[j]==1)
                    {
                        cout<<"TATII"<<endl;
                        j++;
                    }
                    else if(PAIR[j]==2)
                    {
                        cout<<"ALIS MOM"<<endl;
                        j++;
                    }
                    }
                }
            }
            cout<<"The total bill is = Rs "<<bill<<endl;
        }
};
int main()
{
    char choice; int z;
    order obj;
     for(z=0;z<7;z++)
            {
                cout<<obj.FLAVOURS[z]<<endl;
            }
    obj.take_order();
    obj.disp_order();

}