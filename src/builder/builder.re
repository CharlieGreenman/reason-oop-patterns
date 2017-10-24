type userBuilderType = {
  mutable name: string,
  mutable age: int,
  mutable phone: string,
  mutable address: string
};

module BuilderPattern = {
  let builder = {
    name: "asd",
    age: 0,
    phone: "",
    address: ""
  };
  let setName = fun name => builder.name = name;
  let getName = builder.name;
};

BuilderPattern.setName("Charles");
Js.log(BuilderPattern.getName);
