using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// Handshaking protocol, make sure Api Compatability Level is ".NET 2.0" 
using System.IO.Ports; 

public class CubeData : MonoBehaviour {

    // Update this line with your serial port name and baud rate
    SerialPort sp = new SerialPort("COM3", 9600);

	void Start () {

        // Opens the serial port and sets a time of 1 millisecond to wait for a timeout error
        sp.Open();
        sp.ReadTimeout = 1;

	}
	
	void Update () {
        
        // Handshake for better performance
        if (sp.IsOpen)
        {
            try
            {
                SerialEvent(sp);
            }
            catch (System.Exception)
            {

            }
        }
        
	}

    // Put whatever interaction you want here
    void SerialEvent(SerialPort sp)
    {
        string value = sp.ReadLine();
        string[] angles = value.Split(',');

        // Check if all values are received, add more array values for more sensors
        if (angles[0] != "" && angles[1] != "")
        {
            float xRot = float.Parse(angles[0]);
            float yRot = float.Parse(angles[1]);
            transform.localEulerAngles = new Vector3(xRot, yRot, 0);
        }
    }

}
