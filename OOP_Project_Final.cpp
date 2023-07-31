#include <iostream>
#include <string>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;


static int rental_index=0;
static int num = 4;
static int delete_index=0;
static int num1=3;

class cars
{
    public:
        string make[10];
        string model[10];
        int price[10];
        int year[10];
        int count[10];
        int cno[10];
        int i,j;
        int modifynum;
        int deletecar1[10];
        int deletecarno;
    
        cars()
        {
            make[0] = "Honda";
            make[1] = "Maruti";
            make[2] = "Toyota";
            make[3] = "Tata";
            model[0] = "City";
            model[1] = "Celerio";
            model[2] = "Glanza";
            model[3] = "Nexon";
            price[0] = 2000;
            price[1] = 1000;
            price[2] = 1750;
            price[3] = 1600;
            year[0] = 2022;
            year[1] = 2020;
            year[2] = 2023;
            year[3] = 2021;
            count[0] = 1;
            count[1] = 3;
            count[2] = 5;
            count[3] = 2;
            cno[0] = 1;
            cno[1] = 2;
            cno[2] = 3;
            cno[3] = 4;
        }
    
        void displaycars()
        {
            cout << "\n__________AVAILABLE CARS_____________\n";
    
            for (int i = 0; i < num; i++)
            {
                bool deleted = false;
                for(int j=0; j<delete_index; j++)
                {
                    if(deletecar1[j]==cno[i])
                    {
                        deleted = true;
                        break;
                    }
                }
                if (!deleted) {
                    cout << "\n\n";
                    cout << "car: " << cno[i] << endl;
                    cout << "Make: " << make[i] << endl;
                    cout << "Model: " << model[i] << endl;
                    cout << "Price: " << price[i] << "/-" << endl;
                    cout << "Year: " << year[i] << endl;
                    cout << "Count remaining: " << count[i] << endl;
                }
            }
        }
    
        void addcar()
        {
            string make1, model1;
            int price1, year1, count1;
    
            cout << "\nEnter the Make: ";
            cin >> make1;
            cout << "\nEnter the Model: ";
            cin >> model1;
            cout << "\nEnter the Price: ";
            cin >> price1;
            cout << "\nEnter the Year: ";
            cin >> year1;
            cout << "\nEnter the Count: ";
            cin >> count1;
    
    
            make[num] = make1;
            model[num] = model1;
            price[num] = price1;
            year[num] = year1;
            count[num] = count1;
            cno[num] = num+1;
            num++;
            cout << "\n-----Car Added Successfully-----\n ";

        }
    
        void modifycar()
        {
            int modifynum;
            cout << "\nEnter the cno of car to modify :  " << endl;
            cin >> modifynum;
            modifynum--;
            cout << "\nEnter the Make :";
            cin >> make[modifynum];
            cout << "\nEnter the Model :";
            cin >> model[modifynum];
            cout << "\nEnter the Price :";
            cin >> price[modifynum];
            cout << "\nEnter the Year :";
            cin >> year[modifynum];
            cout << "\nEnter the Count :";
            cin >> count[modifynum];
            cout << "\n-----Car details Modified Successfully----- \n";
        }


        
        
        
        void deletecar()
        {
            cout<<"Enter the Car no to be deleted: ";
            cin>>deletecarno;
            deletecar1[delete_index]=deletecarno;
            delete_index++;
            cout << "\n-----Car Deleted Successfully----- \n";
            
        }
        
        
        
        
    
    
};



class person
{
    public:
        string name[10];
        string address[10];
        string phno[10];
        string email[10];
        string password[10];
        int pid[10];

        person()
        {
            name[0]="Amal";
            address[0]="Rset";
            phno[0]="8129967876";
            email[0]="amal@gmail.com";
            name[1]="Alwin";
            address[1]="Rset";
            phno[1]="9878657565";
            email[1]="alwin@gmail.com";
            name[2]="Aquiline";
            address[2]="Rset";
            phno[2]="9329967876";
            email[2]="aquiline@gmail.com";
            password[0]="amal";
            password[1]="alwin";
            password[2]="aquiline";
            pid[0]=0;
            pid[1]=1;
            pid[2]=2;
            
            
            
        }
        void signup()
        {
            cout<<"\nEnter Name,Address,Phone Number,Email id respectively :\n";
            cin>>name[num1]>>address[num1]>>phno[num1]>>email[num1];
            cout<<"\nSet a password";
            cin>>password[num1];
            cout<<"\nSign UP successfull";
            cout<<"\nYour user Id is "<<num1<<" and password is "<<password[num1]<<endl;
            cout<<"\n Please Sign in \n";
            num1++;
        }

        
        
    
};




class customer : public person,public cars
{
    public:
        customer()
        {
            
            
        }
        
        
    
};
class staff : public person,public cars
{
    public:
        staff()
        {
            
        }
};

class administrator : public person,public cars
{
    public:
        administrator()
        {
            
        }
};

void projectdetails()
{
    cout<<"-------------___________________________--------"<<endl;
    cout<<"-------------___________MEMBERS:________--------"<<endl;
    cout<<"-------------___________AMAL_THOMAS_____--------"<<endl;
    cout<<"-------------___________ALWIN_JOSEPH____--------"<<endl;
    cout<<"-------------___________AQUILINE________--------"<<endl;
    cout<<"-------------___________________________--------"<<endl;
}
void instructions()
{
    cout<<"-----------------------------IMPORTANT DETAILS----------------------"<<endl;
    cout<<"A USER WHO HAS ENTERED THEIR NAME,PHONENUMBER,ADDRESS WILL ONLY HAVE ACCESS TO ADMINISTRATOR / STAFF PORTAL."<<endl;
    cout<<"ONCE YOU HAVE ALREADY ENTERED THESE DETAILS, you can enter 'q' at the name field to continue."<<endl;
    cout<<"YOU CAN ENTER 'q' without entering any of your details. But you wont have access of ADMINISTRATOR / STAFF PORTAL"<<endl;
    cout<<"------------------------[You can provide any dummy text to gain access]-------------------------------------"<<endl;
}

int main()
{
    cars car_obj;
    person person_obj;
    customer customer_obj;
    staff staff_obj;
    administrator administrator_obj;
    
    projectdetails();
    
    
    int a,b,c,d,e,f,g,h,i,j,k,r,cnt;
    string x,y,z;
    int l=0;
    int customer_userid;
    string customer_password;
    int staff_userid;
    string staff_password;
    int administrator_userid;
    string administrator_password;
    
    
    int rentaldetails_carid[10];
    string rentaldetails_carmake[10];
    string rentaldetails_carmodel[10];
    int rentaldetails_caryear[10];
    string rentaldetails_personname[10];
    int rentaldetails_carcount[10];
    string rentaldetails_personphno[10];
    int rentaldetails_totalprice[10];
    
    
    string name, phoneNumber, address;
    instructions();
    ofstream outFile("data.txt", ios::app);

    if (!outFile) { 
        cerr << "Error: could not open file" << endl;
        return 1;
    }

    while (true) {
        cout<<"Please enter your name(or q to continue): ";
        
        getline(cin, name);

        if (name == "q") {
            break;
        }
        else{
            cnt++;
        }

        cout << "Enter phone number: ";
        getline(cin, phoneNumber);

        cout << "Enter address: ";
        getline(cin, address);

        outFile << name << "," << phoneNumber << "," << address << endl;
        cout << "\nData added to file.\n" << endl;
    }

    outFile.close();




    
    
    cout<<"\n--------------CAR RENTAL SYSTEM----------------\n"<<endl;
    while (1)
    {
        
        cout<<"\nChoose";
        cout<<"\n1.Customer\n2.Staff\n3.Administrator\n4.Print Details of everyone who used the code\n";
        cin>>a;
        switch (a)
        {
            case 1:
            {
                cout<<"\nYou have choosen customer portal\n";
                cout<<"\n1.Log In\n2.Sign Up \n";
                cin>>b;
                switch(b)
                {
                    case 1:
                    {
                        cout<<"\nEnter user id";
                        cin>>customer_userid;
                        cout<<"\nEnter password";
                        cin>>customer_password;
                        if(strcmp(customer_obj.password[customer_userid].c_str(), customer_password.c_str()) == 0)
                        {
                            cout<<"\n----Welcome to Customer Portal----\n";
                            cout<<"\n1.View Cars\n2.View Profile\n";
                            cin>>c;
                            switch (c)
                            {
                                case 1:
                                {
                                    administrator_obj.displaycars();
                                    cout<<"\n\n 1.Book Car \n2. Go back";
                                    cin>>d;
                                    switch (d)
                                    {
                                         case 1:
                                         {
                                            cout<<"\nEnter the Car ID you Want to book: ";
                                            cin>>e;
                                            e--;
                                            if( administrator_obj.count[e]<=0)
                                            {
                                                cout<<"\nNo car of the selected model available.\nPlease choose another car\n";
                                                break;
                                                
                                            }
                                            
                                            cout<<"\nEnter the number of days: ";
                                            cin>>f;
                                            cout<<"\n---------Checkout-----------\n";
                                            cout<<"Details of Booked Car :";
                                            cout<<"\nMAKE :"<<administrator_obj.make[e];
                                            cout<<"\nMODEL :"<<administrator_obj.model[e];
                                            cout<<"\nYEAR  :"<<administrator_obj.year[e];
                                            cout<<"\nID :"<<administrator_obj.cno[e];
                                            administrator_obj.count[e]--;
                                            cout<<"\nPrice per Day : "<<administrator_obj.price[e]<<endl;
                                            cout<<"\nTotal no of rental days :"<<f;
                                            cout<<"\nTotal payable price :"<<administrator_obj.price[e]*f;
                                            
                                            cout<<"Press 'n' to go back or any other key to continue \n";
                                            cin>>x;
                                            if(x=="n")
                                            {
                                                break;
                                            }
                                            cout<<"\nEnter credit card number: ";
                                            cin>>y;
                                            cout<<"\nEnter credit card pin:  ";
                                            cin>>z;
                                            
                                            cout<<"\n--------------CAR RENTED----------------\n\n\n\n";
                                            rentaldetails_carid[rental_index]=e;
                                            rentaldetails_carmodel[rental_index]=administrator_obj.model[e];
                                            rentaldetails_caryear[rental_index]=administrator_obj.year[e];
                                            rentaldetails_personname[rental_index]=administrator_obj.name[customer_userid];
                                            rentaldetails_carcount[rental_index]=administrator_obj.count[e];
                                            rentaldetails_personphno[rental_index]=administrator_obj.phno[customer_userid];
                                            rentaldetails_totalprice[rental_index]=administrator_obj.price[e]*f;
                                            rentaldetails_carmake[rental_index]=administrator_obj.make[e];
                                            rental_index++;
                                            break;
                                         }
                                         default:
                                         {
                                            break;
                                         }
                                    }
                                    break;
                                }
                                case 2:
                                {
                                    cout<<"---------------PROFILE--------------";
                                    cout<<"\nNAME : "<<customer_obj.name[customer_userid];
                                    cout<<"\nADDRESS : "<<customer_obj.address[customer_userid];
                                    cout<<"\nPHONE NUMBER : "<<customer_obj.phno[customer_userid];
                                    cout<<"\nEMAIL : "<<customer_obj.email[customer_userid];
                                    break;
                                }    
                                default:
                                {
                                    break;
                                }
                                    
                                    
                                    
                                    
                                
                            break;    
                            }
                            
                            
                        }
                        else{
                            cout<<"\nWRONG USERID / PASSWORD <<please try again>>\n";
                            exit(0);
                        }

                        break;    
                    }
                    case 2:
                    {
                        customer_obj.signup();
                        break;
                    }
                        
                }
                break;
            }
            case 2:
            {
                if(cnt>=1)
                {
                    cout<<"\n--------You Have Entered Staff Portal----\n";
                    cout<<"\n\nSTAFF ID : XX-XX";
                    cout<<"\nEnter Staff Password :**** ";
                    cout<<"\n--------------------STAFF PORTAL-------------------\n";
                    cout<<"\n1.View Cars\n2.View Rentals \n3. Generate Report";
                    cin>>i;
                    switch(i)
                    {
                        case 1:
                        {
                            administrator_obj.displaycars();
                            break;
                        }
                        case 2:
                        {
                            for(int j=0;j<rental_index;j++)
                            {
                                cout<<"\nRental \n"<<j+1;
                                cout<<"\nRental  Details :\n";
                                cout<<"\nMake : "<<rentaldetails_carmake[j] <<"    Model :"<< rentaldetails_carmodel[j] <<"    Rented Person :"<<  rentaldetails_personname[j] <<endl;
                            }
                            break;
                        }
                        case 3:
                        {
                            for(k=0;k<rental_index;k++)
                            {
                                l=l+rentaldetails_totalprice[k];
                            }
                            cout<<"\n-------------REPORT-------------\n";
                            cout<<"\n--Total Cars Rented = "<<rental_index;
                            cout<<"\n--Total Money Received =  "<<l;
                            cout<<"\n------------DETAILED REPORT------------------\n";
                            for(k=0;k<rental_index;k++)
                            {
                                cout<<"\n____________TRANSACTION :"<<k+1<<"_____________\n";
                                cout<<"\n--Person Name :"<<rentaldetails_personname[k]<<endl;
                                cout<<"\n--Person Phone Number :"<<rentaldetails_personphno[k]<<endl;
                                cout<<"\n--Car Id :"<<rentaldetails_carid[k]<<endl;
                                cout<<"\n--Car Make :"<<rentaldetails_carmake[k]<<endl;
                                cout<<"\n--Car Year :"<<rentaldetails_caryear[k]<<endl;
                                cout<<"\n--Total Transaction Price :"<<rentaldetails_totalprice[k]<<endl;
                                cout<<"\n--Car Remaining :"<<rentaldetails_carcount[k]<<endl;
                                
                            }
                            break;
            
                        }
                        default:
                        {
                            break;
                        }
                    }
                    break;
                } 
                else{
                    cout<<"\nYou Havent't provided the valid details. Enter name,ph no and address at beginning and try again!\n";
                    exit(0);
                }
                break;
                
            }
            case 3:
            {
                if(cnt>=1)
                {
                    cout<<"\n------Login Successfull-----------\n";
                    cout<<"\n---------------ADMINISTRATOR PORTAL---------------\n";
                    cout<<"\n1.Add Car\n2.Delete Car\n3.Generate Report\n4.View Rentals\n5.Modify Car\n6.Display cars\n7.Exit";
                    cin>>r;
                    switch(r)
                    {
                        case 1:
                        {
                            administrator_obj.addcar();
                            administrator_obj.displaycars();
                            break;
    
                        }
                        case 2:
                        {
                            administrator_obj.deletecar();
                            administrator_obj.displaycars();
                            break;
                            
                        }
                        case 3:
                        {
                            cout<<"\n-------------REPORT-------------\n";
                            cout<<"\n--Total Cars Rented = "<<rental_index;
                            for(k=0;k<rental_index;k++)
                            {
                                l=l+rentaldetails_totalprice[k];
                            }
                            cout<<"\n--Total Money Received =  "<<l;
                            cout<<"\n------------DETAILED REPORT------------------\n";
                            for(k=0;k<rental_index;k++)
                            {
                                cout<<"\n____________TRANSACTION :"<<k+1<<"_____________\n";
                                cout<<"\n--Person Name :"<<rentaldetails_personname[k]<<endl;
                                cout<<"\n--Person Phone Number :"<<rentaldetails_personphno[k]<<endl;
                                cout<<"\n--Renatl ID  :"<<rentaldetails_carid[k]<<endl;
                                cout<<"\n--Car Make :"<<rentaldetails_carmake[k]<<endl;
                                cout<<"\n--Car Year :"<<rentaldetails_caryear[k]<<endl;
                                cout<<"\n--Total Transaction Price :"<<rentaldetails_totalprice[k]<<endl;
                                cout<<"\n--Car Remaining :"<<rentaldetails_carcount[k]<<endl;
                                
                            }
                            break;
                        }
                        case 4:
                        {
                            for(int j=0;j<rental_index;j++)
                            {
                                cout<<"\nRental \n"<<j+1;
                                cout<<"\nRental  Details :\n";
                                cout<<"\nMake : "<<rentaldetails_carmake[j] <<"    Model :"<< rentaldetails_carmodel[j] <<"    Rented Person :"<<  rentaldetails_personname[j] <<endl;
                                
                            }
                            break;
                        }
                        case 5:
                        {
                            administrator_obj.modifycar();
                            administrator_obj.displaycars();
                            break;
                        }
                        case 6:
                        {
                            administrator_obj.displaycars();
                        }
                        case 7:
                        {
                            break;
                        }
                        default :
                        {
                            break;
                        }
                    break;
                
                
                    }
                    
                }
                else{
                    cout<<"\nYou Havent't provided the valid details. Enter name,ph no and address at beginning and try again!\n";
                    exit(0);
                }
                break;
                    
            }
            case 4:
            {
                    ifstream inFile("data.txt");

                    if (!inFile) { 
                        cerr << "\nError: could not open file\n" << endl;
                        return 1;
                    }
                
                    cout << "All details:" << endl;
                
                    while (getline(inFile, name, ',')) {
                        getline(inFile, phoneNumber, ',');
                        getline(inFile, address);
                
                        cout << "Name: " << name << endl;
                        cout << "Phone number: " << phoneNumber << endl;
                        cout << "Address: " << address << endl;
                        cout << endl;
                    }
                
                    inFile.close();
                
                    break;
            }
            default:
            {
                cout<<"\nInvalid Option!\nPlease try again\n\n\n\n";
                exit (0);
            }
            
        }
    }
}

       
