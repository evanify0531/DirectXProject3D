#pragma once
#include "Geometry.h"
#include "VertexData.h"

class GeometryHelper
{
public:
	static void CreateQuad(shared_ptr<Geometry<VertexColorData>> geometry, Color color)
	{
		vector<VertexColorData> vtx;
		vtx.resize(4);

		vtx[0].position = Vec3(-0.5f, -0.5f, 0.f);
		vtx[0].color = color;
		vtx[1].position = Vec3(-0.5f, 0.5f, 0.f);
		vtx[1].color = color;
		vtx[2].position = Vec3(0.5f, -0.5f, 0.f);
		vtx[2].color = color;
		vtx[3].position = Vec3(0.5f, 0.5f, 0.f);
		vtx[3].color = color;
		geometry->SetVertices(vtx);

		//1 3
		//0 2
		//clock-wise
		vector<uint32> idx = { 0, 1, 2, 2, 1, 3 };
		geometry->SetIndices(idx);
	}
};

