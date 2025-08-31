/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) YEAR OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "codedFunctionObjectTemplate.H"
#include "fvCFD.H"
#include "unitConversion.H"
#include "addToRunTimeSelectionTable.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

defineTypeNameAndDebug(setDeltaTFunctionObject, 0);

addRemovableToRunTimeSelectionTable
(
    functionObject,
    setDeltaTFunctionObject,
    dictionary
);


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

extern "C"
{
    // dynamicCode:
    // SHA1 = 6fd834e7983a7b7d1e7e18e2effde4312afe577b
    //
    // unique function name that can be checked if the correct library version
    // has been loaded
    void setDeltaT_6fd834e7983a7b7d1e7e18e2effde4312afe577b(bool load)
    {
        if (load)
        {
            // code that can be explicitly executed after loading
        }
        else
        {
            // code that can be explicitly executed before unloading
        }
    }
}


// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * Private Member Functions  * * * * * * * * * * * //

const fvMesh& setDeltaTFunctionObject::mesh() const
{
    return refCast<const fvMesh>(obr_);
}


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

setDeltaTFunctionObject::setDeltaTFunctionObject
(
    const word& name,
    const Time& runTime,
    const dictionary& dict
)
:
    functionObjects::regionFunctionObject(name, runTime, dict)
{
    read(dict);
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

setDeltaTFunctionObject::~setDeltaTFunctionObject()
{}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

bool setDeltaTFunctionObject::read(const dictionary& dict)
{
    if (false)
    {
        Info<<"read setDeltaT sha1: 6fd834e7983a7b7d1e7e18e2effde4312afe577b\n";
    }

//{{{ begin code
    
//}}} end code

    return true;
}


Foam::wordList setDeltaTFunctionObject::fields() const
{
    if (false)
    {
        Info<<"fields setDeltaT sha1: 6fd834e7983a7b7d1e7e18e2effde4312afe577b\n";
    }

    wordList fields;
//{{{ begin code
    
//}}} end code

    return fields;
}


bool setDeltaTFunctionObject::execute()
{
    if (false)
    {
        Info<<"execute setDeltaT sha1: 6fd834e7983a7b7d1e7e18e2effde4312afe577b\n";
    }

//{{{ begin code
    #line 72 "/home/nfsl/Desktop/Manav10/kivaTest/system/controlDict/functions/setDeltaT"
const Time& runTime = mesh().time();
            if (runTime.userTimeValue() >= -15.0)
            {
                const_cast<Time&>(runTime).setDeltaT
                (
                    runTime.userTimeToTime(0.025)
                );
            }
//}}} end code

    return true;
}


bool setDeltaTFunctionObject::write()
{
    if (false)
    {
        Info<<"write setDeltaT sha1: 6fd834e7983a7b7d1e7e18e2effde4312afe577b\n";
    }

//{{{ begin code
    
//}}} end code

    return true;
}


bool setDeltaTFunctionObject::end()
{
    if (false)
    {
        Info<<"end setDeltaT sha1: 6fd834e7983a7b7d1e7e18e2effde4312afe577b\n";
    }

//{{{ begin code
    
//}}} end code

    return true;
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

