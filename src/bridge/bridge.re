type deviceSettings = {.
   deviceState: int,
   maxSetting: int,
   volumeLevel: int
 };

class virtual entertainmentDeviceVirtual = {
  pub virtual buttonFivePressed: unit;
  pub virtual buttonSixPressed: unit;
  pub virtual deviceFeedback: unit;
  pub virtual buttonSevenPressed: unit;
  pub virtual buttonEightPressed: unit;
};

class entertainmentDevice = {
  inherit class entertainmentDeviceVirtual;
  pub deviceFeedback () => {
    Js.log("helllo");
  }
};
