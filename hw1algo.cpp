#include <iostream>
#include <string>

using namespace std;

struct date
       {
       int day, month, year;
       };
struct car
       {
       long phone_number;
       int ID;
       char owner_name[20],owner_surname[20],model[20];
       struct date reg_date, ns_date; 
       }car_directory[100];
       
    int number_of_cars =-1;

void print_car();
void add_car();
void delete_car();
void update_car();
void search_car_id();
void search_owner_name();
void sort_car_id();
void sort_owner_name();

int main() {
	int x;
    bool isRunning = true;
	while(isRunning){
        cout << "Car Service Directory" << endl;
	cout << "1. Add a new car to directory" << endl;
	cout << "2. Delete a car from the directory" << endl;
	cout << "3. List available cars in the directory" << endl;
	cout << "4. Search a car by id" << endl;
	cout << "5. Search according to owner name" << endl;
	cout << "6. Update car information" << endl;
	cout << "7. Sort according to car id" << endl;
	cout << "8. Sort according to owner_name" << endl;
	cout << "9. Quit" << endl;
cin >> x;
switch (x)
	{
	case 1:
    add_car();
    break;
case 2:
    delete_car();
    break;
case 3:
    print_car();
    break;
case 4:
    search_car_id();
    break;
case 5:
    search_owner_name();
    break;
case 6:
	update_car();
	break;
case 7:
    sort_car_id();
    break;
case 8:
    sort_owner_name();
    break;
case 9:
    cout << "Quiting program." << endl;
    isRunning = false;
    break;
default:
    cout << "Invalid choice" << endl;
    break;
}
    }

return 0;

	

	
}
void print_car(){
   if(number_of_cars == -1) {
     cout<<"There are no cars. please add some"<<endl;
     return;  
   }
    
	for(int i =0;i<=number_of_cars;i++){
	    cout<<"this is car number "<<i+1<<endl;

	cout<<"id: " <<car_directory[i].ID<<endl;
	cout<<"Model: " <<car_directory[i].model<<endl;
	cout<<"Next service date : " <<car_directory[i].ns_date.day<<"/"<<car_directory[i].ns_date.month<<"/"<<car_directory[i].ns_date.year<<endl;
	cout<<"the owners name: " <<car_directory[i].owner_name<<endl;
	cout<<"the owners surname: " <<car_directory[i].owner_surname<<endl;
	cout<<"the registration date : " <<car_directory[i].reg_date.day<<"/"<<car_directory[i].reg_date.month<<"/"<<car_directory[i].reg_date.year<<endl;
	cout<<"the owners number: "<<car_directory[i].phone_number<<endl<<endl;
}
}

void add_car(){
	int i;
	i=number_of_cars + 1;

	cout << "Enter car ID: ";
	cin >> car_directory[i].ID;

	cout << "Enter owner's name: ";
	cin >> car_directory[i].owner_name;
	cout << "Enter owner's surname: ";
	cin >> car_directory[i].owner_surname;
	cout << "Enter car model: ";
	cin >> car_directory[i].model;
	cout << "Enter registration date day : ";
	cin>>car_directory[i].reg_date.day;
	cout << "Enter registration date month : ";
	cin>>car_directory[i].reg_date.month;
	cout << "Enter registration date year : ";
	cin>>car_directory[i].reg_date.year;
	cout<<"Enter the owners number :";
	cin>>car_directory[i].phone_number;
	cout << "Enter next service date day : ";
	cin>>car_directory[i].ns_date.day;
	cout << "Enter next service date month : ";
	cin>>car_directory[i].ns_date.month;
	cout << "Enter next service date year : ";
	cin>>car_directory[i].ns_date.year;
	cout << "Car has been added"<<endl<<endl;
	number_of_cars++;

}
void delete_car(){
	int car_id;
	cout << "Enter the ID of the car you wish to delete: ";
	cin >> car_id;
	for (int i = 0; i < number_of_cars;i++){
    if (car_directory[i].ID == car_id)
    {
        
        for (int j = i; j < number_of_cars - 1; j++)
        {
            car_directory[j] = car_directory[j + 1];
        }
        number_of_cars--;
        cout << "Car was deleted." << endl;
        return;
    }
	}
	cout << "Car not found." << endl;

}
void update_car(){
	int update;
	bool found = false;
	cout << "Enter car ID to update: ";
	cin >> update;
	for (int i = 0; i < number_of_cars; i++)
{
    if (car_directory[i].ID == update)
    {
        update = i;
      break;
    }
    else{
    found =false;
   
	}	
}
	cout << "Enter car ID: ";
	cin >> car_directory[update].ID;

	cout << "Enter owner's name: ";
	cin >> car_directory[update].owner_name;
	cout << "Enter owner's surname: ";
	cin >> car_directory[update].owner_surname;
	cout << "Enter car model: ";
	cin >> car_directory[update].model;
	cout << "Enter registration date day : ";
	cin>>car_directory[update].reg_date.day;
	cout << "Enter registration date month : ";
	cin>>car_directory[update].reg_date.month;
	cout << "Enter registration date year : ";
	cin>>car_directory[update].reg_date.year;
	cout<<"Enter the owners number :";
	cin>>car_directory[update].phone_number;
	cout << "Enter next service date day : ";
	cin>>car_directory[update].ns_date.day;
	cout << "Enter next service date month : ";
	cin>>car_directory[update].ns_date.month;
	cout << "Enter next service date year : ";
	cin>>car_directory[update].ns_date.year;
	
	cout<<"car has been updated"<<endl<<endl;

}
void search_car_id(){
	int search_id;
	cout << "Enter car ID to search for: ";
	cin >> search_id;
	for (int i = 0; i < number_of_cars; i++)
{
    if (car_directory[i].ID == search_id)
    {
        cout<<"id: " <<car_directory[i].ID<<endl;
	cout<<"Model: " <<car_directory[i].model<<endl;
	cout<<"Next service date : " <<car_directory[i].ns_date.day<<"/"<<car_directory[i].ns_date.month<<"/"<<car_directory[i].ns_date.year<<endl;
	cout<<"the owners name: " <<car_directory[i].owner_name<<endl;
	cout<<"the owners surname: " <<car_directory[i].owner_surname<<endl;
	cout<<"the registration date : " <<car_directory[i].reg_date.day<<"/"<<car_directory[i].reg_date.month<<"/"<<car_directory[i].reg_date.year<<endl;
	cout<<"the owners number: "<<car_directory[i].phone_number<<endl;
        return;
    }
}


cout << "Error: Car with ID " << search_id << " not found";
	
}
void search_owner_name(){
	string name_search;
cout << "Enter owner name to search for: ";
cin >> name_search;
for (int i = 0; i < number_of_cars; i++)
{
    if (car_directory[i].owner_name == name_search)
    {
    cout<<"id: " <<car_directory[i].ID<<endl;
	cout<<"Model: " <<car_directory[i].model<<endl;
	cout<<"Next service date : " <<car_directory[i].ns_date.day<<"/"<<car_directory[i].ns_date.month<<"/"<<car_directory[i].ns_date.year<<endl;
	cout<<"the owners name: " <<car_directory[i].owner_name<<endl;
	cout<<"the owners surname: " <<car_directory[i].owner_surname<<endl;
	cout<<"the registration date : " <<car_directory[i].reg_date.day<<"/"<<car_directory[i].reg_date.month<<"/"<<car_directory[i].reg_date.year<<endl;
	cout<<"the owners number: "<<car_directory[i].phone_number<<endl;
        return;
    }
}


cout << "Error: Car owner with name was" << name_search << " not found"<<endl<<endl;
}
void sort_owner_name(){
	for(int i = 0; i < number_of_cars ; i++)
{
for(int j = 0; j < number_of_cars - 1; j++)
{
if(car_directory[j].owner_name > car_directory[j+1].owner_name)
{
car temp = car_directory[j+1];
car_directory[j+1] = car_directory[j];
car_directory[j] = temp;
}

}
}
}
void sort_car_id(){


for(int i = 0; i < number_of_cars; i++)
{
for(int j = 0; j < number_of_cars - 1; j++)
{
if(car_directory[j].ID > car_directory[j+1].ID)
{
car temp = car_directory[j+1];
car_directory[j+1] = car_directory[j];
car_directory[j] = temp;
}
}
}
cout << "\nCar was Sorted Successfully"<<endl;
return;
}

