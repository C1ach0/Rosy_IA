#include <iostream>
#include "Function.h"
#include <sqlite/sqlitelib.h>
#include <tensorflow/c/c_api.h>
using namespace sqlitelib;

auto db = Sqlite("./brain.bd");

int main(int argc, char* argv[])
{
    //std::string tts = "ok";
    std::string Vers = TF_Version();
    std::cout << " Version of TensorFlow : " << Vers << std::endl;
    //PFunc::TTS("Version de TensorFlow : " + Vers);

    //db.execute(R"SQL SCRIPT");
    //PFunc::TTS("Fin du programme.");
}
