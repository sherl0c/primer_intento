//bibliotecas
    #include <iostream>
    #include <bits/stdc++.h>
    #include <utility>
    #include <map>
    using namespace std;


//inicio 
 int main() {
//seguridad
    string userts_t;
    string users = "Mariposa";
    cout << "Ingrese nombre de usuario: ";
    cin >> userts_t;
    if(userts_t == users){ // pertenece a seguridad
        string password = "morse._";
        cout << "Ingrese contraseña: ";
        string password_T;
        cin >> password_T;

        if(password == password_T){ //pertenece a seguridad

//base de datos

 
    int cant_datos; //pregunta al usuario 
    cout << "cuantos datos necesita? \n";
    cin >> cant_datos;
    for(int i = 1; i <= cant_datos; i++){

            string user;
            cout << "Bienvenido a la base de datos, ingrese clave: ";
            cin >> user; 
            map <string , string> passwords;
            map <string , string> :: iterator itr;       //clave , contraseña para la clave
                passwords.insert(pair <string , string> ("alpha" , "bx&21fY5A*5s"));                    
                passwords.insert(pair <string , string> ("bravo" , "2Y44@l2L4Wdr"));                 
                passwords.insert(pair <string , string> ("charlie" ,"eI#2s$oiI02H"));               
                passwords.insert(pair <string , string> ("delta", "D27b2YZ*Urh0"));               
                passwords.insert(pair <string , string> ("echo", "#2oQ4h85Jz99"));              
                passwords.insert(pair <string , string> ("foxtrot" , "@av9qWS64G9!"));            
                passwords.insert(pair <string , string> ("golf" , "h*HBew08w6u%"));            
                passwords.insert(pair <string , string> ("hotel" , "B*w46L2i$k%W"));          
                passwords.insert(pair <string , string> ("india" , "l9e%2ad722aL"));        
                passwords.insert(pair <string , string> ("juliet" , "zH0^448TSvtp"));       
                passwords.insert(pair <string , string> ("kilo" , "zH0^448TSvtp")); 
                passwords.insert(pair <string , string> ("lima" , "6nT3G5@9R%Ct"));  
                passwords.insert(pair <string , string> ("mike" , "y!aNakR4q3B4"));    
                itr = passwords.find (user);
                cout << itr-> first <<": " << itr -> second << endl;
            }

        }
//cierre 1 del programa 
        else{

            cout<< "Intruso detectado \n";
            cout << "================\n";
            cout << "Cierre de base de datos...\n";
            for(int i = 3; i>0; i--){
                cout << i << "..."<< endl;
            }
            cout << "================"<<endl;
            cout << "Base de datos eleminada corrrectamente" << endl;
            cout << "Que tenga una buena vida" << endl;

            cout << "   ███████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓█"<<endl;
            cout << "   ████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬█"<<endl;
            cout << "   ███▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
            cout << "   ████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
            cout << "   ███▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓█"<<endl;
            cout << "   ████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬█"<<endl;
            cout << "   ███▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
            cout << "   ████▓▓▓▓▓▓▓▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
            cout << "   ███▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
            cout << "   █████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
            cout << "   █████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██"<<endl;
            cout << "   █████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██"<<endl;
            cout << "   ████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██"<<endl;
            cout << "   ████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓██"<<endl;
            cout << "   █████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓██"<<endl;
            cout << "   █████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███"<<endl;
            cout << "   ██████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓███"<<endl;
            cout << "   ███████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬████"<<endl;
            cout << "   ███████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓████"<<endl;
            cout << "   ████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████"<<endl;
            cout << "   █████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓██████"<<endl;
            cout << "   ██████████▓▓▓█▓▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬▓███████"<<endl;
            cout << "   ███████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓████████"<<endl;
            cout << "   ██████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬██████████"<<endl;
            cout << "   ███████████████▓▓▓██▓▓╬╬╬╬╬╬▓███████████"<<endl;
        }
    }

//cierre 2 del programa
    else{ // pertenece a seguridad
        cout<< "Intruso detectado \n";
        cout << "================\n";
        cout << "Cierre de base de datos...\n";

        for(int i = 3; i>0; i--){
            cout << i << "..."<< endl;
        } 
        cout << "Base de datos eleminada corrrectamente" << endl;
        cout << "Que tenga una buena vida" << endl;

        cout << "   ███████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓█"<<endl;
        cout << "   ████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬█"<<endl;
        cout << "   ███▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
        cout << "   ████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
        cout << "   ███▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓█"<<endl;
        cout << "   ████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬█"<<endl;
        cout << "   ███▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
        cout << "   ████▓▓▓▓▓▓▓▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
        cout << "   ███▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
        cout << "   █████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█"<<endl;
        cout << "   █████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██"<<endl;
        cout << "   █████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██"<<endl;
        cout << "   ████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██"<<endl;
        cout << "   ████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓██"<<endl;
        cout << "   █████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓██"<<endl;
        cout << "   █████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███"<<endl;
        cout << "   ██████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓███"<<endl;
        cout << "   ███████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬████"<<endl;
        cout << "   ███████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓████"<<endl;
        cout << "   ████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████"<<endl;
        cout << "   █████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓██████"<<endl;
        cout << "   ██████████▓▓▓█▓▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬▓███████"<<endl;
        cout << "   ███████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓████████"<<endl;
        cout << "   ██████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬██████████"<<endl;
        cout << "   ███████████████▓▓▓██▓▓╬╬╬╬╬╬▓███████████"<<endl;
    }

//by 
    /* firma 
    SH3RL0CK===============================
    ───▐▀▄───────▄▀▌───▄▄▄▄▄▄▄─────────────
    ───▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄──────────
    ──▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄────────
    ──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄──────
    ▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────
    ▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐───▄▄
    ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█
    ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀─
    ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀───
    ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌────
    ─▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐─────
    ─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────
    ──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐──────
    ──▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌──────
    ────▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀────4MIEl
    =======================================*/
return 0;} 