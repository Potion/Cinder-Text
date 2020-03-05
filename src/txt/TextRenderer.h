#pragma once

#include <string>
#include <cinder/Vector.h>

#include "txt/TextLayout.h"

namespace txt
{
	class Renderer;
	typedef std::shared_ptr<Renderer> RendererRef;

	class Renderer
	{
		public:
			Renderer() {}

			//void draw( const Layout& layout )
			//{
			//	mLayout = layout;
			//	draw();
			//}

			virtual void draw() = 0;

			virtual void setLayout( const Layout& layout ) { mLayout = layout; }
			virtual const Layout& getLayout() { return mLayout; }

		protected:
			Layout mLayout;
	};
}