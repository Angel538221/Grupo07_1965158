#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include<stdlib.h>
#include <vector>


using namespace std;

//declaracion de variables

int* item, * ano, registros, desicion, n;
string* nombre, * clasificacion, * descripcion, * caracteristicas, * genero;
float* precio, * iva, * total;

//funciones de void 
void alta();
void eliminar();
void modificar();
void lista();
void archivos();

int main()
{
	int opc;
	printf("\t ***CRAZYDOOM GAMER STORE***\n");
	printf("1.Agregar Articulo\n, 2.Modificar Articulo\n, 3.Eliminar Articulo\n, 4.Listas Artucilos\n, 5.Limpiar pantalla\n, 6.Salir\n");
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1:

		alta();
		return main();
		break;

	case 2:

		modificar();
		return main();
		break;

	case 3:

		eliminar();
		return main();
		break;

	case 4:

		lista();
		return main();
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:
		archivos();
		EXIT_SUCCESS;
		break;

	default:
		printf("opcion no valida \n");
		system("pause");
		return main();
		break;


	}


}

void alta()
{
	printf("cuantos registros desea dar de alta \n");
	scanf_s("%d", &registros);
	item = new int[registros];
	ano = new int[registros];
	nombre = new string[registros];
	clasificacion = new string[registros];
	caracteristicas = new string[registros];
	genero = new string[registros];
	descripcion = new string[registros];
	precio = new float[registros];
	iva = new float[registros];
	total = new float[registros];
	//arreglo


	for (int i = 0; i < registros; i++)
	{
		printf("ingrese el articulo \n");
		scanf_s("%d", &item[i]);
		printf("\n ingrese el año \n");
		scanf_s("%d", &ano[i]);
		cin.ignore();
		printf("Ingrese el nombre del videojuego \n");
		getline(cin, nombre[i]);
		printf("Ingrese la clasificacion \n");
		getline(cin, clasificacion[i]);
		printf("ingrese las caractereisticas \n");
		getline(cin, caracteristicas[i]);
		printf("ingrese el genero del videojuego \n");
		getline(cin, genero[i]);
		printf("ingrese la descripcion \n");
		getline(cin, descripcion[i]);
		printf("ingrese el precio del videojuego \n");
		scanf_s("%f", &precio[i]);
		iva[i] = precio[i] * .16;
		total[i] = precio[i] + iva[i];
		if ((registros - 1) == i) {
			printf("quieres dar de alta otro articulo? \n 1. Si \n Otro numero. No");
			scanf_s("%d", &desicion);
			if (desicion == 1)
			{
				registros = registros + 1;
			}
		}
		cout << "\n";

	}
}

void modificar()
{
	int modificar;
	printf("ingrese el num de articulo a modificar \n");
	scanf_s("%d", &modificar);

	for (int i = 0; i < registros; i++)
	{
		if (modificar == item[i])
		{
			printf("\n ingrese el año \n");
			scanf_s("%d", &ano[i]);
			cin.ignore();
			printf("Ingrese el nombre del videojuego \n");
			getline(cin, nombre[i]);
			printf("Ingrese la clasificacion \n");
			getline(cin, clasificacion[i]);
			printf("ingrese las caractereisticas \n");
			getline(cin, caracteristicas[i]);
			printf("ingrese el genero del videojuego \n");
			getline(cin, genero[i]);
			printf("ingrese la descripcion \n");
			getline(cin, descripcion[i]);
			printf("ingrese el precio del videojuego \n");
			scanf_s("%f", &precio[i]);
			iva[i] = precio[i] * .16;
			total[i] = precio[i] + iva[i];
		}

	}


}

void eliminar()
{
	int eliminar;
	printf("ingrese el num de articulo que desea eliminar \n");
	scanf_s("%d", &eliminar);
	for (int i = 0; i < registros; i++)
	{
		if (eliminar == item[i])
		{
			item[i] = 0;
			ano[i] = 0;
			nombre[i] = " ";
			clasificacion[i] = " ";
			caracteristicas[i] = " ";
			genero[i] = " ";
			descripcion[i] = "";
			precio[i] = 0;
			iva[i] = 0;
			total[i] = 0;

		}
	}
}

void lista()
{
	int op2;
	string busc;
	printf("1. Clasificacion \n, 2.Genero \n");
	scanf_s("%d", &op2);
	switch (op2)
	{
	case 1:
		printf("ingrese la clasificacion a buscar \n");
		cin >> busc;
		for (int i = 0; i < registros; i++)
		{
			if (clasificacion[i] == busc);
			{
				printf("articulo: %d", item[i]);
				cout << "\n";
				printf("año: %d", ano[i]);
				cout << "\n";
				printf("videojuego: %s", nombre[i].c_str());
				cout << "\n";
				printf("clasificaccion: %s", clasificacion[i].c_str());
				cout << "\n";
				printf("genero: %s", genero[i].c_str());
				cout << "\n";
				printf("caracteristicas: %s", caracteristicas[i].c_str());
				cout << "\n";
				printf("descripcion: %s", descripcion[i].c_str());
				cout << "\n";
				printf("subtotal: %f", precio[i]);
				cout << "\n";
				printf("iva: %f", iva[i]);
				cout << "\n";
				printf("total: %f", total[i]);
			}
		}
		break;

	case 2:
		printf("ingrese la clasificacion a buscar \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (clasificacion[i] == busc);
			{
				printf("articulo: %d", item[i]);
				cout << "\n";
				printf("año: %d", ano[i]);
				cout << "\n";
				printf("videojuego: %s", nombre[i].c_str());
				cout << "\n";
				printf("clasificaccion: %s", clasificacion[i].c_str());
				cout << "\n";
				printf("genero: %s", genero[i].c_str());
				cout << "\n";
				printf("caracteristicas: %s", caracteristicas[i].c_str());
				cout << "\n";
				printf("descripcion: %s", descripcion[i].c_str());
				cout << "\n";
				printf("subtotal: %f", precio[i]);
				cout << "\n";
				printf("iva: %f", iva[i]);
				cout << "\n";
				printf("total: %f", total[i]);
			}
		}
		break;


	}
}

void archivos()
{
	fstream archivo("ARCHIVO.txt");
	string nombrearchivo;
	float texto;
	string texto2;

	nombrearchivo = "ARCHIVO";

	archivo.open("ARCHIVO.txt", ios::out);

	if (archivo.fail())
	{
		cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}

	for (int i = 0;i < registros;i++)
	{
		if (item[i] == 0)
		{
			archivo << "REGISTRO ELIMINADO" << "\t" << i + 1 << "\n";
		}
		else
		{
			texto = item[i];
			archivo << "Articulo" << "\t " << texto << "\t" << "\n";
			texto2 = nombre[i];
			archivo << "Nombre" << "\t " << texto2 << "\t" << "\n";
			texto2 = descripcion[i];
			archivo << "Descripcion" << "\t " << texto2 << "\t" << "\n";
			texto2 = genero[i];
			archivo << "Genero" << "\t " << texto2 << "\t " << "\n";
			texto2 = clasificacion[i];
			archivo << "Clasificacion" << "\t " << texto2 << "\t " << "\n";
			texto2 = caracteristicas[i];
			archivo << "Caracteristicas" << "\t " << texto2 << "\t " << "\n";
			texto = ano[i];
			archivo << "Año" << "\t " << texto << "\t" << "\n";
			texto = precio[i];
			archivo << "Precio" << "\t " << texto << "\t " << "\n";
			texto = iva[i];
			archivo << "Iva" << "\t " << texto << "\t " << "\n";
			texto = total[i];
			archivo << "Total" << "\t " << texto << "\t " << "\n";

		}
	}


	archivo.close();
}

