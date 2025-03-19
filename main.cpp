#include <iostream>

using namespace std;
int size(string arr[]){
    int size = 0;
    for (int i=0; i < 20; i++){
        if (!arr[i].empty()){
            size++;
        }
    }
    return size;
}

void apk(){
    string nh [20] = {"Budi", "Joko"};
    string nim[20] = {"001", "002"};
    int nil[20] = {90, 70};
    int size2, pil,r, nil2,in;
    string nim2;

    while(true){
        size2 = size(nim);

        cout << "Aplikasi Mahasiswa " << endl;
        cout << "1. Lihat Data" << endl;
        cout << "2. Tambah Mahasiswa" << endl;
        cout << "3. Input Mahasiswa" << endl;
        cout << "4. Exit" << endl;
        cout << "Masukan pilihan anda : ";
        cin >> pil;
        
        if (pil != 1 && pil != 2 && pil != 3 && pil != 4 ){
            cout << "Invalid" << endl;
        }
        else{
            if(pil == 1){
                cout << "Data Mahasiswa" << endl;
                for (int i = 0; i < size2; i++){
                    cout << i+1 << ".   Nama: " << nh[i] << endl;
                    cout << "      NIM: " << nim[i] << endl;
                    cout << "      Nilai: " << nil[i] << endl;
                    cout << "\n";
                }
            }
            else if (pil == 2){
                while(true){
                    cout << "Masukan NIM : ";
                    cin >> nim[size2];
                    for(int i = 0; i < size2; i++){
                        if (nim[size2] == nim[i]){
                        cout << "NIM Sudah ada" << endl;
                        r = 1;
                        break;
                        }
                        else{
                            r = 0;
                        } 
                    }
                    if(r == 0){
                        break;
                    }
                }
                cout << "Masukan Nama Mahasiswa: ";
                cin >> nh[size2];
            }
            else if(pil == 3){
                while(true){
                    cout << "Masukan NIM: ";
                    cin >> nim2;
                    for (int i = 0; i < size2; i++){
                        if (nim2 == nim[i]){
                            r=0;
                            in = i;
                            break;
                        }
                        else{
                            r=1;
                        }
                    }
                    if (r == 1){
                        break;
                    }
                    else{
                        while(true){
                            cout << "Masukan Nilai: ";
                            cin >> nil2;
                            if (nil[in] == NULL){
                                nil[in] = nil2;
                                cout << "Input Nilai Berhasil" << endl;
                                break;
                            }
                            else{
                                cout << "Nilai Sudah Ada" << endl;
                                break;
                            }
                        }
                        break;
                    }
                }
            }
            else{
                exit(0);
            }
        }
    
    
    }
    
}

int main(){
    string pil1,pw2,y,em2;
    string email[20] = {"testing1@gmail.com", "testing2@gmail.com"};
    string pw1[20] = {"testing123","testing234"};
    int r;
    int size1;
    

    while (true)
    {
        size1 = size(email);
        cout << "Register / Login : ";
        cin >> pil1;
        if(pil1 != "Register" && pil1 !="Login" && pil1 != "register" && pil1 != "login"){
            if (pil1 == "Exit" || pil1 == "exit"){
                exit(0);
            }
            else{
                cout << "invalid" << endl;
            }
        }
        else{
            if(pil1 == "Register" || pil1 == "register"){
                while(true){
                    cout << "Masukan Email: ";
                    cin >> email[size1];
                    for(int i = 0; i < size1; i++){
                        if(email[size1] == email[i]){  
                            cout << "Email sudah di pakai" << endl; 
                            r = 1;
                            break;
                        }
                        else {
                            r = 0;
                        }
                    }
                    if (r == 0){
                        break;
                    }
                }    
                    cout << "Masukan Password: ";
                    cin >> pw1[size1];
                    while(true)
                    {
                        cout << "Konfirmasi Password : ";
                        cin >> pw2;
                        if (pw2 == pw1[size1]){
                            cout << "Anda Berhasil Register" << endl;
                            break;
                        }
                        else{
                            cout << "Apakah anda ingin mengulangi lagi [Y/N]: ";
                            cin >> y;
                            if (y != "Y" && y != "y"){
                                exit(0);
                            }
                        }
                    }
            }
            else{                
                cout << "Masukan Email: ";
                cin >> em2;
                cout << "Masukan Password: ";
                cin >> pw2;
                for(int i = 0; i < size1; i++){
                    if (em2 == email[i] && pw2 == pw1[i]){
                            cout << "Access Granted!" << endl;
                            r = 1;
                            break;
                    }
                    else{
                        r = 0;
                    }
                }
                if (r == 0){
                    cout << "Email / Password Salah"<< endl;
                }
                else{
                    apk();
                }
            }
        }
    }
}