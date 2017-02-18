# esp8266-weather-station-webserver-persistence

ESP8266 Weather Station with webserver and persistant store for location

## Description
* Access Point / WiFi client
* WebServer for location configuration (country + city)
* NTP client reading current time
* Weather Condition Client (WunderGround API)
* Weather Forecast Client (WunderGound API)
* 3D printed case

## Setup

* Download this project either with a git checkout or press "Download as zip"
* Install the following librarys with your Arduino Library Manager in Sketch > Include Library > Manage Libraries...
 * Json Streaming Parser (by Daniel Eichhorn)
 * ESP8266 Oled Driver for SSD1306 display (by me as well)
* Go to http://wunderground.com, create an account and get an API Key
* Open the sketch in the Arduino Include and
 * Enter  the Wunderground API Key
 * Adjust UTC offset

## Inpired by
* http://www.xpablo.cz/?p=975#more-975
* https://www.youtube.com/watch?v=AVIP1Na-M10&t=1s

## Other Libraries
* find on http://www.xpablo.cz/?p=975#more-975
 * WifiConfig
 * espnbns
 * Interval
 * Time
 
## Components
* ams1117-3 http://www.ebay.com/itm/5pcs-4-5V-7V-to-3-3V-AMS1117-3-3V-Power-Supply-Module-AMS1117-3-3-/400985442255?hash=item5d5c9847cf:g:3wwAAOSwF1dUSgkD
* ssd1306 http://www.ebay.com/itm/0-96-I2C-IIC-SPI-Serial-128X64-OLED-LCD-Display-SSD1306-for-Arduino-51-STM32-/272476004980?var=&hash=item3f70d5e274:m:mdsrQThNknGCFR88rIkikNA
* esp8266 esp-01 http://www.ebay.com/itm/1PCS-ESP8266-ESP-01-WIFI-Wireless-Transceiver-Send-Receive-LWIP-AP-STA-/171907296150?hash=item2806792b96:g:X1cAAOSwk5FUt8Sq
