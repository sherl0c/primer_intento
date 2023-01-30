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
                passwords.insert(pair <string , string> ("alpha" , "bx&21fY5A*5s"));                    // 1 esl
                passwords.insert(pair <string , string> ("bravo" , "2Y44@l2L4Wdr"));                  // 2 aimL 
                passwords.insert(pair <string , string> ("charlie" ,"eI#2s$oiI02H"));               // 3 paris
                passwords.insert(pair <string , string> ("delta", "D27b2YZ*Urh0"));               // 4 raze   
                passwords.insert(pair <string , string> ("echo", "#2oQ4h85Jz99"));                 // 5 usm 
                passwords.insert(pair <string , string> ("foxtrot" , "@av9qWS64G9!"));             // 6 fuas
                passwords.insert(pair <string , string> ("golf" , "h*HBew08w6u%"));               // 7 kali_s
                passwords.insert(pair <string , string> ("hotel" , "B*w46L2i$k%W"));              // 8 kali_root
                passwords.insert(pair <string , string> ("india" , "l9e%2ad722aL"));            // 9 junaeb
                passwords.insert(pair <string , string> ("juliet" , "zH0^448TSvtp"));       // 10 corr_USM
                passwords.insert(pair <string , string> ("kilo" , "zH0^448TSvtp")); // 11 cuent_USM
                passwords.insert(pair <string , string> ("lima" , "6nT3G5@9R%Ct"));  // 12 CLAV_unic 
                passwords.insert(pair <string , string> ("mike" , "y!aNakR4q3B4"));     // 13 twitch
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