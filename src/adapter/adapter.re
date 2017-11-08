class virtual screenSize = {
  as _;
  pub virtual windowWidth: unit => int;
};

class macWindowSize (width:int) = {
  as _;
  inherit class screenSize;
  pub windowWidth = () => width;
};
