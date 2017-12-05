type deviceSettings = {.
   volumeLevel: int
 };

class virtual entertainmentDeviceVirtual = {
  as self;
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

  pub virtual buttonSevenPressed: unit;
  pub virtual buttonEightPressed: unit;
};

class entertainmentDevice = {
  inherit class entertainmentDeviceVirtual;
};
