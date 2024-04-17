$env:Path = "$env:Path;C:\code\backend_3d\vcpkg_installed\x64-windows\vcpkg\blds\protobuf\x64-windows-rel"
$env:Path = "$env:Path;C:\code\backend_3d\vcpkg_installed\x64-windows\vcpkg\blds\grpc\x64-windows-rel"
#Write "$env:Path"
protoc --cpp_out=. --proto_path=.\ ./model_3d.proto
protoc --grpc_out=./ --plugin=protoc-gen-grpc="C:\code\backend_3d\vcpkg_installed\x64-windows\vcpkg\blds\grpc\x64-windows-rel\grpc_cpp_plugin.exe" --proto_path=./ ./model_3d.proto

                        