module type User = {
  type t;
  let name: string;

  let create : (~name:string) => t;
};

module type UserBuilder = {
  type t;
  type user;

  let setName: (t,string) => unit;
  let getName: t => string;
};

module BuilderPattern = (User: User) => {
  type t = {
    mutable name: string
  };
  type user = {
    mutable name: string
  };

  let setName = (builder, name) => builder.name = name;
  let getName = (builder) => builder.name;

  let getResult = (builder) =>
    User.create(~name=builder.name)
};

module Director = (User: User, Builder: UserBuilder with type user = User.t) => {
  let construct = (builder) => {
    Builder.setName(builder, "Charles");
  };
};

module ConcreteUser = {
  let name:string = "Charles";
  type t = {
    mutable name: string
  };
  let create = (~name:string) => {
    name: "fake name"
  };

};

module MyBuilder = BuilderPattern(ConcreteUser);

module DisplayName = Director(ConcreteUser, MyBuilder);


/* Js.log(BuilderPattern.getName); */
