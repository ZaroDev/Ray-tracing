#pragma once

#include "glm/glm.hpp"
#include <vector>

struct Material
{
	glm::vec3 Albedo{ 1.0f };
	float Roughness = 1.0f;
	float Metallic = 0.0f;
	glm::vec3 EmissionColor{ 0.f };
	float EmissionPower = 0.f;
	
	glm::vec3 GetEmission() const { return EmissionColor * EmissionPower; };
};


struct Sphere
{
	glm::vec3 Position{ 0.0f};
	float Radius = 1.0f;

	int MaterialIndex = 0;
};

struct Scene
{
	std::vector<Sphere> Spheres;
	std::vector<Material> Materials;
};