#include "Render.h"

void Renderer::Render()
{
}

void Renderer::OnResize(uint32_t width, uint32_t height)
{
	m_Image->Resize(width, height);

	if (!m_Image || width != m_Image->GetWidth() || height != m_Image->GetHeight())
	{
		m_Image = std::make_shared<Image>(m_ViewportWidth, m_ViewportHeight, ImageFormat::RGBA);
		delete[] m_ImageData;
		m_ImageData = new uint32_t[m_ViewportWidth * m_ViewportHeight];
	}
}
