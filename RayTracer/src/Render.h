#pragma once

#include "Walnut/Image.h"

#include <memory>

class Render
{
public:
	Render() = default;

	void Render();
private:
	std::shared_ptr<Image> m_Image;
};
