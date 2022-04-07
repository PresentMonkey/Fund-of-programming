
struct lightPins{
	int green;
  	int yellow;
  	int red;
};

struct trafficLightPins{
	lightPins setOne;
  	lightPins setTwo;
  	lightPins setThree;
    lightPins setFour;
};

trafficLightPins datapins{
    {12, 11, 10}, {9, 8, 7}, {6,5,4}, {3,2,A0}

}