#include <stdio.h>
#include <malloc.h>

#include "head.h"


/* MODUL KONSTRUKTOR */
address alokasi(infotype X){
    // Deklarasi varibel lokal
    address P = nil;

    // Begin
    P = (address)malloc(sizeof(NODE));
    if(P == nil){
        printf("alokasi gagal!!");
        return P;
    }

    P->info = X;
    P->next = nil;
    P->prev = nil;
    return P;
}

/* MODUL KONTROL */
void addAwalNode(List *L, infotype X){
    // Deklarasi variabel lokal
    address list = (*L).First;
    address P = nil;

    // Begin
    P = alokasi(X);
    if(P == nil){
        printf("alokasi gagal....");
        return;
    }

    if((*L).First == nil){
        (*L).First = P;
        (*L).Last = P;
        return;
    }
    
    if(list != nil){
        P->next = (*L).First;
        (*L).First->prev = P;
        (*L).First = P;
    }
}

void addAkhirNode(List *L, infotype X){
    // Deklarasi variabel lokal
    address P = nil;
    address list = (*L).Last;

    // Begin
    P = alokasi(X);
    if(P == nil){
        printf("alokasi gagal!!!!");
        return;
    }

    if((*L).Last == nil){
        (*L).First = P;
        (*L).Last = P;
        return;      
    }

    if(list != nil){
        P->prev = (*L).Last;
        (*L).Last->next = P;
        (*L).Last = P;
    }
}

void addTengahNode(List *L, infotype X, infotype Y){
    // Deklarasi variabel lokal
    address P = (*L).First;
    address temp = nil;
    address nodeList = nil;

    // Begin
    nodeList = alokasi(X);
    if(P == nil){
        printf("tidak ada list....\n");
        return; 
    }
    temp = searchNodeList((*L), Y);
    if(temp == nil){
        printf("tidak ada node di list..");
        return;
    }
    nodeList->next = temp->next;
    nodeList->prev = temp;
    temp->next = nodeList;
    if(nodeList->next != nil){
        nodeList->next->prev = nodeList;
    }else{
        (*L).Last = nodeList;   
    }

}

/* MODUL NON KONTROL */

void printList(List L){
    // Deklarasi variabel lokal
    address P = (L).First;

    // Begin
    if(P == nil){
        printf("List kosong.....\n");
        return;
    }
    while(P != nil){
        printf("%d -> ", P->info);
        P = P->next;
    }
    printf("Null");
}

void printListReverse(List L){
    // Deklarasi variabel lokal
    address P = (L).Last;

    // Begin
    if(P == nil){
        printf("List kosong.....\n");
        return;
    }
    while(P != nil){
        printf("%d -> ", P->info);
        P = P->prev;
    }
    printf("Null");
}

address searchNodeList(List L, infotype X){
    // Deklarasi variabel lokal 
    address P = (L).First;

    // Begin 
    while(P != nil && P->info != X){
        P = P->next;
    }
    if(P == nil){
        return nil;
    }
    return P;
}