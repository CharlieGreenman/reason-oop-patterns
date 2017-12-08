class virtual entertainmentDeviceVirtual = {
  as self;
  val virtual volumeLevel: int;
  val virtual deviceState: int;
  val virtual maxSetting: int;

  pub virtual buttonFivePressed: unit;
  pub virtual buttonSixPressed: unit;
  pub device_feedback = () => {
    if(self#deviceState > self#maxSetting || self#deviceState < 0) {
      Js.log("works");
    }
  };
  pub buttonSevenPressed = () => {
    self#volumeLevel + 1;1
  };
  pub buttonEightPressed = () => {
    self#volumeLevel - 1;
  };
};

class entertainmentDevice = {
  inherit class entertainmentDeviceVirtual;
  pub tVDevice(newDeviceState: int, newMaxSetting: int) {
    val deviceState = newDeviceState;
    val maxSetting = newMaxSetting;
  };
  pub buttonFivePressed() {
    Js.log("Channel Down");
    deviceState + 1;
  };

  pub buttonSixPressed() {
    Js.log("Channel Up");
    deviceState - 1;
  };
  /* pub tVDevice = (newDeviceState:int, newMaxSetting:int) => {
    self#deviceState = newDeviceState;
    self#maxSetting = newMaxSetting;
  }; */
};
