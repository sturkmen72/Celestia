// convert3ds.h
//
// Copyright (C) 2004-2010, Chris Laurel <claurel@gmail.com>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// Functions for converting a 3DS scene into a Celestia model (cmod)

#pragma once

#include <string>

#include <cel3ds/3dsmodel.h>
#include <celmodel/model.h>
#include <celmodel/modelfile.h>


extern void Convert3DSMesh(cmod::Model& model,
                           M3DTriangleMesh& mesh3ds,
                           const M3DScene& scene,
                           const std::string& meshName);
extern cmod::Model* Convert3DSModel(const M3DScene& scene,
                                    cmod::HandleGetter handleGetter);
