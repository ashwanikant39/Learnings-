create table user(
    id int primary key AUTO_INCREMENT,
    name varchar (255),
    contactNumber varchar(20),
    email varchar(50),
    password varchar(255),
    status varchar(20),
    role varchar(20),
    UNIQUE (email)
);

insert into user(name, contactNumber, email, password, status, role) values('Admin', '123123123123', 'ashwani.kant@gmail.com', 'admin', 'true', 'admin' );