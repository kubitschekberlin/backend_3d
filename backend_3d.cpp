// backend_3d.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <grpcpp/grpcpp.h>
#include "model_3d.pb.h"  // Generiert durch `protoc`
#include "model_3d.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

class Model3DImpl final : public Model3D::Service
{
	Status Version(ServerContext* context, const VersionNumber* request, VersionNumber* response)
	{
		response->set_number(1);
		std::cout << "Version() called" << std::endl;
		return Status::OK;
	}
	Status Convert(ServerContext* context, const Model* request, Model* response)
	{
		response->CopyFrom(*request);
		std::cout << "Convert() called" << std::endl;
		return Status::OK;
	}
};

void RunServer() 
{
	std::string server_address("0.0.0.0:50051");
	Model3DImpl service;

	ServerBuilder builder;
	builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
	builder.RegisterService(&service);
	
	// Setzen Sie die maximale Größe der zu sendenden und zu empfangenden Nachrichten
	constexpr int mb{ 50 };
	builder.SetMaxSendMessageSize(1024 * 1024 * mb); // 100 MB
	builder.SetMaxReceiveMessageSize(1024 * 1024 * mb); // 100 MB

	std::unique_ptr<Server> server(builder.BuildAndStart());
	std::cout << "Server listening on " << server_address << std::endl;

	server->Wait();
}

int main() 
{
	RunServer();
	return 0;
}