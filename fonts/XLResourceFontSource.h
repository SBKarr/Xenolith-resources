/**
Copyright (c) 2022 Roman Katuntsev <sbkarr@stappler.org>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
**/

// Generated with FontGenerator (%STAPPLER_ROOT%/test/generators/FontGenerator)

#include "XLDefine.h"
#include "XLFontLibrary.h"

namespace stappler::xenolith::resources::fonts {

enum class FontName {
	None,
	OpenSans_Bold,
	OpenSans_BoldItalic,
	OpenSans_ExtraBold,
	OpenSans_ExtraBoldItalic,
	OpenSans_Italic,
	OpenSans_Light,
	OpenSans_LightItalic,
	OpenSans_Medium,
	OpenSans_MediumItalic,
	OpenSans_Regular,
	OpenSans_SemiBold,
	OpenSans_SemiBoldItalic,
	OpenSans_Condensed_Bold,
	OpenSans_Condensed_BoldItalic,
	OpenSans_Condensed_ExtraBold,
	OpenSans_Condensed_ExtraBoldItalic,
	OpenSans_Condensed_Italic,
	OpenSans_Condensed_Light,
	OpenSans_Condensed_LightItalic,
	OpenSans_Condensed_Medium,
	OpenSans_Condensed_MediumItalic,
	OpenSans_Condensed_Regular,
	OpenSans_Condensed_SemiBold,
	OpenSans_Condensed_SemiBoldItalic,
	OpenSans_SemiCondensed_Bold,
	OpenSans_SemiCondensed_BoldItalic,
	OpenSans_SemiCondensed_ExtraBold,
	OpenSans_SemiCondensed_ExtraBoldItalic,
	OpenSans_SemiCondensed_Italic,
	OpenSans_SemiCondensed_Light,
	OpenSans_SemiCondensed_LightItalic,
	OpenSans_SemiCondensed_Medium,
	OpenSans_SemiCondensed_MediumItalic,
	OpenSans_SemiCondensed_Regular,
	OpenSans_SemiCondensed_SemiBold,
	OpenSans_SemiCondensed_SemiBoldItalic,
	Roboto_Black,
	Roboto_BlackItalic,
	Roboto_Bold,
	Roboto_BoldItalic,
	Roboto_Italic,
	Roboto_Light,
	Roboto_LightItalic,
	Roboto_Medium,
	Roboto_MediumItalic,
	Roboto_Regular,
	Roboto_Thin,
	Roboto_ThinItalic,
	RobotoCondensed_Bold,
	RobotoCondensed_BoldItalic,
	RobotoCondensed_Italic,
	RobotoCondensed_Light,
	RobotoCondensed_LightItalic,
	RobotoCondensed_Regular,
	RobotoMono_Bold,
	RobotoMono_BoldItalic,
	RobotoMono_ExtraLight,
	RobotoMono_ExtraLightItalic,
	RobotoMono_Italic,
	RobotoMono_Light,
	RobotoMono_LightItalic,
	RobotoMono_Medium,
	RobotoMono_MediumItalic,
	RobotoMono_Regular,
	RobotoMono_SemiBold,
	RobotoMono_SemiBoldItalic,
	RobotoMono_Thin,
	RobotoMono_ThinItalic
};

BytesView getFont(FontName);
StringView getFontName(FontName);

void addFonts(font::FontController::Builder &);

}
