#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;


struct destination{
	string ip;
	string port;
	destination(string c_ip,string c_port):
				ip(c_ip),port(c_port){ }
};

struct connection{
	string ip;
	string port;
	connection(string d_ip,string d_port):
			ip(d_ip),port(d_port){ }
};

connection connect(destination* dest){
	std::shared_ptr<connection> conn(new connection(dest->ip,dest->port));
	cout << "Now shared_ptr has : " << conn.use_count() << endl;
	return *conn;
}

void disconnect(connection c){
	cout << "connect close : " << c.ip << c.port << endl;
}



void f(destination &d){
	connection c = connect(&d);
	std::shared_ptr<connection> p(&c,[](connection *p){ disconnect(*p);});

}

int main(){
	destination dest("202.118.176.67", "3316");
    f(dest);
	return 0;
}