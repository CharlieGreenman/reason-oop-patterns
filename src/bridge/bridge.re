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
  pub device_feedback = (~start=?, ~stop=?, f) => {
    if (self#contains(ev.mouse_x, ev.mouse_y)) {

    }
  };

  pub virtual buttonSevenPressed: unit;
  pub virtual buttonEightPressed: unit;
};

class entertainmentDevice = {
  inherit class entertainmentDeviceVirtual;
};
