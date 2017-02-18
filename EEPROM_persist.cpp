/*
 */
 
#include "EEPROM_persist.h"

static int persistBase = 0; // musi byt trvale ulozene, aby fungovaly metody pro ziskani retezcu z EEPROM


void persist_begin(int start){
  persistBase = start;
}

void persist_in_country(String country){
  setEEPROMString(persistBase + offsetof(persist_t, country), elementSize(persist_t, country), country);
}
String persist_out_country(){
 return getEEPROMString(persistBase + offsetof(persist_t, country), elementSize(persist_t, country));
}

void persist_in_city(String city){
  setEEPROMString(persistBase + offsetof(persist_t, city), elementSize(persist_t, city), city);
}
String persist_out_city(){
 return getEEPROMString(persistBase + offsetof(persist_t, city), elementSize(persist_t, city));
}

void persist_commit(){
  EEPROM.commit();
  delay(2000); //wait 2 secs
}
