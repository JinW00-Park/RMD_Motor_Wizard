# RMD_Motor_Wizard
This project was created to measure the exact torque of a motor and to create torque characteristic data unique to that motor.

The torque characteristics of the motor provided by the manufacturer provide approximate torque characteristics. Even motors from the same manufacturer have different torque characteristics. If there is no problem using approximate data, there is no problem using the manufacturer's data. However, in the case of a system that requires accurate torque data, such as MPC, there is a possibility of undesirable operation.
To solve this problem, a program to measure the specific torque characteristics of the motor was created.

In this project, RMD's X series motor and Robotous' torque sensor were used.

![image](https://github.com/JinW00-Park/RMD_Motor_Wizard/assets/90753764/842d7e7b-7193-4402-944f-bf5b9871660d)
1. Push bind button for bind socket can port
2. Push "ID Search" Button. This button scan ID of RMD Motor in the range of the left side ID value to the left side of the "search button". Andthen all  ID_box are filled searched ID.
3. Push "running_mod" for change motor mode
4. If you want set torque value, you can use slidbar to change torque data. 
5. The run button transmits torque data to the ID value on the left.

<br>

# Dependencies
### - qt5libprintsupport5

```
sudo apt-get update
sudo apt-get install build-essential make qt5-default qtcreator qtdeclarative5-dev libqt5serialport5-dev 
sudo apt-get install -y libqt5printsupport5 
```
<br>
