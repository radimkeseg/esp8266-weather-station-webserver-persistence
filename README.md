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
 
