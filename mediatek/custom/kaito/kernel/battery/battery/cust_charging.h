#ifndef _CUST_BAT_H_
#define _CUST_BAT_H_

/* stop charging while in talking mode */
#define STOP_CHARGING_IN_TAKLING
#define TALKING_RECHARGE_VOLTAGE 3800
#define TALKING_SYNC_TIME		   60

/* Battery Temperature Protection */
#define MTK_TEMPERATURE_RECHARGE_SUPPORT
#define MAX_CHARGE_TEMPERATURE  45
#define MAX_CHARGE_TEMPERATURE_MINUS_X_DEGREE	41
#define MIN_CHARGE_TEMPERATURE  0
#define MIN_CHARGE_TEMPERATURE_PLUS_X_DEGREE	6
#define ERR_CHARGE_TEMPERATURE  0xFF


#define MAX_CHARGE_NOTIFY_TEMPERATURE 50				//高温报警温度,必须低于高温掉电温度,否则无效
#define MIN_CHARGE_NOTIFY_TEMPERATURE -20				//低温报警温度,必须高于低温掉电温度,否则无效

#define MAX_CHARGE_POWEROFF_TEMPERATURE 60	//高温自动掉电温度,>60度规避此功能
#define MIN_CHARGE_POWEROFF_TEMPERATURE -30 //低温自动掉电温度,<-20度规避此功能


#define CURRENT_LIMIT_BOUNDARY_TEMPERATURE 10			//高低温限流温度
#define CURRENT_LIMIT_TEMPERATURE_40_DEGREE 40
#define CURRENT_LIMIT_TEMPERATURE_42_DEGREE 42
#define CURRENT_LIMIT_TEMPERATURE_44_DEGREE 44
#define CURRENT_LIMIT_TEMPERATURE_46_DEGREE 46
#define CURRENT_LIMIT_TEMPERATURE_48_DEGREE 48

#define MAX_CURRENT_LIMIT_BOUNDARY_BATTERY BATTERY_VOLT_04_350000_V		//低温以下限制充电电压
#define MIN_CURRENT_LIMIT_BOUNDARY_BATTERY BATTERY_VOLT_04_200000_V		//低温以下限制充电电压

#define AC_LESS_N_DEGRESS_CHARGER_CURRENT	CHARGE_CURRENT_500_00_MA	//高低温之低温限流 0.1C ~ 400mA
#define AC_LESS_N_NORMAL_CHARGER_CURRENT	CHARGE_CURRENT_2000_00_MA	//高低温之高温限流 < 0.5C


/* Linear Charging Threshold */
#define V_PRE2CC_THRES	 		3400	//mV
#define V_CC2TOPOFF_THRES		4050
#define RECHARGING_VOLTAGE      4110
#define CHARGING_FULL_CURRENT    150	//mA

/* Charging Current Setting */
//#define CONFIG_USB_IF 						   
#define USB_CHARGER_CURRENT_SUSPEND			0		// def CONFIG_USB_IF
#define USB_CHARGER_CURRENT_UNCONFIGURED	CHARGE_CURRENT_70_00_MA	// 70mA
#define USB_CHARGER_CURRENT_CONFIGURED		CHARGE_CURRENT_500_00_MA	// 500mA

#define USB_CHARGER_CURRENT					CHARGE_CURRENT_500_00_MA	//500mA
#define AC_CHARGER_CURRENT					CHARGE_CURRENT_2000_00_MA
#define NON_STD_AC_CHARGER_CURRENT			CHARGE_CURRENT_500_00_MA
#define CHARGING_HOST_CHARGER_CURRENT       CHARGE_CURRENT_650_00_MA
#define APPLE_0_5A_CHARGER_CURRENT          CHARGE_CURRENT_500_00_MA
#define APPLE_1_0A_CHARGER_CURRENT          CHARGE_CURRENT_650_00_MA
#define APPLE_2_1A_CHARGER_CURRENT          CHARGE_CURRENT_800_00_MA


/* Precise Tunning */
#define BATTERY_AVERAGE_DATA_NUMBER	3	
#define BATTERY_AVERAGE_SIZE 	30

/* charger error check */
#define BAT_LOW_TEMP_PROTECT_ENABLE         // stop charging if temp < MIN_CHARGE_TEMPERATURE
#define V_CHARGER_ENABLE 0				// 1:ON , 0:OFF	
#define V_CHARGER_MAX 6000				// 6.5 V
#define V_CHARGER_MIN 4400				// 4.4 V

/* Tracking TIME */
#define ONEHUNDRED_PERCENT_TRACKING_TIME	10	// 10 second
#define NPERCENT_TRACKING_TIME	   			20	// 20 second
#define SYNC_TO_REAL_TRACKING_TIME  		60	// 60 second
#define V_0PERCENT_TRACKING							3450 //3450mV

/* Battery Notify */
#define BATTERY_NOTIFY_CASE_0001_VCHARGER
#define BATTERY_NOTIFY_CASE_0002_VBATTEMP
//#define BATTERY_NOTIFY_CASE_0003_ICHARGING
//#define BATTERY_NOTIFY_CASE_0004_VBAT
//#define BATTERY_NOTIFY_CASE_0005_TOTAL_CHARGINGTIME

/* JEITA parameter */
//#define MTK_JEITA_STANDARD_SUPPORT
#define CUST_SOC_JEITA_SYNC_TIME 30
#define JEITA_RECHARGE_VOLTAGE  4110	// for linear charging
#define JEITA_TEMP_ABOVE_POS_60_CV_VOLTAGE		BATTERY_VOLT_04_100000_V
#define JEITA_TEMP_POS_45_TO_POS_60_CV_VOLTAGE	BATTERY_VOLT_04_100000_V
#define JEITA_TEMP_POS_10_TO_POS_45_CV_VOLTAGE	BATTERY_VOLT_04_200000_V
#define JEITA_TEMP_POS_0_TO_POS_10_CV_VOLTAGE	BATTERY_VOLT_04_100000_V
#define JEITA_TEMP_NEG_10_TO_POS_0_CV_VOLTAGE	BATTERY_VOLT_03_900000_V
#define JEITA_TEMP_BELOW_NEG_10_CV_VOLTAGE		BATTERY_VOLT_03_900000_V

/* For JEITA Linear Charging only */
#define JEITA_NEG_10_TO_POS_0_FULL_CURRENT  120	//mA 
#define JEITA_TEMP_POS_45_TO_POS_60_RECHARGE_VOLTAGE  4000
#define JEITA_TEMP_POS_10_TO_POS_45_RECHARGE_VOLTAGE  4100
#define JEITA_TEMP_POS_0_TO_POS_10_RECHARGE_VOLTAGE   4000
#define JEITA_TEMP_NEG_10_TO_POS_0_RECHARGE_VOLTAGE   3800
#define JEITA_TEMP_POS_45_TO_POS_60_CC2TOPOFF_THRESHOLD	4050
#define JEITA_TEMP_POS_10_TO_POS_45_CC2TOPOFF_THRESHOLD	4050
#define JEITA_TEMP_POS_0_TO_POS_10_CC2TOPOFF_THRESHOLD	4050
#define JEITA_TEMP_NEG_10_TO_POS_0_CC2TOPOFF_THRESHOLD	3850


/* High battery support */
#define HIGH_BATTERY_VOLTAGE_SUPPORT

/* Disable Battery check for HQA */
#if 1//#ifdef MTK_DISABLE_POWER_ON_OFF_VOLTAGE_LIMITATION
#define CONFIG_DIS_CHECK_BATTERY
#endif

#ifdef MTK_FAN5405_SUPPORT
#define FAN5405_BUSNUM 1
#endif

#ifdef MTK_BQ24296_SUPPORT
// yong.su 2013-11-01  10:33:02#define BQ24296_BUSNUM 1
#define BQ24296_BUSNUM 0
#endif

/* Detect AC Charger Twice*/
#define MTK_AC_CHARGER_DEBOUNCE

#endif /* _CUST_BAT_H_ */ 
