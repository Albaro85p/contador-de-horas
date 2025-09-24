#include<iostream>
#include<iomanip>

int main(){
    double hora_1, hora_2, hora_3, hora_4;
    double resultado, resultado_2, total;
    char condition;

    std::cout<<"########Programa para calcular las horas trabajadas por un mecanico en su jornada laboral##########" <<std::endl;
    std::cout<<"########El programa finaliza cuando el usuario lo desee#########" <<std::endl;

    do
    {
    std::cout<<"Ingrese la hora que empezo a trabajar el mecanico: ";
    std::cin>>hora_1;
    std::cout<<"Ingrese la hora que paro a comer el mecanico: ";
    std::cin>>hora_2;
    resultado = hora_2 - hora_1;

    std::cout<<"Íngrese la hora que se reincoporo el mecanico: ";
    std::cin>>hora_3;
    std::cout<<"Íngrese la hora que finalizo la jornada el mecanico: ";
    std::cin>>hora_4;
    resultado_2 = hora_4 - hora_3;

    total = resultado + resultado_2;

    int horas = static_cast<int>(total);
    int minutos = static_cast<int>((total - horas) * 60);

    std::cout<<"Las horas que ha hecho el mecanico fueron: "<<std::setfill('0') << std::setw(2) << horas << ":" << std::setfill('0') << std::setw(2) << minutos << std::endl;
    
    std::cout<<"Desea ingresar otro registro? Yes 'y' / No: 'n' ";
    std::cin>>condition;
    
    } while (condition == 'y' || condition == 'Y');
    std::cout<<"Fin del programa" <<std::endl;

    return 0;
}