#!/bin/bash
echo "Bash version ${BASH_VERSION}..."	
INDEX=1
REPETICION=1
mkdir Vec$INDEX
for i in $(seq 0 201);
do

   if [ -e /home/victor/Dropbox/TU-DresdenProject/OmnetWorkspace/Mixim2.2.1-vcmB/examples/ieee802154Narrow/results/Red8012154-$i.vec ]
   	then  
		echo "Red8012154-$i.vec" 	
		scavetool vector -p "name(received-packets-per-period)" -O ./Vec$INDEX/out-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec
		scavetool vector -p "name(received-no-repeated-packets-per-period)" -O ./Vec$INDEX/outNoRepeated-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec
		scavetool vector -p "name(Number*of*packets*from*this*anchor)" -O ./Vec$INDEX/pktFromThisAnchor-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec

		scavetool vector -p "module(**computer**) AND name(**Number**) AND name(**packets**) AND name(**sent**) AND name(**mobile**) AND name(**node*0**)" -O ./Vec$INDEX/SendFromMN-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V

		scavetool vector -p "module(**anchor**) AND name(**Number**) AND name(**packets**) AND name(**sent**) AND name(**mobile**) AND name(**node*0**)" -O ./Vec$INDEX/SendFromMN-AN-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V

		scavetool vector -p "module(**computer**) AND name(**Number**) AND name(**packets**) AND name(**sent**) AND name(**anchor*8**)" -O ./Vec$INDEX/SendFromAN-8-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**computer**) AND name(**Number**) AND name(**packets**) AND name(**sent**) AND name(**anchor*12**)" -O ./Vec$INDEX/SendFromAN-12-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**computer**) AND name(**Number**) AND name(**packets**) AND name(**sent**) AND name(**anchor*16**)" -O ./Vec$INDEX/SendFromAN-16-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**computer**) AND name(**Number**) AND name(**packets**) AND name(**sent**) AND name(**anchor*20**)" -O ./Vec$INDEX/SendFromAN-20-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		

		scavetool vector -p "module(**anchor[8]**) AND name(**Dropped**) AND name(**Packets**) AND name(**ACK**)" -O ./Vec$INDEX/NoAck-8-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[8]**) AND name(**Dropped**) AND name(**Packets**) AND name(**BackOff**)" -O ./Vec$INDEX/caf-8-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[8]**) AND name(**Number**) AND name(**AN**) AND name(**Reports**) AND name(**ACK**)" -O ./Vec$INDEX/repAck-8-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[8]**) AND name(**Number**) AND name(**from*this*anchor**)" -O ./Vec$INDEX/pktFromThisAnchor-8-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[8]**) AND name(**Effectiveness**) AND (**each**)" -O ./Vec$INDEX/Effectiveness-8.csv -F csv Red8012154-$i.vec -V -V
		scavetool vector -p "module(**anchor[8]**) AND name(Number*of*packets*from*this*anchor)" -O ./Vec$INDEX/pktFromThisAnchor-8-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
 


		scavetool vector -p "module(**anchor[12]**) AND name(**Dropped**) AND name(**Packets**) AND name(**ACK**)" -O ./Vec$INDEX/NoAck-12-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[12]**) AND name(**Dropped**) AND name(**Packets**) AND name(**BackOff**)" -O ./Vec$INDEX/caf-12-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[12]**) AND name(**Number**) AND name(**AN**) AND name(**Reports**) AND name(**ACK**)" -O ./Vec$INDEX/repAck-12-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[12]**) AND name(**Number**) AND name(**from*this*anchor**)" -O ./Vec$INDEX/pktFromThisAnchor-12-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[12]**) AND name(**Effectiveness**) AND (**each**)" -O ./Vec$INDEX/Effectiveness-12.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[12]**) AND name(Number*of*packets*from*this*anchor)" -O ./Vec$INDEX/pktFromThisAnchor-12-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V


		scavetool vector -p "module(**anchor[16]**) AND name(**Dropped**) AND name(**Packets**) AND name(**ACK**)" -O ./Vec$INDEX/NoAck-16-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[16]**) AND name(**Dropped**) AND name(**Packets**) AND name(**BackOff**)" -O ./Vec$INDEX/caf-16-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[16]**) AND name(**Number**) AND name(**AN**) AND name(**Reports**) AND name(**ACK**)" -O ./Vec$INDEX/repAck-16-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[16]**) AND name(**Number**) AND name(**from*this*anchor**)" -O ./Vec$INDEX/pktFromThisAnchor-16-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[16]**) AND name(**Effectiveness**) AND (**each**)" -O ./Vec$INDEX/Effectiveness-16.csv -F csv Red8012154-$i.vec -V 
		scavetool vector -p "module(**anchor[16]**) AND name(Number*of*packets*from*this*anchor)" -O ./Vec$INDEX/pktFromThisAnchor-16-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V

		scavetool vector -p "module(**anchor[20]**) AND name(**Dropped**) AND name(**Packets**) AND name(**ACK**)" -O ./Vec$INDEX/NoAck-20-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[20]**) AND name(**Dropped**) AND name(**Packets**) AND name(**BackOff**)" -O ./Vec$INDEX/caf-20-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[20]**) AND name(**Number**) AND name(**AN**) AND name(**Reports**) AND name(**ACK**)" -O ./Vec$INDEX/repAck-20-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[20]**) AND name(**Number**) AND name(**from*this*anchor**)" -O ./Vec$INDEX/pktFromThisAnchor-20-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[20]**) AND name(**Effectiveness**) AND (**each**)" -O ./Vec$INDEX/Effectiveness-20.csv -F csv Red8012154-$i.vec -V
		scavetool vector -p "module(**anchor[20]**) AND name(Number*of*packets*from*this*anchor)" -O ./Vec$INDEX/pktFromThisAnchor-20-$REPETICION-$INDEX.csv -F csv Red8012154-$i.vec -V

		REPETICION=$(($REPETICION+1))
		if [ $REPETICION -eq 301 ]
		then		
		REPETICION=1
		INDEX=$(($INDEX+1))
		mkdir Vec$INDEX
		fi
	else
	echo "no existe el archivo"
   fi

done


