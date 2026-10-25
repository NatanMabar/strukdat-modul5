#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#define Nil NULL

#include <cstddef>

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

// Latihan 3: mencari elemen dengan info tertentu
address findElm(List L, infotype x);

// Latihan 4: menjumlahkan seluruh info elemen
int sumInfo(List L);

#endif
