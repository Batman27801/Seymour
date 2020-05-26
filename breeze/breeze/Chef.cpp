#include "Chef.h"
#include <fstream>
#include <string.h>

chef::chef()
{
    salary = 25000;
    workingOrder = 0;
}

bool chef::setID(string id)
{
    try
    {
        chef C;
        int f = 0, comp;
        ifstream is("chef.dat", ios::binary);
        is.seekg(0);
        bool empty = (is.get(), is.eof());
        if (empty != 1)
        {
            is.seekg(0);
            while (!is.eof())
            {
                is.read((char*)&C, sizeof(C));
                if (C.getID() == id)
                {
                    f = 1;
                    break;
                }
                else continue;
            }
        }
        if (f == 0)
        {
            if (id[0] == 'C' && id[1] == '_')
            {
                strcpy(Staaf_ID, id.c_str());
                return true;
            }
            else
            {
                throw(1);
            }
        }
        else
        {
            throw(1);
        }
        is.close();
    }
    catch (...)
    {
        strcpy(Staaf_ID, "");
        return false;
    }
}

bool chef::setPass(string p)
{
    try
    {
        chef C;
        int f = 0, size = p.size();
        ifstream is("chef.dat", ios::binary);
        is.seekg(0);
        bool empty = (is.get(), is.eof());
        if (empty == false)
        {
            is.seekg(0);
            while (!is.eof())
            {
                is.read((char*)&C, sizeof(C));
                if (C.getPass() == p.c_str())
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0)
        {
            if (size >= 8)
            {
                strcpy(Staaf_Password, p.c_str());
                return true;
            }
            else
            {
                throw(1);
            }
        }
        else if (f == 0);
        {

            throw(1);
        }
        is.close();
    }
    catch (...)
    {
        strcpy(Staaf_Password, "");
        return false;
    }
}
bool chef::addworkingorder()
{
    int pos, flag = 0;
    fstream fs;
    fs.open("Orders.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&O, sizeof(O));
        if (O.getstatus() == confirmed);
        {
            flag = 1;
            workingOrder = O.getOrderCode();
            O.setstatus(waiting);
            fs.seekp(pos);
            fs.write((char*)&O, sizeof(O));
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else if (flag == 0) return false;
}
long int chef::getworkingorder()
{
    return workingOrder;
}
bool chef::setorderasmaking()
{
    int pos, flag = 0;
    fstream fs;
    fs.open("Orders.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&O, sizeof(O));
        if (O.getOrderCode() == workingOrder)
        {
            flag = 1;
            fs.seekp(pos);
            fs.write((char*)&O, sizeof(O));
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else if (flag == 0) return false;
}
bool chef::setorderready()
{
    int pos, flag = 0;
    fstream fs;
    fs.open("Orders.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&O, sizeof(O));
        if (O.getOrderCode() == workingOrder)
        {
            flag = 1;
            O.setstatus(ready_for_delivery);
            workingOrder = 0;
            fs.seekp(pos);
            fs.write((char*)&O, sizeof(O));
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else if (flag == 0) return false;
}
