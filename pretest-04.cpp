/*
 * Author : Nadhifal
 * NPM : 140810180048
 * Kelas : B
 * Deskripsi :
 * Tanggal : 13 Maret 2019
 */

 #include <iostream>
 using namespace std;

struct ElemtList{
    char npm[14];
    char nama[40];
    floart ipk;
    ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList(List& first){
    First = NULL;
};

void createElement(pointer& pBaru){
    pBaru = new ElemtList;

    cin >> pBaru->npm;
    cin >> pBaru->nama;
    cin >> pBaru->ipk;

    pBaru->next = NULL;
};

void insertSortNama(List& first, pointer pBaru){

};

void traversal(List first){
    pointer pBantu;
	int i=1;
	if(First==NULL){
		cout<<"List Kosong"<<endl;
	}else{
		pBantu=First;
		do{
			cout<<pBantu->npm<<endl;
			cout<<pBantu->nama<<endl;
			cout<<pBantu->ipk<<endl;
			pBantu=pBantu->next;
			i++;
		}while(pBantu!=NULL);
	}
	cout<<endl;
};

int main(){
    pointer p;
    List mhs;

    createList(mhs);
    createElement(p);
    insertSortNama(mhs, p);
    traversal(mhs);
}
