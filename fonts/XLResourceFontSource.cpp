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
#include "XLResourceFontSource.h"
#include "XLFontLibrary.h"

#include "XLResourceFont-OpenSans-Bold.cc"
#include "XLResourceFont-OpenSans-BoldItalic.cc"
#include "XLResourceFont-OpenSans-ExtraBold.cc"
#include "XLResourceFont-OpenSans-ExtraBoldItalic.cc"
#include "XLResourceFont-OpenSans-Italic.cc"
#include "XLResourceFont-OpenSans-Light.cc"
#include "XLResourceFont-OpenSans-LightItalic.cc"
#include "XLResourceFont-OpenSans-Medium.cc"
#include "XLResourceFont-OpenSans-MediumItalic.cc"
#include "XLResourceFont-OpenSans-Regular.cc"
#include "XLResourceFont-OpenSans-SemiBold.cc"
#include "XLResourceFont-OpenSans-SemiBoldItalic.cc"
#include "XLResourceFont-OpenSans_Condensed-Bold.cc"
#include "XLResourceFont-OpenSans_Condensed-BoldItalic.cc"
#include "XLResourceFont-OpenSans_Condensed-ExtraBold.cc"
#include "XLResourceFont-OpenSans_Condensed-ExtraBoldItalic.cc"
#include "XLResourceFont-OpenSans_Condensed-Italic.cc"
#include "XLResourceFont-OpenSans_Condensed-Light.cc"
#include "XLResourceFont-OpenSans_Condensed-LightItalic.cc"
#include "XLResourceFont-OpenSans_Condensed-Medium.cc"
#include "XLResourceFont-OpenSans_Condensed-MediumItalic.cc"
#include "XLResourceFont-OpenSans_Condensed-Regular.cc"
#include "XLResourceFont-OpenSans_Condensed-SemiBold.cc"
#include "XLResourceFont-OpenSans_Condensed-SemiBoldItalic.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-Bold.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-BoldItalic.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-ExtraBold.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-ExtraBoldItalic.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-Italic.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-Light.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-LightItalic.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-Medium.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-MediumItalic.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-Regular.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-SemiBold.cc"
#include "XLResourceFont-OpenSans_SemiCondensed-SemiBoldItalic.cc"
#include "XLResourceFont-Roboto-Black.cc"
#include "XLResourceFont-Roboto-BlackItalic.cc"
#include "XLResourceFont-Roboto-Bold.cc"
#include "XLResourceFont-Roboto-BoldItalic.cc"
#include "XLResourceFont-Roboto-Italic.cc"
#include "XLResourceFont-Roboto-Light.cc"
#include "XLResourceFont-Roboto-LightItalic.cc"
#include "XLResourceFont-Roboto-Medium.cc"
#include "XLResourceFont-Roboto-MediumItalic.cc"
#include "XLResourceFont-Roboto-Regular.cc"
#include "XLResourceFont-Roboto-Thin.cc"
#include "XLResourceFont-Roboto-ThinItalic.cc"
#include "XLResourceFont-RobotoCondensed-Bold.cc"
#include "XLResourceFont-RobotoCondensed-BoldItalic.cc"
#include "XLResourceFont-RobotoCondensed-Italic.cc"
#include "XLResourceFont-RobotoCondensed-Light.cc"
#include "XLResourceFont-RobotoCondensed-LightItalic.cc"
#include "XLResourceFont-RobotoCondensed-Regular.cc"
#include "XLResourceFont-RobotoMono-Bold.cc"
#include "XLResourceFont-RobotoMono-BoldItalic.cc"
#include "XLResourceFont-RobotoMono-ExtraLight.cc"
#include "XLResourceFont-RobotoMono-ExtraLightItalic.cc"
#include "XLResourceFont-RobotoMono-Italic.cc"
#include "XLResourceFont-RobotoMono-Light.cc"
#include "XLResourceFont-RobotoMono-LightItalic.cc"
#include "XLResourceFont-RobotoMono-Medium.cc"
#include "XLResourceFont-RobotoMono-MediumItalic.cc"
#include "XLResourceFont-RobotoMono-Regular.cc"
#include "XLResourceFont-RobotoMono-SemiBold.cc"
#include "XLResourceFont-RobotoMono-SemiBoldItalic.cc"
#include "XLResourceFont-RobotoMono-Thin.cc"
#include "XLResourceFont-RobotoMono-ThinItalic.cc"

namespace stappler::xenolith::resources::fonts {

BytesView getFont(FontName name) {
	switch (name) {
	case FontName::None: return BytesView(); break;
	case FontName::OpenSans_Bold: return BytesView(s_font_OpenSans_Bold, 85230); break;
	case FontName::OpenSans_BoldItalic: return BytesView(s_font_OpenSans_BoldItalic, 88126); break;
	case FontName::OpenSans_ExtraBold: return BytesView(s_font_OpenSans_ExtraBold, 86221); break;
	case FontName::OpenSans_ExtraBoldItalic: return BytesView(s_font_OpenSans_ExtraBoldItalic, 89108); break;
	case FontName::OpenSans_Italic: return BytesView(s_font_OpenSans_Italic, 91192); break;
	case FontName::OpenSans_Light: return BytesView(s_font_OpenSans_Light, 87222); break;
	case FontName::OpenSans_LightItalic: return BytesView(s_font_OpenSans_LightItalic, 91592); break;
	case FontName::OpenSans_Medium: return BytesView(s_font_OpenSans_Medium, 87860); break;
	case FontName::OpenSans_MediumItalic: return BytesView(s_font_OpenSans_MediumItalic, 91623); break;
	case FontName::OpenSans_Regular: return BytesView(s_font_OpenSans_Regular, 87511); break;
	case FontName::OpenSans_SemiBold: return BytesView(s_font_OpenSans_SemiBold, 87346); break;
	case FontName::OpenSans_SemiBoldItalic: return BytesView(s_font_OpenSans_SemiBoldItalic, 91417); break;
	case FontName::OpenSans_Condensed_Bold: return BytesView(s_font_OpenSans_Condensed_Bold, 86557); break;
	case FontName::OpenSans_Condensed_BoldItalic: return BytesView(s_font_OpenSans_Condensed_BoldItalic, 91272); break;
	case FontName::OpenSans_Condensed_ExtraBold: return BytesView(s_font_OpenSans_Condensed_ExtraBold, 85638); break;
	case FontName::OpenSans_Condensed_ExtraBoldItalic: return BytesView(s_font_OpenSans_Condensed_ExtraBoldItalic, 89915); break;
	case FontName::OpenSans_Condensed_Italic: return BytesView(s_font_OpenSans_Condensed_Italic, 92300); break;
	case FontName::OpenSans_Condensed_Light: return BytesView(s_font_OpenSans_Condensed_Light, 88397); break;
	case FontName::OpenSans_Condensed_LightItalic: return BytesView(s_font_OpenSans_Condensed_LightItalic, 93014); break;
	case FontName::OpenSans_Condensed_Medium: return BytesView(s_font_OpenSans_Condensed_Medium, 87877); break;
	case FontName::OpenSans_Condensed_MediumItalic: return BytesView(s_font_OpenSans_Condensed_MediumItalic, 92619); break;
	case FontName::OpenSans_Condensed_Regular: return BytesView(s_font_OpenSans_Condensed_Regular, 87720); break;
	case FontName::OpenSans_Condensed_SemiBold: return BytesView(s_font_OpenSans_Condensed_SemiBold, 87764); break;
	case FontName::OpenSans_Condensed_SemiBoldItalic: return BytesView(s_font_OpenSans_Condensed_SemiBoldItalic, 92656); break;
	case FontName::OpenSans_SemiCondensed_Bold: return BytesView(s_font_OpenSans_SemiCondensed_Bold, 88037); break;
	case FontName::OpenSans_SemiCondensed_BoldItalic: return BytesView(s_font_OpenSans_SemiCondensed_BoldItalic, 92757); break;
	case FontName::OpenSans_SemiCondensed_ExtraBold: return BytesView(s_font_OpenSans_SemiCondensed_ExtraBold, 87966); break;
	case FontName::OpenSans_SemiCondensed_ExtraBoldItalic: return BytesView(s_font_OpenSans_SemiCondensed_ExtraBoldItalic, 92433); break;
	case FontName::OpenSans_SemiCondensed_Italic: return BytesView(s_font_OpenSans_SemiCondensed_Italic, 93535); break;
	case FontName::OpenSans_SemiCondensed_Light: return BytesView(s_font_OpenSans_SemiCondensed_Light, 89113); break;
	case FontName::OpenSans_SemiCondensed_LightItalic: return BytesView(s_font_OpenSans_SemiCondensed_LightItalic, 93638); break;
	case FontName::OpenSans_SemiCondensed_Medium: return BytesView(s_font_OpenSans_SemiCondensed_Medium, 88874); break;
	case FontName::OpenSans_SemiCondensed_MediumItalic: return BytesView(s_font_OpenSans_SemiCondensed_MediumItalic, 93668); break;
	case FontName::OpenSans_SemiCondensed_Regular: return BytesView(s_font_OpenSans_SemiCondensed_Regular, 88621); break;
	case FontName::OpenSans_SemiCondensed_SemiBold: return BytesView(s_font_OpenSans_SemiCondensed_SemiBold, 88494); break;
	case FontName::OpenSans_SemiCondensed_SemiBoldItalic: return BytesView(s_font_OpenSans_SemiCondensed_SemiBoldItalic, 93622); break;
	case FontName::Roboto_Black: return BytesView(s_font_Roboto_Black, 101202); break;
	case FontName::Roboto_BlackItalic: return BytesView(s_font_Roboto_BlackItalic, 109748); break;
	case FontName::Roboto_Bold: return BytesView(s_font_Roboto_Bold, 100512); break;
	case FontName::Roboto_BoldItalic: return BytesView(s_font_Roboto_BoldItalic, 107327); break;
	case FontName::Roboto_Italic: return BytesView(s_font_Roboto_Italic, 105978); break;
	case FontName::Roboto_Light: return BytesView(s_font_Roboto_Light, 99104); break;
	case FontName::Roboto_LightItalic: return BytesView(s_font_Roboto_LightItalic, 106889); break;
	case FontName::Roboto_Medium: return BytesView(s_font_Roboto_Medium, 100810); break;
	case FontName::Roboto_MediumItalic: return BytesView(s_font_Roboto_MediumItalic, 108403); break;
	case FontName::Roboto_Regular: return BytesView(s_font_Roboto_Regular, 99560); break;
	case FontName::Roboto_Thin: return BytesView(s_font_Roboto_Thin, 97595); break;
	case FontName::Roboto_ThinItalic: return BytesView(s_font_Roboto_ThinItalic, 104441); break;
	case FontName::RobotoCondensed_Bold: return BytesView(s_font_RobotoCondensed_Bold, 99941); break;
	case FontName::RobotoCondensed_BoldItalic: return BytesView(s_font_RobotoCondensed_BoldItalic, 108160); break;
	case FontName::RobotoCondensed_Italic: return BytesView(s_font_RobotoCondensed_Italic, 106941); break;
	case FontName::RobotoCondensed_Light: return BytesView(s_font_RobotoCondensed_Light, 97709); break;
	case FontName::RobotoCondensed_LightItalic: return BytesView(s_font_RobotoCondensed_LightItalic, 105818); break;
	case FontName::RobotoCondensed_Regular: return BytesView(s_font_RobotoCondensed_Regular, 99180); break;
	case FontName::RobotoMono_Bold: return BytesView(s_font_RobotoMono_Bold, 59235); break;
	case FontName::RobotoMono_BoldItalic: return BytesView(s_font_RobotoMono_BoldItalic, 65895); break;
	case FontName::RobotoMono_ExtraLight: return BytesView(s_font_RobotoMono_ExtraLight, 60719); break;
	case FontName::RobotoMono_ExtraLightItalic: return BytesView(s_font_RobotoMono_ExtraLightItalic, 65570); break;
	case FontName::RobotoMono_Italic: return BytesView(s_font_RobotoMono_Italic, 65086); break;
	case FontName::RobotoMono_Light: return BytesView(s_font_RobotoMono_Light, 60514); break;
	case FontName::RobotoMono_LightItalic: return BytesView(s_font_RobotoMono_LightItalic, 65848); break;
	case FontName::RobotoMono_Medium: return BytesView(s_font_RobotoMono_Medium, 60118); break;
	case FontName::RobotoMono_MediumItalic: return BytesView(s_font_RobotoMono_MediumItalic, 66649); break;
	case FontName::RobotoMono_Regular: return BytesView(s_font_RobotoMono_Regular, 58642); break;
	case FontName::RobotoMono_SemiBold: return BytesView(s_font_RobotoMono_SemiBold, 60354); break;
	case FontName::RobotoMono_SemiBoldItalic: return BytesView(s_font_RobotoMono_SemiBoldItalic, 66601); break;
	case FontName::RobotoMono_Thin: return BytesView(s_font_RobotoMono_Thin, 59171); break;
	case FontName::RobotoMono_ThinItalic: return BytesView(s_font_RobotoMono_ThinItalic, 63009); break;
	}

	return BytesView();
}

StringView getFontName(FontName name) {
	switch (name) {
	case FontName::None: return StringView(); break;
	case FontName::OpenSans_Bold: return StringView("OpenSans_Bold"); break;
	case FontName::OpenSans_BoldItalic: return StringView("OpenSans_BoldItalic"); break;
	case FontName::OpenSans_ExtraBold: return StringView("OpenSans_ExtraBold"); break;
	case FontName::OpenSans_ExtraBoldItalic: return StringView("OpenSans_ExtraBoldItalic"); break;
	case FontName::OpenSans_Italic: return StringView("OpenSans_Italic"); break;
	case FontName::OpenSans_Light: return StringView("OpenSans_Light"); break;
	case FontName::OpenSans_LightItalic: return StringView("OpenSans_LightItalic"); break;
	case FontName::OpenSans_Medium: return StringView("OpenSans_Medium"); break;
	case FontName::OpenSans_MediumItalic: return StringView("OpenSans_MediumItalic"); break;
	case FontName::OpenSans_Regular: return StringView("OpenSans_Regular"); break;
	case FontName::OpenSans_SemiBold: return StringView("OpenSans_SemiBold"); break;
	case FontName::OpenSans_SemiBoldItalic: return StringView("OpenSans_SemiBoldItalic"); break;
	case FontName::OpenSans_Condensed_Bold: return StringView("OpenSans_Condensed_Bold"); break;
	case FontName::OpenSans_Condensed_BoldItalic: return StringView("OpenSans_Condensed_BoldItalic"); break;
	case FontName::OpenSans_Condensed_ExtraBold: return StringView("OpenSans_Condensed_ExtraBold"); break;
	case FontName::OpenSans_Condensed_ExtraBoldItalic: return StringView("OpenSans_Condensed_ExtraBoldItalic"); break;
	case FontName::OpenSans_Condensed_Italic: return StringView("OpenSans_Condensed_Italic"); break;
	case FontName::OpenSans_Condensed_Light: return StringView("OpenSans_Condensed_Light"); break;
	case FontName::OpenSans_Condensed_LightItalic: return StringView("OpenSans_Condensed_LightItalic"); break;
	case FontName::OpenSans_Condensed_Medium: return StringView("OpenSans_Condensed_Medium"); break;
	case FontName::OpenSans_Condensed_MediumItalic: return StringView("OpenSans_Condensed_MediumItalic"); break;
	case FontName::OpenSans_Condensed_Regular: return StringView("OpenSans_Condensed_Regular"); break;
	case FontName::OpenSans_Condensed_SemiBold: return StringView("OpenSans_Condensed_SemiBold"); break;
	case FontName::OpenSans_Condensed_SemiBoldItalic: return StringView("OpenSans_Condensed_SemiBoldItalic"); break;
	case FontName::OpenSans_SemiCondensed_Bold: return StringView("OpenSans_SemiCondensed_Bold"); break;
	case FontName::OpenSans_SemiCondensed_BoldItalic: return StringView("OpenSans_SemiCondensed_BoldItalic"); break;
	case FontName::OpenSans_SemiCondensed_ExtraBold: return StringView("OpenSans_SemiCondensed_ExtraBold"); break;
	case FontName::OpenSans_SemiCondensed_ExtraBoldItalic: return StringView("OpenSans_SemiCondensed_ExtraBoldItalic"); break;
	case FontName::OpenSans_SemiCondensed_Italic: return StringView("OpenSans_SemiCondensed_Italic"); break;
	case FontName::OpenSans_SemiCondensed_Light: return StringView("OpenSans_SemiCondensed_Light"); break;
	case FontName::OpenSans_SemiCondensed_LightItalic: return StringView("OpenSans_SemiCondensed_LightItalic"); break;
	case FontName::OpenSans_SemiCondensed_Medium: return StringView("OpenSans_SemiCondensed_Medium"); break;
	case FontName::OpenSans_SemiCondensed_MediumItalic: return StringView("OpenSans_SemiCondensed_MediumItalic"); break;
	case FontName::OpenSans_SemiCondensed_Regular: return StringView("OpenSans_SemiCondensed_Regular"); break;
	case FontName::OpenSans_SemiCondensed_SemiBold: return StringView("OpenSans_SemiCondensed_SemiBold"); break;
	case FontName::OpenSans_SemiCondensed_SemiBoldItalic: return StringView("OpenSans_SemiCondensed_SemiBoldItalic"); break;
	case FontName::Roboto_Black: return StringView("Roboto_Black"); break;
	case FontName::Roboto_BlackItalic: return StringView("Roboto_BlackItalic"); break;
	case FontName::Roboto_Bold: return StringView("Roboto_Bold"); break;
	case FontName::Roboto_BoldItalic: return StringView("Roboto_BoldItalic"); break;
	case FontName::Roboto_Italic: return StringView("Roboto_Italic"); break;
	case FontName::Roboto_Light: return StringView("Roboto_Light"); break;
	case FontName::Roboto_LightItalic: return StringView("Roboto_LightItalic"); break;
	case FontName::Roboto_Medium: return StringView("Roboto_Medium"); break;
	case FontName::Roboto_MediumItalic: return StringView("Roboto_MediumItalic"); break;
	case FontName::Roboto_Regular: return StringView("Roboto_Regular"); break;
	case FontName::Roboto_Thin: return StringView("Roboto_Thin"); break;
	case FontName::Roboto_ThinItalic: return StringView("Roboto_ThinItalic"); break;
	case FontName::RobotoCondensed_Bold: return StringView("RobotoCondensed_Bold"); break;
	case FontName::RobotoCondensed_BoldItalic: return StringView("RobotoCondensed_BoldItalic"); break;
	case FontName::RobotoCondensed_Italic: return StringView("RobotoCondensed_Italic"); break;
	case FontName::RobotoCondensed_Light: return StringView("RobotoCondensed_Light"); break;
	case FontName::RobotoCondensed_LightItalic: return StringView("RobotoCondensed_LightItalic"); break;
	case FontName::RobotoCondensed_Regular: return StringView("RobotoCondensed_Regular"); break;
	case FontName::RobotoMono_Bold: return StringView("RobotoMono_Bold"); break;
	case FontName::RobotoMono_BoldItalic: return StringView("RobotoMono_BoldItalic"); break;
	case FontName::RobotoMono_ExtraLight: return StringView("RobotoMono_ExtraLight"); break;
	case FontName::RobotoMono_ExtraLightItalic: return StringView("RobotoMono_ExtraLightItalic"); break;
	case FontName::RobotoMono_Italic: return StringView("RobotoMono_Italic"); break;
	case FontName::RobotoMono_Light: return StringView("RobotoMono_Light"); break;
	case FontName::RobotoMono_LightItalic: return StringView("RobotoMono_LightItalic"); break;
	case FontName::RobotoMono_Medium: return StringView("RobotoMono_Medium"); break;
	case FontName::RobotoMono_MediumItalic: return StringView("RobotoMono_MediumItalic"); break;
	case FontName::RobotoMono_Regular: return StringView("RobotoMono_Regular"); break;
	case FontName::RobotoMono_SemiBold: return StringView("RobotoMono_SemiBold"); break;
	case FontName::RobotoMono_SemiBoldItalic: return StringView("RobotoMono_SemiBoldItalic"); break;
	case FontName::RobotoMono_Thin: return StringView("RobotoMono_Thin"); break;
	case FontName::RobotoMono_ThinItalic: return StringView("RobotoMono_ThinItalic"); break;
	}

	return StringView();
}

static Bytes openResourceFont(resources::fonts::FontName name) {
	auto d = resources::fonts::getFont(name);
	return data::decompress<memory::StandartInterface>(d.data(), d.size());
}

static String getResourceFontName(resources::fonts::FontName name) {
	return toString("resource:", resources::fonts::getFontName(name));
}

static const font::FontController::FontSource * makeResourceFontQuery(
		font::FontController::Builder &b, resources::fonts::FontName name) {
	if (auto v = b.getFontSource(getResourceFontName(name))) {
		return v;
	}
	return b.addFontSource(getResourceFontName(name), [name] { return openResourceFont(name); });
}

void addFonts(font::FontController::Builder &b) {
	using FontStyle = font::FontStyle;
	using FontWeight = font::FontWeight;
	using FontStretch = font::FontStretch;

	auto res_OpenSans_Bold = makeResourceFontQuery(b, FontName::OpenSans_Bold);
	auto res_OpenSans_BoldItalic = makeResourceFontQuery(b, FontName::OpenSans_BoldItalic);
	auto res_OpenSans_ExtraBold = makeResourceFontQuery(b, FontName::OpenSans_ExtraBold);
	auto res_OpenSans_ExtraBoldItalic = makeResourceFontQuery(b, FontName::OpenSans_ExtraBoldItalic);
	auto res_OpenSans_Italic = makeResourceFontQuery(b, FontName::OpenSans_Italic);
	auto res_OpenSans_Light = makeResourceFontQuery(b, FontName::OpenSans_Light);
	auto res_OpenSans_LightItalic = makeResourceFontQuery(b, FontName::OpenSans_LightItalic);
	auto res_OpenSans_Medium = makeResourceFontQuery(b, FontName::OpenSans_Medium);
	auto res_OpenSans_MediumItalic = makeResourceFontQuery(b, FontName::OpenSans_MediumItalic);
	auto res_OpenSans_Regular = makeResourceFontQuery(b, FontName::OpenSans_Regular);
	auto res_OpenSans_SemiBold = makeResourceFontQuery(b, FontName::OpenSans_SemiBold);
	auto res_OpenSans_SemiBoldItalic = makeResourceFontQuery(b, FontName::OpenSans_SemiBoldItalic);
	auto res_OpenSans_Condensed_Bold = makeResourceFontQuery(b, FontName::OpenSans_Condensed_Bold);
	auto res_OpenSans_Condensed_BoldItalic = makeResourceFontQuery(b, FontName::OpenSans_Condensed_BoldItalic);
	auto res_OpenSans_Condensed_ExtraBold = makeResourceFontQuery(b, FontName::OpenSans_Condensed_ExtraBold);
	auto res_OpenSans_Condensed_ExtraBoldItalic = makeResourceFontQuery(b, FontName::OpenSans_Condensed_ExtraBoldItalic);
	auto res_OpenSans_Condensed_Italic = makeResourceFontQuery(b, FontName::OpenSans_Condensed_Italic);
	auto res_OpenSans_Condensed_Light = makeResourceFontQuery(b, FontName::OpenSans_Condensed_Light);
	auto res_OpenSans_Condensed_LightItalic = makeResourceFontQuery(b, FontName::OpenSans_Condensed_LightItalic);
	auto res_OpenSans_Condensed_Medium = makeResourceFontQuery(b, FontName::OpenSans_Condensed_Medium);
	auto res_OpenSans_Condensed_MediumItalic = makeResourceFontQuery(b, FontName::OpenSans_Condensed_MediumItalic);
	auto res_OpenSans_Condensed_Regular = makeResourceFontQuery(b, FontName::OpenSans_Condensed_Regular);
	auto res_OpenSans_Condensed_SemiBold = makeResourceFontQuery(b, FontName::OpenSans_Condensed_SemiBold);
	auto res_OpenSans_Condensed_SemiBoldItalic = makeResourceFontQuery(b, FontName::OpenSans_Condensed_SemiBoldItalic);
	auto res_OpenSans_SemiCondensed_Bold = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_Bold);
	auto res_OpenSans_SemiCondensed_BoldItalic = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_BoldItalic);
	auto res_OpenSans_SemiCondensed_ExtraBold = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_ExtraBold);
	auto res_OpenSans_SemiCondensed_ExtraBoldItalic = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_ExtraBoldItalic);
	auto res_OpenSans_SemiCondensed_Italic = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_Italic);
	auto res_OpenSans_SemiCondensed_Light = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_Light);
	auto res_OpenSans_SemiCondensed_LightItalic = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_LightItalic);
	auto res_OpenSans_SemiCondensed_Medium = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_Medium);
	auto res_OpenSans_SemiCondensed_MediumItalic = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_MediumItalic);
	auto res_OpenSans_SemiCondensed_Regular = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_Regular);
	auto res_OpenSans_SemiCondensed_SemiBold = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_SemiBold);
	auto res_OpenSans_SemiCondensed_SemiBoldItalic = makeResourceFontQuery(b, FontName::OpenSans_SemiCondensed_SemiBoldItalic);
	auto res_Roboto_Black = makeResourceFontQuery(b, FontName::Roboto_Black);
	auto res_Roboto_BlackItalic = makeResourceFontQuery(b, FontName::Roboto_BlackItalic);
	auto res_Roboto_Bold = makeResourceFontQuery(b, FontName::Roboto_Bold);
	auto res_Roboto_BoldItalic = makeResourceFontQuery(b, FontName::Roboto_BoldItalic);
	auto res_Roboto_Italic = makeResourceFontQuery(b, FontName::Roboto_Italic);
	auto res_Roboto_Light = makeResourceFontQuery(b, FontName::Roboto_Light);
	auto res_Roboto_LightItalic = makeResourceFontQuery(b, FontName::Roboto_LightItalic);
	auto res_Roboto_Medium = makeResourceFontQuery(b, FontName::Roboto_Medium);
	auto res_Roboto_MediumItalic = makeResourceFontQuery(b, FontName::Roboto_MediumItalic);
	auto res_Roboto_Regular = makeResourceFontQuery(b, FontName::Roboto_Regular);
	auto res_Roboto_Thin = makeResourceFontQuery(b, FontName::Roboto_Thin);
	auto res_Roboto_ThinItalic = makeResourceFontQuery(b, FontName::Roboto_ThinItalic);
	auto res_RobotoCondensed_Bold = makeResourceFontQuery(b, FontName::RobotoCondensed_Bold);
	auto res_RobotoCondensed_BoldItalic = makeResourceFontQuery(b, FontName::RobotoCondensed_BoldItalic);
	auto res_RobotoCondensed_Italic = makeResourceFontQuery(b, FontName::RobotoCondensed_Italic);
	auto res_RobotoCondensed_Light = makeResourceFontQuery(b, FontName::RobotoCondensed_Light);
	auto res_RobotoCondensed_LightItalic = makeResourceFontQuery(b, FontName::RobotoCondensed_LightItalic);
	auto res_RobotoCondensed_Regular = makeResourceFontQuery(b, FontName::RobotoCondensed_Regular);
	auto res_RobotoMono_Bold = makeResourceFontQuery(b, FontName::RobotoMono_Bold);
	auto res_RobotoMono_BoldItalic = makeResourceFontQuery(b, FontName::RobotoMono_BoldItalic);
	auto res_RobotoMono_ExtraLight = makeResourceFontQuery(b, FontName::RobotoMono_ExtraLight);
	auto res_RobotoMono_ExtraLightItalic = makeResourceFontQuery(b, FontName::RobotoMono_ExtraLightItalic);
	auto res_RobotoMono_Italic = makeResourceFontQuery(b, FontName::RobotoMono_Italic);
	auto res_RobotoMono_Light = makeResourceFontQuery(b, FontName::RobotoMono_Light);
	auto res_RobotoMono_LightItalic = makeResourceFontQuery(b, FontName::RobotoMono_LightItalic);
	auto res_RobotoMono_Medium = makeResourceFontQuery(b, FontName::RobotoMono_Medium);
	auto res_RobotoMono_MediumItalic = makeResourceFontQuery(b, FontName::RobotoMono_MediumItalic);
	auto res_RobotoMono_Regular = makeResourceFontQuery(b, FontName::RobotoMono_Regular);
	auto res_RobotoMono_SemiBold = makeResourceFontQuery(b, FontName::RobotoMono_SemiBold);
	auto res_RobotoMono_SemiBoldItalic = makeResourceFontQuery(b, FontName::RobotoMono_SemiBoldItalic);
	auto res_RobotoMono_Thin = makeResourceFontQuery(b, FontName::RobotoMono_Thin);
	auto res_RobotoMono_ThinItalic = makeResourceFontQuery(b, FontName::RobotoMono_ThinItalic);

	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Bold, FontStretch::Normal, res_OpenSans_Bold);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Bold, FontStretch::Normal, res_OpenSans_BoldItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::ExtraBold, FontStretch::Normal, res_OpenSans_ExtraBold);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::ExtraBold, FontStretch::Normal, res_OpenSans_ExtraBoldItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Normal, FontStretch::Normal, res_OpenSans_Italic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Light, FontStretch::Normal, res_OpenSans_Light);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Light, FontStretch::Normal, res_OpenSans_LightItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Medium, FontStretch::Normal, res_OpenSans_Medium);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Medium, FontStretch::Normal, res_OpenSans_MediumItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Normal, FontStretch::Normal, res_OpenSans_Regular);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::SemiBold, FontStretch::Normal, res_OpenSans_SemiBold);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::SemiBold, FontStretch::Normal, res_OpenSans_SemiBoldItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Bold, FontStretch::Condensed, res_OpenSans_Condensed_Bold);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Bold, FontStretch::Condensed, res_OpenSans_Condensed_BoldItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::ExtraBold, FontStretch::Condensed, res_OpenSans_Condensed_ExtraBold);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::ExtraBold, FontStretch::Condensed, res_OpenSans_Condensed_ExtraBoldItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Normal, FontStretch::Condensed, res_OpenSans_Condensed_Italic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Light, FontStretch::Condensed, res_OpenSans_Condensed_Light);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Light, FontStretch::Condensed, res_OpenSans_Condensed_LightItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Medium, FontStretch::Condensed, res_OpenSans_Condensed_Medium);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Medium, FontStretch::Condensed, res_OpenSans_Condensed_MediumItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Normal, FontStretch::Condensed, res_OpenSans_Condensed_Regular);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::SemiBold, FontStretch::Condensed, res_OpenSans_Condensed_SemiBold);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::SemiBold, FontStretch::Condensed, res_OpenSans_Condensed_SemiBoldItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Bold, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_Bold);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Bold, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_BoldItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::ExtraBold, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_ExtraBold);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::ExtraBold, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_ExtraBoldItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Normal, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_Italic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Light, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_Light);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Light, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_LightItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Medium, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_Medium);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::Medium, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_MediumItalic);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::Normal, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_Regular);
	b.addFontFaceQuery("OpenSans", FontStyle::Normal, FontWeight::SemiBold, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_SemiBold);
	b.addFontFaceQuery("OpenSans", FontStyle::Italic, FontWeight::SemiBold, FontStretch::SemiCondensed, res_OpenSans_SemiCondensed_SemiBoldItalic);
	b.addFontFaceQuery("Roboto", FontStyle::Normal, FontWeight::Black, FontStretch::Normal, res_Roboto_Black);
	b.addFontFaceQuery("Roboto", FontStyle::Italic, FontWeight::Black, FontStretch::Normal, res_Roboto_BlackItalic);
	b.addFontFaceQuery("Roboto", FontStyle::Normal, FontWeight::Bold, FontStretch::Normal, res_Roboto_Bold);
	b.addFontFaceQuery("Roboto", FontStyle::Italic, FontWeight::Bold, FontStretch::Normal, res_Roboto_BoldItalic);
	b.addFontFaceQuery("Roboto", FontStyle::Italic, FontWeight::Normal, FontStretch::Normal, res_Roboto_Italic);
	b.addFontFaceQuery("Roboto", FontStyle::Normal, FontWeight::Light, FontStretch::Normal, res_Roboto_Light);
	b.addFontFaceQuery("Roboto", FontStyle::Italic, FontWeight::Light, FontStretch::Normal, res_Roboto_LightItalic);
	b.addFontFaceQuery("Roboto", FontStyle::Normal, FontWeight::Medium, FontStretch::Normal, res_Roboto_Medium);
	b.addFontFaceQuery("Roboto", FontStyle::Italic, FontWeight::Medium, FontStretch::Normal, res_Roboto_MediumItalic);
	b.addFontFaceQuery("Roboto", FontStyle::Normal, FontWeight::Normal, FontStretch::Normal, res_Roboto_Regular);
	b.addFontFaceQuery("Roboto", FontStyle::Normal, FontWeight::Thin, FontStretch::Normal, res_Roboto_Thin);
	b.addFontFaceQuery("Roboto", FontStyle::Italic, FontWeight::Thin, FontStretch::Normal, res_Roboto_ThinItalic);
	b.addFontFaceQuery("Roboto", FontStyle::Normal, FontWeight::Bold, FontStretch::Condensed, res_RobotoCondensed_Bold);
	b.addFontFaceQuery("Roboto", FontStyle::Italic, FontWeight::Bold, FontStretch::Condensed, res_RobotoCondensed_BoldItalic);
	b.addFontFaceQuery("Roboto", FontStyle::Italic, FontWeight::Normal, FontStretch::Condensed, res_RobotoCondensed_Italic);
	b.addFontFaceQuery("Roboto", FontStyle::Normal, FontWeight::Light, FontStretch::Condensed, res_RobotoCondensed_Light);
	b.addFontFaceQuery("Roboto", FontStyle::Italic, FontWeight::Light, FontStretch::Condensed, res_RobotoCondensed_LightItalic);
	b.addFontFaceQuery("Roboto", FontStyle::Normal, FontWeight::Normal, FontStretch::Condensed, res_RobotoCondensed_Regular);
	b.addFontFaceQuery("monospace", FontStyle::Normal, FontWeight::Bold, FontStretch::Normal, res_RobotoMono_Bold);
	b.addFontFaceQuery("monospace", FontStyle::Italic, FontWeight::Bold, FontStretch::Normal, res_RobotoMono_BoldItalic);
	b.addFontFaceQuery("monospace", FontStyle::Normal, FontWeight::ExtraLight, FontStretch::Normal, res_RobotoMono_ExtraLight);
	b.addFontFaceQuery("monospace", FontStyle::Italic, FontWeight::ExtraLight, FontStretch::Normal, res_RobotoMono_ExtraLightItalic);
	b.addFontFaceQuery("monospace", FontStyle::Italic, FontWeight::Normal, FontStretch::Normal, res_RobotoMono_Italic);
	b.addFontFaceQuery("monospace", FontStyle::Normal, FontWeight::Medium, FontStretch::Normal, res_RobotoMono_Medium);
	b.addFontFaceQuery("monospace", FontStyle::Italic, FontWeight::Medium, FontStretch::Normal, res_RobotoMono_MediumItalic);
	b.addFontFaceQuery("monospace", FontStyle::Normal, FontWeight::Light, FontStretch::Normal, res_RobotoMono_Light);
	b.addFontFaceQuery("monospace", FontStyle::Italic, FontWeight::Light, FontStretch::Normal, res_RobotoMono_LightItalic);
	b.addFontFaceQuery("monospace", FontStyle::Normal, FontWeight::Normal, FontStretch::Normal, res_RobotoMono_Regular);
	b.addFontFaceQuery("monospace", FontStyle::Normal, FontWeight::SemiBold, FontStretch::Normal, res_RobotoMono_SemiBold);
	b.addFontFaceQuery("monospace", FontStyle::Italic, FontWeight::SemiBold, FontStretch::Normal, res_RobotoMono_SemiBoldItalic);
	b.addFontFaceQuery("monospace", FontStyle::Normal, FontWeight::Thin, FontStretch::Normal, res_RobotoMono_Thin);
	b.addFontFaceQuery("monospace", FontStyle::Italic, FontWeight::Thin, FontStretch::Normal, res_RobotoMono_ThinItalic);
}

}
