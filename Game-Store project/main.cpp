#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;

class User_Information {
    public :
        string user_name;
        int user_password;
        User_Information() {}
        User_Information(string name, int password) {
            this->user_name = name;
            this->user_password = password;
        } 
        friend void Display_Details();
};
class Game_Library {
    public :

    virtual void get_Info()=0;
        string game_Name_Library;
        Game_Library() {}
        string display_Available_Games() {
            int n;
            cout << "Select Your Game : " << endl;
            cout <<"-----------------------" << endl;
            cout << "1. Minecraft" << endl;
            cout << "2. Apex Legends" << endl;
            cout << "3. Valorant" << endl;
            cout << "4. The Last of Us Part II" << endl;
            cout << "5. Cyberpunk 2077" << endl;
            cout << "Enter your choice : ";
            cin >> n;
            switch(n) {
                case 1 : 
                    game_Name_Library = "Minecraft";
                    break;
                case 2 :
                    game_Name_Library = "Apex Legends";
                    break;
                case 3 :
                    game_Name_Library = "Valorant";
                    break;
                case 4 :
                    game_Name_Library = "The Last of Us Part II";
                    break;
                case 5 : 
                    game_Name_Library = "Cyberpunk 2077";
                    break;
            }
            return game_Name_Library;
        }
};

class Game_Requirements : public Game_Library{
    public :
        void get_Info() {
            string game_Name_specification = display_Available_Games();
            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "Your seleceted Game --- " << game_Name_specification << " --- Requirements are : " << endl;
            if(game_Name_specification == "Minecraft") {
                cout << "----------------------------------------------" << endl;
                cout << "CPU: Intel Core i3 3210 | AMD A8 7600 APU or equivalent " << endl; 
                cout << "RAM: 4 GB RAM" << endl;
                cout << "HDD: At least 1GB for game core, maps and other files" << endl;
                cout << "GPU: Intel HD Graphics 4000 or AMD Radeon R5 series | NVIDIA GeForce 400 Series or AMD Radeon HD 7000 series" << endl;
                cout << "OS: 64-bit Windows 7 or later" << endl;
                cout << "Screen Resolution: 1024 x 768 or better" << endl;
                cout << "Network: Broadband Internet connection<<endl" << endl;
                cout << "----------------------------------------------" << endl;
            } else if(game_Name_specification == "Apex Legends") {
                cout << "----------------------------------------------" << endl;
                cout << "OS: 64-bit Windows 10." << endl;
                cout << "CPU: Intel Core i3-6300 3.8GHz / AMD FX-4350 4.2 GHz Quad-Core Processor." << endl;
                cout << "RAM: 6GB." << endl;
                cout << "GPU: NVIDIA GeForce GT 640 / Radeon HD 7730." << endl;
                cout << "GPU RAM: 1 GB." <<endl;
                cout << "HARD DRIVE: Minimum 22 GB of free space." << endl;
                cout << "----------------------------------------------" << endl;
            } else if(game_Name_specification == "Valorant") {
                cout << "----------------------------------------------" << endl;
                cout << "CPU: Core i3-4150 / Ryzen 3 1200"<< endl;
                cout << "RAM: 4 GB"<< endl;
                cout << "VIDEO CARD: GeForce GT 730 / Radeon R7 240"<< endl;
                cout << "DEDICATED VIDEO RAM: 1024 MB"<< endl;
                cout << "PIXEL SHADER: 5.0"<< endl;
                cout << "VERTEX SHADER: 5.0"<< endl;
                cout << "OS: Windows 7/8/10 64-bit."<< endl;
                cout << "----------------------------------------------" << endl;
            }
            else if(game_Name_specification == "The Last of Us Part II") {
                cout << "----------------------------------------------" << endl;
                cout << "CPU: Intel Core i5-2400 or AMD FX-6300"<<endl; 
                cout << "GPU: Nvidia GeForce GTX 970 or AMD Radeon R9 390"<<endl; 
                cout << "RAM: 16 GB"<<endl;
                cout << "Storage: 50 GB available space"<<endl;
                cout << "----------------------------------------------" << endl;
            } else if(game_Name_specification == "Cyberpunk 2077") {
                cout << "----------------------------------------------" << endl;
                cout << "Operating System: Windows 10 (64-bit)" << endl;
                cout << "Processor: Intel Core i5-2400 or AMD FX-6300" << endl;
                cout << "Memory: 8 GB RAM" << endl;
                cout << "Graphics: NVIDIA GeForce GTX 960 or AMD Radeon R9 390" << endl;
                cout << "Storage: 70 GB available space" << endl;
                cout << "----------------------------------------------" << endl;
            }
        }
};

class Game_Category {
public :
    string game_name;
    float game_price;

    Game_Category() {
        this->game_name = "";
        this->game_price = 0.00;
    }
    void game_Category(void) {
        int choice, choice1;
        cout << "Choose a category : " << endl;
        cout << "----------------------------------------------" << endl;
        cout << "1. Free" << endl;
        cout << "2. Early Access" <<endl;
        cout << "3. Action & Rhythm" <<endl;
        cout << "4. Adventure" <<endl;
        cout << "5. Simulation" <<endl;
        cout << "6. Sports & Racing" <<endl;
        cout << "----------------------------------------------" << endl;
        cout << "Enter Your choice : ";
        cin >> choice;
        switch(choice) {
            case 1 :
            cout << "Select a game to buy : " << endl;
            cout << "----------------------------------------------" << endl;
                cout << "1. Counter Strike Global Offensive" << endl;
                cout << "2. Valorant" << endl;
                cout << "3. Fall Guys" << endl;
                cout << "4. Leauge Of Legends" << endl;
                cout << "5. Overwatch" << endl;
                cout << "----------------------------------------------" << endl;
                cout << "Enter your choice : ";
                cin >> choice1;
                switch (choice1)
                    {
                    case 1:
                        this->game_name = "Counter Strike Global Offensive";
                        this->game_price = 0.00;
                        break;
                    
                    case 2:
                        this->game_name = "Valorant";
                        this->game_price = 0.00;
                        break;
                    case 3:
                        this->game_name = "Fall Guys";
                        this->game_price = 0.00;
                        break;
                    case 4:
                        this->game_name = "Leauge Of Legends";
                        this->game_price = 0.00;
                        break;
                    case 5:
                        this->game_name = "Overwatch";
                        this->game_price = 0.00;
                        break;
                    }
                break;
            case 2 :
                cout << "Select a game to buy : " << endl;
                cout << "----------------------------------------------" << endl;
                cout << "1. BattleBitz Remastered" << endl;
                cout << "2. CS 2" << endl;
                cout << "3. Escape the backrooms" << endl;
                cout << "4. War Havens" << endl;
                cout << "5. Ready or Not" << endl;
                cout << "----------------------------------------------" << endl;
                cout << "Enter your choice : ";
                cin >> choice1;
                    switch (choice1)
                    {
                    case 1:
                        this->game_name = "BattleBitz Remastered";
                        this->game_price = (float)(rand()) / (float)(rand()) + 30.00;
                        break;
                    
                    case 2:
                        this->game_name = "CS 2";
                        this->game_price = (float)(rand()) / (float)(rand()) + 20.00;
                        break;
                    case 3:
                        this->game_name = "Escape the backrooms";
                        this->game_price = (float)(rand()) / (float)(rand()) + 10.00;
                        break;
                    case 4:
                        this->game_name = "War Havens";
                        this->game_price = (float)(rand()) / (float)(rand()) + 15.00;
                        break;
                    case 5:
                        this->game_name = "Ready or Not";
                        this->game_price = (float)(rand()) / (float)(rand()) + 18.00;
                        break;
                    }
                break;
            case 3 :
                cout << "Select a game to buy : " << endl;
                cout << "----------------------------------------------" << endl;
                cout << "1. Call of Duty Modern Warfare" << endl;
                cout << "2. Rainbow Six Seige" << endl;
                cout << "3. Mortal Combat 11" << endl;
                cout << "4. Tekken 7" << endl;
                cout << "5. Street Fighter 6" << endl;
                cout << "----------------------------------------------" << endl;
                cout << "Enter your choice : ";
                cin >> choice1;
                    switch (choice1)
                    {
                    case 1:
                        this->game_name = "Call of Duty Modern Warfare";
                        this->game_price = (float)(rand()) / (float)(rand()) + 12.00;
                        break;
                    
                    case 2:
                        this->game_name = "Rainbow Six Seige";
                        this->game_price = (float)(rand()) / (float)(rand()) + 3.00;
                        break;
                    case 3:
                        this->game_name = "Mortal Combat 11";
                        this->game_price = (float)(rand()) / (float)(rand()) + 20.00;
                        break;
                    case 4:
                        this->game_name = "Tekken 7";
                        this->game_price = (float)(rand()) / (float)(rand()) + 10.00;
                        break;
                    case 5:
                        this->game_name = "Street Fighter 6";
                        this->game_price = (float)(rand()) / (float)(rand()) + 14.00;
                        break;
                    }
                break;
            case 4 :
                cout << "Select a game to buy : " << endl;
                cout << "----------------------------------------------" << endl;
                cout << "1. Fallout : New Vegas" << endl;
                cout << "2. The Witcher 3 : wild Hunt" << endl;
                cout << "3. Remnant II" << endl;
                cout << "4. The Elder Scrolls" << endl;
                cout << "5. Dave The Driver" << endl;
                cout << "----------------------------------------------" << endl;
                cout << "Enter your choice : ";
                cin >> choice1;
                    switch (choice1)
                    {
                    case 1:
                        this->game_name = "Fallout : New Vegas";
                        this->game_price = (float)(rand()) / (float)(rand()) + 11.00;
                        break;
                    
                    case 2:
                        this->game_name = "The Witcher 3 : wild Hunt";
                        this->game_price = (float)(rand()) / (float)(rand()) + 15.00;
                        break;
                    case 3:
                        this->game_name = "Remnant II";
                        this->game_price = (float)(rand()) / (float)(rand()) + 17.00;
                        break;
                    case 4:
                        this->game_name = "The Elder Scrolls";
                        this->game_price = (float)(rand()) / (float)(rand()) + 18.00;
                        break;
                    case 5:
                        this->game_name = "Dave The Driver";
                        this->game_price = (float)(rand()) / (float)(rand()) + 21.00;
                        break;
                    }
                break;
            case 5 :
                cout << "Select a game to buy : " << endl;
                cout << "----------------------------------------------" << endl;
                cout << "1. Conus Exiles" << endl;
                cout << "2. Terraria" << endl;
                cout << "3. Rust" << endl;
                cout << "4. Stardew Valley" << endl;
                cout << "5. Factorio" << endl;
                cout << "----------------------------------------------" << endl;
                cout << "Enter your choice : ";
                cin >> choice1;
                    switch (choice1)
                    {
                    case 1:
                        this->game_name = "Conus Exiles";
                        this->game_price = (float)(rand()) / (float)(rand()) + 14.00;
                        break;
                    
                    case 2:
                        this->game_name = "Terraria";
                        this->game_price = (float)(rand()) / (float)(rand()) + 23.00;
                        break;
                    case 3:
                        this->game_name = "Rust";
                        this->game_price = (float)(rand()) / (float)(rand()) + 22.00;
                        break;
                    case 4:
                        this->game_name = "Stardew Valley";
                        this->game_price = (float)(rand()) / (float)(rand()) + 3.00;
                        break;
                    case 5:
                        this->game_name = "Factorio";
                        this->game_price = (float)(rand()) / (float)(rand()) + 19.00;
                        break;
                    }
                break;
            case 6 :
                cout << "Select a game to buy : " << endl;
                cout << "----------------------------------------------" << endl;
                cout << "1. Fifa 24" << endl;
                cout << "2. NBA 2K23" << endl;
                cout << "3. Forza Horaizon 6" << endl;
                cout << "4. Golf it" << endl;
                cout << "5. Nock" << endl;
                cout << "----------------------------------------------" << endl;
                cout << "Enter your choice : ";
                cin >> choice1;
                    switch (choice1)
                    {
                    case 1:
                        this->game_name = "Fifa 24";
                        this->game_price = (float)(rand()) / (float)(rand()) + 45.00;
                        break;
                    
                    case 2:
                        this->game_name = "NBA 2K23";
                        this->game_price = (float)(rand()) / (float)(rand()) + 36.00;
                        break;
                    case 3:
                        this->game_name = "Forza Horaizon 6";
                        this->game_price = (float)(rand()) / (float)(rand()) + 39.00;
                        break;
                    case 4:
                        this->game_name = "Golf it";
                        this->game_price = (float)(rand()) / (float)(rand()) + 21.00;
                        break;
                    case 5:
                        this->game_name = "Nock";
                        this->game_price = (float)(rand()) / (float)(rand()) + 28.00;
                        break;
                    }
                break;
        }
    }    
    friend void Display_Details();
};

class Game_Price : public Game_Category{
    public :
        void Get_Price_of_Selected_Game(Game_Category &s) {
            cout << "Your Selected Game --- " << s.game_name << " --- Has a price of $" << s.game_price;
        }
};



User_Information ui;
Game_Requirements gr;
Game_Category gc;
Game_Price gp;
string u_name;
int u_pass;

void Display_Details() {
        ofstream myFile("Output.txt");
        cout << "User Name : " << ui.user_name << endl;
        myFile << "Name : " << ui.user_name << endl;
        cout << "Your Choosen Game : " << gc.game_name << endl;
        myFile << "Game : " << gc.game_name << endl;
        cout << "Price of the Game : $" << gc.game_price << endl;
        myFile << "Price : $" << gc.game_price << endl;
    }

void Option_Menu() {
    int choice = 0;
    char ch;
    cout << "\t\t\t----------------------------------------------" << endl;
    cout << "\t\t\t\t\t---- MainMenu ----" << endl;
    cout << endl;
    cout << "\t\t\t1. SignUp to new Account." << endl;
    cout << "\t\t\t2. Game Library & It's Requirements." << endl;
    cout << "\t\t\t3. Select game from different categories to buy." <<endl;
    cout << "\t\t\t4. Price of selected Game."<<endl;
    cout << "\t\t\t5. Display choices." << endl;
    cout << "\t\t\t6. Quit." << endl;
    cout << "\t\t\t----------------------------------------------" << endl;
    cout << endl;
    cout << "Enter Your Choice : ";
    cin >> choice;
    fflush(stdin);
    switch(choice) {
        case 1 :
            cout << "Enter User Name : ";
            getline(cin, u_name);
            fflush(stdin);
            cout << "Enter User Password : ";
            cin >> u_pass;
            ui = User_Information(u_name, u_pass);
            fflush(stdin);
            cout << "Enter any key to continue : ";
            ch = getchar();
            if(ch) {
                Option_Menu();
            }
            break;
        
        case 2 :
            gr.get_Info();
            fflush(stdin);
            cout << "Enter any key to continue : ";
            ch = getchar();
            if(ch) {
                Option_Menu();
            }
            break;
        
        case 3 :
            gc.game_Category();
            fflush(stdin);
            cout << "Enter any key to continue : ";
            ch = getchar();
            if(ch) {
                Option_Menu();
            }
            break;

        case 4 :
            gp.Get_Price_of_Selected_Game(gc);
            fflush(stdin);
            cout << endl;
            cout << "Enter any key to continue : ";
            ch = getchar();
            if(ch) {
                Option_Menu();
            }
            break;
        
        case 5 :
            Display_Details();
            cout << endl;
            cout << "Enter any key to continue : ";
            ch = getchar();
            if(ch) {
                Option_Menu();
            }
            
            break;

        case 6 :
            cout << "Thank you for using our service." << endl;
            cout << "GG noobs";
            break;
    }

}


int main() {
    Option_Menu();


    return 0;
}