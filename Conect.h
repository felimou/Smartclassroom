#ifndef CONECT_H
#define CONECT_H

//Config Wi-Fi
const char* SSID = "Robotica_IFCZ";
const char* PASS = "852456rb";

//Config MQTT
const char* BROKER_MQTT = "10.3.141.125";   //ip/host do broker
int BROKER_PORT = 1883;                           //porta do broker
char ID_MQTT[20] = "TESTE";

//const char* ID_MQTT = "LAB_ROBOTICA";  //MAC

#define USAR_MAC  1

#if USAR_MAC

//char* TOPICO_SUBSCRIBE_CONTROLE_LUZ;
char TOPICO_SUBSCRIBE_CONTROLE_LUZ[30];
const char* TOPICO_CONTROLE_LUZ = "/lightOnOff";

//String TOPICO_SUBSCRIBE_CONTROLE_AR;
char TOPICO_SUBSCRIBE_CONTROLE_AR[30];
const char* TOPICO_CONTROLE_AR = "/airOnOff";

//String TOPICO_PUBLISH_TEMPERATURA;
char TOPICO_PUBLISH_TEMPERATURA[30];
const char* TOPICO_TEMPERATURA = "/temperature";

//String TOPICO_PUBLISH_UMIDADE;
char TOPICO_PUBLISH_UMIDADE[30];
const char* TOPICO_UMIDADE = "/humidity";

//String TOPICO_PUBLISH_LIGHT_STATUS;
char TOPICO_PUBLISH_LIGHT_STATUS[30];
const char* TOPICO_LIGHT_STATUS = "/lightStatus";

//String TOPICO_PUBLISH_PRESENCE_STATUS;
char TOPICO_PUBLISH_PRESENCE_STATUS[30];
const char* TOPICO_PRESENCE_STATUS = "/presenceStatus";

#else

const char* TOPICO_SUBSCRIBE_CONTROLE_LUZ = "LAB_ROBOTICA/lightOnOff";
const char* TOPICO_SUBSCRIBE_CONTROLE_AR = "LAB_ROBOTICA/airOnOff";

const char* TOPICO_PUBLISH_TEMPERATURA = "LAB_ROBOTICA/temperature";
const char* TOPICO_PUBLISH_UMIDADE = "LAB_ROBOTICA/humidity";
const char* TOPICO_PUBLISH_LIGHT_STATUS = "LAB_ROBOTICA/lightStatus";
const char* TOPICO_PUBLISH_PRESENCE_STATUS = "LAB_ROBOTICA/presenceStatus";


#endif

#endif
