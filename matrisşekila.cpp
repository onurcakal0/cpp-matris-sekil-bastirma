#include <iostream>
using namespace std;
void diküçgen(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void tersdiküçgen(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void içiboşkare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i==1 || i==n || j==1 || j==n ) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void baklavaşekli(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout<<" ";
        }
        for (int j=1; j<=(2*i-1);j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i =n-1; i>=1; i--) {
        for (int j=i; j<n; j++) {
            cout<<" ";
        }
        for (int j=1; j<=(2*i-1);j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void terseşkenarüçgen(int n) {
    for (int i=n;i>=1;i--) {
        for (int j=i;j<n;j++) {
            cout<<" ";
        }
        for (int j=1;j<=(2*i-1);j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void eşkenarüçgen(int n) {
    for (int i =1; i<=n; i++) {
        for (int j=i; j<n; j++) {
            cout<<" ";
        }
        for (int j=1;j<=(2*i-1);j++) {
            cout<<"*";
        }
        cout<<endl;
    }

}
void okişareti(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=n-1; i>=1; i--) {
        for (int j=1; j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void içiboşüçgen(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout<<" ";
        }
        for (int j = 1; j<=(2*i-1);j++) {
            if (j==1 ||j==(2*i-1)||i==n) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void xşekli(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j==i||j==n-i+1) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void kalpşekli (int n) {
    for (int i = n/2; i <= n; i+=2) {
        for (int j = 1; j < n-i; j+=2) {
            cout<<" ";
        }
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        for (int j=1; j<=n-i;j++) {
            cout<<" ";
        }
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=n; i>=1; i--) {
        for (int j=i; j<n; j++) {
            cout<<" ";
        }
        for (int j=1; j<=(i*2)-1;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {
    int kullanıcıgiris,gir;
    cout<<"MATRİS KULLANARAK ŞEKİL OLUŞTURMA PROGRAMINA HOŞGELDİNİZ!"<<endl;
    cout<<"LÜTFEN BİR SEMBOL SEÇİNİZ"<<endl;
    cout<<"1-DİK ÜÇGEN"<<endl<<"2-TERS DİK ÜÇGEN"<<endl<<"3-İÇİ BOŞ KARE"<<endl<<"4-BAKLAVA"<<endl
    <<"5-TERS EŞKENAR ÜÇGEN"<<endl<<"6-EŞKENAR ÜÇGEN"<<endl<<"7-> İŞARETİ"<<
        endl<<"8-İÇİ BOŞ ÜÇGEN"<<endl<<"9-X İŞARETİ"<<endl<<"10-KALP İŞARETİ"<<endl;
    cin>>kullanıcıgiris;
    if (kullanıcıgiris==1) {
        int boyut = 5;
        diküçgen(boyut);
    }
    if (kullanıcıgiris==2) {
        int boyuts = 5;
        tersdiküçgen(boyuts);
    }
    if (kullanıcıgiris==3) {
        int boyuts = 5;
        içiboşkare(boyuts);
    }
    if (kullanıcıgiris==4) {
        int boyuts = 5;
        baklavaşekli(boyuts);
    }
    if (kullanıcıgiris==5) {
        int boyuts = 5;
        terseşkenarüçgen(boyuts);
    }
    if (kullanıcıgiris==6) {
        int boyuts = 5;
        eşkenarüçgen(boyuts);
    }
    if (kullanıcıgiris==7) {
        int boyuts = 5;
        okişareti(boyuts);
    }
    if (kullanıcıgiris==8) {
        int boyuts = 8;
        içiboşüçgen(boyuts);
    }
    if (kullanıcıgiris==9) {
        int boyuts = 8;
        xşekli(boyuts);
    }
    if (kullanıcıgiris==10) {
        int boyuts = 6;
        kalpşekli(boyuts);
    }

    return 0;
}