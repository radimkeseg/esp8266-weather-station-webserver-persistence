/* Nastaveni ESP modulu, ktere pracuje takto:
 * 1. Pokud je forceConfigure ==0, tak se aktivuje WiFi v rezimu AP a cele ESP je mozne nastavit webovym rozhranim (pocitam s prenosem hodnoty nouzoveho tlacitka pri startu).
 * 2. Neni-li tlacitko stisknute, tak se vezme rezim prace a AP se nastavi dle nej (WIFI_STA a WIFI_AP)
 * 3. Pokud byl rezim prace WIFI_STA a ESP se nepripoji k zadne siti do casu WIFI_STA_CONNECT_TIMEOUT, tak se pokracuje jako kdyby bylo stisknute rekonfiguracni tlacitko
 */

#ifndef __EEPROM_persist_h__
#define __EEPROM_persist_h__

#include <EEPROM.h>
#include <WifiConfig.h>

#define PERSISTANCE_SIZE 64

// Struktura konfigurace, ulozena v EEPROM
typedef struct
{
	char country[32]; // country
	char city[32]; // city
} persist_t;

void persist_begin(int start);

void persist_in_country(String country);
String persist_out_country();

void persist_in_city(String city);
String persist_out_city();

void persist_commit();

#endif
