class virtual entertainmentDeviceVirtual = {
  as self;
  pub virtual volumeLevel: int;
  pub virtual deviceState: int;
  pub virtual maxSetting: int;
  pub virtual maxSetting: int;

  pub virtual buttonFivePressed: unit;
  pub virtual buttonSixPressed: unit;
  pub device_feedback = () => {
    if(self#deviceState > self#maxSetting || self#deviceState < 0) {
      Js.log("works");
    }
  };
  pub buttonSevenPressed = () => {
    self#volumeLevel + 1;
  };
  pub buttonEightPressed = () => {
    self#volumeLevel - 1;
  };
};

class entertainmentDevice = {
  inherit class entertainmentDeviceVirtual;
  pub volumeLevel = 0;
};
