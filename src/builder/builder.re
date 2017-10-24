type userBuilderType = {
  mutable name: string,
  mutable age: int,
  mutable phone: string,
  mutable address: string
};

module BuilderPattern = {
  let setName = fun name => name = name;
  let getName = name;
};

BuilderPattern.setName("Charles");
Js.log(BuilderPattern.getName);
