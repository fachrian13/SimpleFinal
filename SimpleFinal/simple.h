#pragma once
#include <bitset>
#include <functional>
#include <memory>
#include <stack>
#include <string>
#include <vector>

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

namespace Simple {
	enum class Palette1 : short {
		Default = 39
	};
	enum class Palette16 : short {
		Black = 30,
		Red = 31,
		Green = 32,
		Yellow = 33,
		Blue = 34,
		Magenta = 35,
		Cyan = 36,
		White = 37,
		BrightBlack = 90,
		BrightRed = 91,
		BrightGreen = 92,
		BrightYellow = 93,
		BrightBlue = 94,
		BrightMagenta = 95,
		BrightCyan = 96,
		BrightWhite = 97
	};
	enum class Palette256 : short {
		Black = 0,
		Maroon = 1,
		Green = 2,
		Olive = 3,
		Navy = 4,
		Purple = 5,
		Teal = 6,
		Silver = 7,
		Gray = 8,
		Red = 9,
		Lime = 10,
		Yellow = 11,
		Blue = 12,
		Fuchsia = 13,
		Cyan = 14,
		White = 15,
		Black2 = 16,
		MidnightBlue = 17,
		Navy2 = 18,
		MediumBlue = 19,
		MediumBlue2 = 20,
		Blue2 = 21,
		DarkGreen = 22,
		Teal2 = 23,
		SteelBlue = 24,
		DarkSlateBlue = 25,
		RoyalBlue = 26,
		MediumSlateBlue = 27,
		Green2 = 28,
		SeaGreen = 29,
		Teal3 = 30,
		SteelBlue2 = 31,
		CornflowerBlue = 32,
		DodgerBlue = 33,
		LimeGreen = 34,
		MediumSeaGreen = 35,
		MediumSeaGreen2 = 36,
		LightSeaGreen = 37,
		DeepSkyBlue = 38,
		DeepSkyBlue2 = 39,
		LimeGreen2 = 40,
		SpringGreen = 41,
		MediumSpringGreen = 42,
		MediumAquamarine = 43,
		DarkTurquoise = 44,
		SkyBlue = 45,
		Lime2 = 46,
		SpringGreen2 = 47,
		SpringGreen3 = 48,
		MediumSpringGreen2 = 49,
		Aquamarine = 50,
		Cyan2 = 51,
		Maroon2 = 52,
		Purple2 = 53,
		Indigo = 54,
		DarkOrchid = 55,
		MediumBlue3 = 56,
		Blue3 = 57,
		Olive2 = 58,
		DimGray = 59,
		SlateGrey = 60,
		DarkSlateBlue2 = 61,
		SlateBlue = 62,
		MediumSlateBlue2 = 63,
		OliveDrab = 64,
		DarkOliveGreen = 65,
		CadetBlue = 66,
		SteelBlue3 = 67,
		CornflowerBlue2 = 68,
		RoyalBlue2 = 69,
		YellowGreen = 70,
		MediumSeaGreen3 = 71,
		MediumAquamarine2 = 72,
		CadetBlue2 = 73,
		LightSkyBlue = 74,
		CornflowerBlue3 = 75,
		LimeGreen3 = 76,
		LimeGreen4 = 77,
		LightGreen = 78,
		MediumAquamarine3 = 79,
		MediumTurquoise = 80,
		SkyBlue2 = 81,
		Chartreuse = 82,
		SpringGreen4 = 83,
		SpringGreen5 = 84,
		MediumSpringGreen3 = 85,
		Aquamarine2 = 86,
		Cyan3 = 87,
		Maroon3 = 88,
		Purple3 = 89,
		Purple4 = 90,
		DarkOrchid2 = 91,
		DarkViolet = 92,
		Blue4 = 93,
		SaddleBrown = 94,
		DimGray2 = 95,
		SlateGrey2 = 96,
		MediumPurple = 97,
		SlateBlue2 = 98,
		MediumSlateBlue3 = 99,
		Olive3 = 100,
		DarkOliveGreen2 = 101,
		Gray2 = 102,
		LightSlateGray = 103,
		CornflowerBlue4 = 104,
		MediumPurple2 = 105,
		YellowGreen2 = 106,
		OliveDrab2 = 107,
		DarkSeaGreen = 108,
		CadetBlue3 = 109,
		LightSteelBlue = 110,
		CornflowerBlue5 = 111,
		GreenYellow = 112,
		LightGreen2 = 113,
		LightGreen3 = 114,
		MediumAquamarine4 = 115,
		PaleTurquoise = 116,
		LightSkyBlue2 = 117,
		Chartreuse2 = 118,
		LimeGreen5 = 119,
		PaleGreen = 120,
		PaleGreen2 = 121,
		Aquamarine3 = 122,
		Cyan4 = 123,
		Firebrick = 124,
		MediumVioletRed = 125,
		MediumVioletRed2 = 126,
		DarkMagenta = 127,
		DarkViolet2 = 128,
		DarkViolet3 = 129,
		Chocolate = 130,
		IndianRed = 131,
		PaleVioletRed = 132,
		Orchid = 133,
		MediumOrchid = 134,
		DarkOrchid3 = 135,
		DarkGoldenrod = 136,
		Tan = 137,
		RosyBrown = 138,
		Plum = 139,
		Plum2 = 140,
		Plum3 = 141,
		MediumPurple3 = 141,
		Olive4 = 142,
		DarkKhaki = 143,
		Tan2 = 144,
		DarkGrey = 145,
		LightSteelBlue2 = 146,
		CornflowerBlue6 = 147,
		YellowGreen3 = 148,
		YellowGreen4 = 149,
		DarkSeaGreen2 = 150,
		DarkSeaGreen3 = 151,
		PowderBlue = 152,
		LightSkyBlue3 = 153,
		GreenYellow2 = 154,
		GreenYellow3 = 155,
		PaleGreen3 = 156,
		LightGreen4 = 157,
		Aquamarine4 = 158,
		PaleTurquoise2 = 159,
		Red2 = 160,
		DeepPink = 161,
		MediumVioletRed3 = 162,
		MediumVioletRed4 = 163,
		Fuchsia2 = 164,
		Fuchsia3 = 165,
		Chocolate2 = 166,
		IndianRed2 = 167,
		PaleVioletRed2 = 168,
		HotPink = 169,
		Orchid2 = 170,
		MediumOrchid2 = 171,
		DarkGoldenrod2 = 172,
		DarkSalmon = 173,
		LightCoral = 174,
		PaleVioletRed3 = 175,
		Plum4 = 176,
		Violed = 177,
		Goldenrod = 178,
		DarkKhaki2 = 179,
		Tan3 = 180,
		RosyBrown2 = 181,
		Thistle = 182,
		Plum5 = 183,
		Gold = 184,
		Khaki = 185,
		Khaki2 = 186,
		Wheat = 187,
		LightGrey = 188,
		Lavender = 189,
		Yellow2 = 190,
		YellowGreen5 = 191,
		PaleGreen4 = 192,
		PaleGoldenrod = 193,
		LightGoldenrodYellow = 194,
		LightCyan = 195,
		Red3 = 196,
		Crimson = 197,
		DeepPink2 = 198,
		DeepPink3 = 199,
		Fuchsia4 = 200,
		Fuchsia5 = 201,
		OrangeRed = 202,
		Tomato = 203,
		PaleVioletRed4 = 204,
		HotPink2 = 205,
		Orchid3 = 206,
		MediumOrchid3 = 207,
		DarkOrange = 208,
		Coral = 209,
		LightCoral2 = 210,
		PaleVioledRed = 211,
		HotPink3 = 212,
		Violet = 213,
		Orange = 214,
		SandyBrown = 215,
		LightSalmon = 216,
		LightPink = 217,
		Plum6 = 218,
		Plum7 = 219,
		Gold2 = 220,
		Goldenrod2 = 221,
		Khaki3 = 222,
		PeachPuff = 223,
		MistyRose = 224,
		Thistle2 = 225,
		Yellow3 = 226,
		Yellow4 = 227,
		Khaki4 = 228,
		Khaki5 = 229,
		LightGoldenrodYellow2 = 230,
		White2 = 231,
		Black3 = 232,
		Black4 = 233,
		Black5 = 234,
		Black6 = 235,
		DarkSlateGrey = 236,
		DarkSlateGrey2 = 237,
		DarkSlateGrey3 = 238,
		DimGray3 = 239,
		DimGray4 = 240,
		DimGray5 = 241,
		DimGray6 = 242,
		Gray3 = 243,
		Gray4 = 244,
		Gray5 = 245,
		Gray6 = 246,
		DarkGrey2 = 247,
		DarkGrey3 = 248,
		DarkGrey4 = 249,
		Silver2 = 250,
		Silver3 = 251,
		LightGrey2 = 252,
		Gainsboro = 253,
		Gainsboro2 = 254,
		WhiteSmoke = 255
	};

	class Color {
	public:
		Color() = default;
		Color(Palette1) :
			type(Type::Palette1),
			red(39),
			green(39),
			blue(39) {}
		Color(Palette16 color) :
			type(Type::Palette16),
			red(static_cast<short>(color)),
			green(static_cast<short>(color)),
			blue(static_cast<short>(color)) {}
		Color(Palette256 color) :
			type(Type::Palette256),
			red(static_cast<short>(color)),
			green(static_cast<short>(color)),
			blue(static_cast<short>(color)) {}
		Color(short red, short green, short blue) :
			type(Type::TrueColor),
			red(red < 0 ? 0 : red > 255 ? 255 : red),
			green(green < 0 ? 0 : green > 255 ? 255 : green),
			blue(blue < 0 ? 0 : blue > 255 ? 255 : blue) {}
		Color(short rgb[3]) :
			type(Type::TrueColor),
			red(rgb[0] < 0 ? 0 : rgb[0] > 255 ? 255 : rgb[0]),
			green(rgb[1] < 0 ? 0 : rgb[1] > 255 ? 255 : rgb[1]),
			blue(rgb[2] < 0 ? 0 : rgb[2] > 255 ? 255 : rgb[2]) {}

		bool operator ==(const Color& right) {
			return type == right.type
				&& red == right.red
				&& green == right.green
				&& blue == right.blue;
		}
		bool operator !=(const Color& right) {
			return !(*this == right);
		}

		virtual void draw(std::string&) = 0;

		enum class Type : short {
			Uninitialized,
			Palette1,
			Palette16,
			Palette256,
			TrueColor
		} type = Type::Uninitialized;

	protected:
		short red = 0;
		short green = 0;
		short blue = 0;
	};
	class Foreground : public Color {
	public:
		using Color::Color;

	public: // Color
		void draw(std::string& target) override {
			target.append("\x1b[");
			switch (type) {
			case Type::Palette1:
				target.append("39");
				break;
			case Type::Palette16:
				target.append(std::to_string(red));
				break;
			case Type::Palette256:
				target.append("38;5;")
					.append(std::to_string(red));
				break;
			case Type::TrueColor:
				target.append("38;2;")
					.append(std::to_string(red) + ";")
					.append(std::to_string(green) + ";")
					.append(std::to_string(blue));
				break;
			}
			target.append("m");
		}
	};
	class Background : public Color {
	public:
		using Color::Color;

	public: // Color
		void draw(std::string& target) override {
			target.append("\x1b[");
			switch (type) {
			case Type::Palette1:
				target.append("49");
				break;
			case Type::Palette16:
				target.append(std::to_string(red + 10));
				break;
			case Type::Palette256:
				target.append("48;5;")
					.append(std::to_string(red));
				break;
			case Type::TrueColor:
				target.append("48;2;")
					.append(std::to_string(red) + ";")
					.append(std::to_string(green) + ";")
					.append(std::to_string(blue));
				break;
			}
			target.append("m");
		}
	};

	class Pixel {
	public:
		std::string character = " ";
		Foreground foreground;
		Background background;
		std::bitset<32> properties;
	};

	class Rectangle {
	public:
		short width() const { return right - left; }
		short height() const { return bottom - top; }

		short left = 0;
		short top = 0;
		short right = 0;
		short bottom = 0;
	};

	class Image {
	public:
		Image() = default;
		Image(short width, short height) :
			width(width),
			height(height),
			pixels(width * height) {}

		Pixel& at(short x, short y) {
			static Pixel nullpxl;
			if ((x < 0) || (x >= width) || (y < 0) || (y >= height))
				return nullpxl;

			return pixels.at(y * width + x);
		}
		Rectangle size() const {
			return { 0, 0, width, height };
		}
		void clear() {
			std::fill(pixels.begin(), pixels.end(), Pixel{});
		}
		void clear(Rectangle area) {
			for (short y = area.top; y < area.bottom; ++y)
				for (short x = area.left; x < area.right; ++x)
					at(x, y) = Pixel{};
		}
		void draw(std::string& target) {
			Pixel prev;
			const char* on[] = { "1;", "2;", "3;", "4;", "5;", "7;", "8;", "9;" };
			const char* off[] = { "22;", "22;", "23;", "24;", "25;", "27;", "28;", "29;" };

			for (short y = 0; y < height; ++y) {
				for (short x = 0; x < width; ++x) {
					Pixel& next = at(x, y);

					if (next.foreground != prev.foreground)
						next.foreground.draw(target);

					if (next.background != prev.background)
						next.background.draw(target);

					if (next.properties != prev.properties) {
						target.append("\x1b[");
						for (short i = 0; i < 8; ++i)
							if (next.properties[i] != prev.properties[i])
								target.append(next.properties[i] ? on[i] : off[i]);
						target.pop_back();
						target.append("m");
					}

					target.append(next.character);

					prev = next;
				}

				target.append("\n");
			}

			target.pop_back();
			target.append("\x1b[m");
		}
		void draw(std::ostream& target) {
			std::string output = "\x1b[H";

			draw(output);
			target << output;
		}

	private:
		std::vector<Pixel> pixels;
		short width = 0;
		short height = 0;
	};

	namespace Utf8 {
		size_t size(const std::string& target) {
			size_t result = 0;

			for (size_t i = 0; i < target.size(); ++result) {
				unsigned char ch = target.at(i);

				if (ch < 0x80) i += 1;
				else if ((ch & 0xE0) == 0xC0) i += 2;
				else if ((ch & 0xF0) == 0xE0) i += 3;
				else if ((ch & 0xF8) == 0xF0) i += 4;
				else return 0;
			}

			return result;
		}
		std::string at(const std::string& target, size_t& temp_index) {
			unsigned char ch = target.at(temp_index);
			short char_size = 0;

			if (ch < 0x80) char_size = 1;
			else if ((ch & 0xE0) == 0xC0) char_size = 2;
			else if ((ch & 0xF0) == 0xE0) char_size = 3;
			else if ((ch & 0xF8) == 0xF0) char_size = 4;
			else return "";

			temp_index += char_size;

			return target.substr((temp_index - char_size), char_size);
		}
		std::string at(const std::string& target, size_t&& index) {
			for (size_t i = 0, current = 0; i < target.size(); ++current) {
				std::string ch = at(target, i);

				if (current == index)
					return ch;
			}

			return "";
		}
	}
	namespace Base {
		enum NodeProperties : short {
			Bold,
			Dim,
			Italic,
			Underline,
			Blinking,
			Reverse,
			Hidden,
			Strikethrough,
			HorizontalFlex,
			VerticalFlex
		};
		enum BorderCell : short {
			Horizontal,
			Vertical,
			TopLeft,
			TopMiddle,
			TopRight,
			MiddleLeft,
			Middle,
			MiddleRight,
			BottomLeft,
			BottomMiddle,
			BottomRight
		};

		class Node {
		public:
			virtual void init() {}
			virtual void set(Rectangle _) { position = _; }
			virtual void draw(Image&) {}

		protected:
			void apply_style(Pixel& target) {
				if (foreground.type != Color::Type::Uninitialized)
					target.foreground = foreground;

				if (background.type != Color::Type::Uninitialized)
					target.background = background;

				target.properties = properties;
			}
			void apply_style(Image& target) {
				for (short y = position.top; y < position.bottom; ++y)
					for (short x = position.left; x < position.right; ++x)
						apply_style(target.at(x, y));
			}

		public:
			Rectangle position;
			Foreground foreground;
			Background background;
			std::bitset<32> properties;
			short width = 0;
			short height = 0;
		};
		class Interact {
		public:
			bool focused() const { return focus; }
			bool looping() const { return loop; }
			virtual void focused(bool value) { focus = value; }
			virtual void looping(bool value) { loop = value; }
			virtual bool onkey(const KEY_EVENT_RECORD&) { return false; }

		protected:
			bool focus = false;
			bool loop = false;
		};

		class Text : public Node {
		public:
			Text(std::string content) :
				content(std::move(content)) {}

		public: // Node
			void init() override {
				width = static_cast<short>(content.size());
				height = 1;
			}
			void draw(Image& target) override {
				for (short i = 0, y = position.top; y < position.bottom; ++y) {
					for (short x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);

						apply_style(p);

						if (i < content.size())
							p.character = content.at(i++);
					}
				}
			}

		private:
			std::string content;
		};
		class HorizontalLayout : public Node {
		public:
			HorizontalLayout() = default;
			HorizontalLayout(std::vector<std::shared_ptr<Node>> children) :
				children(std::move(children)) {}

			void add(std::shared_ptr<Node> child) {
				children.push_back(std::move(child));
			}

		public: // Node
			void init() override {
				width = 0;
				height = 0;

				for (auto& child : children) {
					child->init();

					width += child->width;
					height = std::max(height, child->height);
				}
			}
			void set(Rectangle position) override {
				Node::set(position);

				short flex = 0;
				for (auto& child : children)
					flex += child->properties[HorizontalFlex];

				short extra = (position.width() - width) % (flex ? flex : 1);
				short space = (position.width() - width) / (flex ? flex : 1);

				for (auto& child : children) {
					if (child->properties[HorizontalFlex])
						position.right = position.left + child->width + space + (extra-- > 0 ? 1 : 0);
					else position.right = position.left + child->width;

					if (child->properties[VerticalFlex])
						position.bottom = this->position.bottom;
					else position.bottom = position.top + child->height;

					child->set(position);

					position.left = position.right;
				}
			}
			void draw(Image& target) override {
				apply_style(target);

				for (auto& child : children)
					child->draw(target);
			}

		private:
			std::vector<std::shared_ptr<Node>> children;
		};
		class VerticalLayout : public Node {
		public:
			VerticalLayout() = default;
			VerticalLayout(std::vector<std::shared_ptr<Node>> children) :
				children(std::move(children)) {}

			void add(std::shared_ptr<Node> child) {
				children.push_back(std::move(child));
			}

		public: // Node
			void init() override {
				width = 0;
				height = 0;

				for (auto& child : children) {
					child->init();

					width = std::max(width, child->width);
					height += child->height;
				}
			}
			void set(Rectangle position) override {
				Node::set(position);

				short flex = 0;
				for (auto& child : children)
					flex += child->properties[VerticalFlex];

				short extra = (position.height() - height) % (flex ? flex : 1);
				short space = (position.height() - height) / (flex ? flex : 1);

				for (auto& child : children) {
					if (child->properties[HorizontalFlex])
						position.right = this->position.right;
					else position.right = position.left + child->width;

					if (child->properties[VerticalFlex])
						position.bottom = position.top + child->height + space + (flex-- > 0 ? 1 : 0);
					else position.bottom = position.top + child->height;

					child->set(position);

					position.top = position.bottom;
				}
			}
			void draw(Image& target) override {
				apply_style(target);

				for (auto& child : children)
					child->draw(target);
			}

		private:
			std::vector<std::shared_ptr<Node>> children;
		};
		class FreeLayout : public Node {
		public:
			FreeLayout(std::vector<std::shared_ptr<Node>> children) :
				children(std::move(children)) {}

		public: // Node
			void init() override {
				for (auto& child : children) {
					child->init();

					width = std::max(width, child->width);
					height = std::max(height, child->height);
				}
			}
			void set(Rectangle position) override {
				Node::set(position);

				for (auto& child : children) {
					if (child->properties[HorizontalFlex])
						position.right = this->position.right;
					else position.right = position.left + child->width;

					if (child->properties[VerticalFlex])
						position.bottom = this->position.bottom;
					else position.bottom = position.top + child->height;

					child->set(position);
				}
			}
			void draw(Image& target) override {
				apply_style(target);

				for (auto& child : children)
					child->draw(target);
			}

		private:
			std::vector<std::shared_ptr<Node>> children;
		};
		class Filler : public Node {
		public: // Node
			void init() override {
				properties[HorizontalFlex] = true;
				properties[VerticalFlex] = true;
			}
		};
		class HorizontalFiller : public Node {
		public: // Node
			void init() override {
				properties[HorizontalFlex] = true;
			}
		};
		class VerticalFiller : public Node {
		public: // Node
			void init() override {
				properties[VerticalFlex] = true;
			}
		};
		class Space : public Node {
		public:
			Space() = default;
			Space(short size) :
				size(size) {}

		public: // Node
			void init() override {
				width = size;
				height = size;
			}

		protected:
			short size = 1;
		};
		class HorizontalSpace : public Space {
		public:
			using Space::Space;

		public: // Node
			void init() override {
				width = size;
			}
		};
		class VerticalSpace : public Space {
		public:
			using Space::Space;

		public: // Node
			void init() override {
				height = size;
			}
		};
		class Border : public Node {
		public:
			Border(std::shared_ptr<Node> node, std::string style) :
				node(std::move(node)),
				style(std::move(style)) {}

		public: // Node
			void init() override {
				node->init();

				width = 2 + node->width;
				height = 2 + node->height;
			}
			void set(Rectangle position) override {
				Node::set(position);
				node->set({
					static_cast<short>(position.left + 1),
					static_cast<short>(position.top + 1),
					static_cast<short>(position.right - 1),
					static_cast<short>(position.bottom - 1)
					});
			}
			void draw(Image& target) override {
				target.at(position.left, position.top).character = Utf8::at(style, TopLeft);
				target.at(position.right - 1, position.top).character = Utf8::at(style, TopRight);
				target.at(position.left, position.bottom - 1).character = Utf8::at(style, BottomLeft);
				target.at(position.right - 1, position.bottom - 1).character = Utf8::at(style, BottomRight);

				for (int x = position.left + 1; x < position.right - 1; ++x) {
					target.at(x, position.top).character = Utf8::at(style, Horizontal);
					target.at(x, position.bottom - 1).character = Utf8::at(style, Horizontal);
				}

				for (int y = position.top + 1; y < position.bottom - 1; ++y) {
					target.at(position.left, y).character = Utf8::at(style, Vertical);
					target.at(position.right - 1, y).character = Utf8::at(style, Vertical);
				}

				node->draw(target);
			}

		private:
			std::string style;
			std::shared_ptr<Node> node;
		};
		class HorizontalSeparator : public Node {
		public: // Node
			void init() override {
				height = 1;
				properties[HorizontalFlex] = true;
			}
			void draw(Image& target) override {
				Pixel& leftchar = target.at((position.left - 1), position.top);
				if (leftchar.character == "│")
					leftchar.character = "├";

				Pixel& rightchar = target.at(position.right, position.top);
				if (rightchar.character == "│")
					rightchar.character = "┤";

				for (short y = position.top; y < position.bottom; ++y)
					for (short x = position.left; x < position.right; ++x)
						target.at(x, y).character = "─";
			}
		};

		class Button : public Node, public Interact {
		public:
			Button(std::string name) :
				name(std::move(name)) {}
			Button(std::string name, std::function<void()> func) :
				name(std::move(name)),
				func(std::move(func)) {}

		public: // Node
			void init() override {
				width = static_cast<short>(2 + name.size());
				height = 1;
				foreground = Palette256::Black;
				background = focus ? Palette256::White : Palette256::Gray6;
			}
			void draw(Image& target) override {
				short i = 0;
				short pos = position.left + (position.width() - static_cast<short>(name.size())) / 2;
				for (short y = position.top; y < position.bottom; ++y) {
					for (short x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);

						apply_style(p);

						if ((x >= pos) && (i < name.size()))
							p.character = name.at(i++);
					}
				}
			}

		public: // Interact
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if ((key.wVirtualKeyCode == VK_RETURN) && focused() && func) {
					func();
					return true;
				}

				return false;
			}

		private:
			std::string name;
			std::function<void()> func;
		};
		class HorizontalContainer : public Interact {
		public:
			HorizontalContainer(std::vector<std::shared_ptr<Interact>> children) :
				children(std::move(children)) {}

		public: // Interact
			void focused(bool value) override {
				Interact::focused(value);

				children.at(index)->focused(value);
			}
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if (children.at(index)->onkey(key))
					return true;

				if (((key.dwControlKeyState & SHIFT_PRESSED) && (key.wVirtualKeyCode == VK_TAB))
					|| key.wVirtualKeyCode == VK_LEFT
					|| key.uChar.AsciiChar == 'h'
					|| key.uChar.AsciiChar == 'H') {
					if (index > 0) {
						children.at(index)->focused(false);
						--index;
						children.at(index)->focused(true);

						return true;
					}

					return false;
				}

				if (key.wVirtualKeyCode == VK_TAB
					|| key.wVirtualKeyCode == VK_RIGHT
					|| key.uChar.AsciiChar == 'l'
					|| key.uChar.AsciiChar == 'L') {
					if (index < (children.size() - 1)) {
						children.at(index)->focused(false);
						++index;
						children.at(index)->focused(true);

						return true;
					}

					return false;
				}

				return false;
			}

		private:
			std::vector<std::shared_ptr<Interact>> children;
			short index = 0;
		};
		class VerticalContainer : public Interact {
		public:
			VerticalContainer(std::vector<std::shared_ptr<Interact>> children) :
				children(std::move(children)) {}

		public: // Interact
			void focused(bool value) override {
				Interact::focused(value);

				children.at(index)->focused(value);
			}
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if (children.at(index)->onkey(key))
					return true;

				if (((key.dwControlKeyState & SHIFT_PRESSED) && (key.wVirtualKeyCode == VK_TAB))
					|| key.wVirtualKeyCode == VK_UP
					|| key.uChar.AsciiChar == 'k'
					|| key.uChar.AsciiChar == 'K') {
					if (index > 0) {
						children.at(index)->focused(false);
						--index;
						children.at(index)->focused(true);

						return true;
					}

					return false;
				}

				if (key.wVirtualKeyCode == VK_TAB
					|| key.wVirtualKeyCode == VK_DOWN
					|| key.uChar.AsciiChar == 'j'
					|| key.uChar.AsciiChar == 'J') {
					if (index < (children.size() - 1)) {
						children.at(index)->focused(false);
						++index;
						children.at(index)->focused(true);

						return true;
					}

					return false;
				}

				return false;
			}

		private:
			std::vector<std::shared_ptr<Interact>> children;
			short index = 0;
		};
		class Link : public Node, public Interact {
		public:
			Link(std::string name) :
				name(std::move(name)) {}
			Link(std::string name, std::function<void()> func) :
				name(std::move(name)),
				func(std::move(func)) {}

		public: // Node
			void init() override {
				width = static_cast<short>(name.size());
				height = 1;
				properties[Underline] = true;
				focused() ? properties[Reverse] = true : properties[Reverse] = false;
			}
			void draw(Image& target) override {
				short i = 0;
				for (short y = position.top; y < position.bottom; ++y) {
					for (short x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);

						apply_style(p);

						if (i < name.size())
							p.character = name.at(i++);
					}
				}
			}

		public: // Interact
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if ((key.wVirtualKeyCode == VK_RETURN) && focused() && func) {
					func();
					return true;
				}

				return false;
			}

		private:
			std::string name;
			std::function<void()> func;
		};
		class CheckboxList : public Node, public Interact {
		public:
			CheckboxList(std::initializer_list<std::string> items) :
				items(std::move(items)) {}

		public: // Node
			void init() override {
				width = 30;
				height = 5;
				foreground = Palette256::Black;
				background = focused() ? Palette256::White : Palette256::Gray6;
			}
			void draw(Image& target) override {
				for (short ii = item_begin, y = position.top; y < position.bottom; ++y, ++ii) {
					size_t i = 0;

					for (short x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);
						const std::string item = prefix(ii) + items.at(ii);

						apply_style(p);

						if (i < item.size())
							p.character = Utf8::at(item, i);
					}
				}

				if (looping())
					for (short x = position.left; x < position.right; ++x)
						target.at(x, (position.top + ycursor)).properties[Reverse] = true;
			}

		public: // Interact
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if (key.wVirtualKeyCode == VK_RETURN)
					looping(!looping());

				if (looping()) {
					if (key.wVirtualKeyCode == VK_DOWN ||
						key.uChar.AsciiChar == 'j' ||
						key.uChar.AsciiChar == 'J') {
						if (index < (items.size() - 1)) {
							++index;
							move_cursor(1);
						}
					}

					if (key.wVirtualKeyCode == VK_UP ||
						key.uChar.AsciiChar == 'k' ||
						key.uChar.AsciiChar == 'K') {
						if (index > 0) {
							--index;
							move_cursor(-1);
						}
					}

					if (key.uChar.AsciiChar == ' ')
						selected_items.push_back(index);

					return true;
				}

				return false;
			}

		private:
			void move_cursor(short y) {
				const short height = position.height();

				if (y > 0)
					if (ycursor < (height - 1)) ++ycursor;
					else ++item_begin;
				else if (y < 0)
					if (ycursor > 0) --ycursor;
					else --item_begin;
			}
			std::string prefix(short& index) {
				if ((!selected_items.empty()) && (std::find(selected_items.begin(), selected_items.end(), index) != selected_items.end()))
					return "[■]";

				return "[ ]";
			}

			std::vector<std::string> items;
			std::vector<short> selected_items;
			short item_begin = 0;
			short index = 0;
			short ycursor = 0;
		};
		class RadioboxList : public Node, public Interact {
		public:
			RadioboxList(std::initializer_list<std::string> items) :
				items(std::move(items)) {}

		public: // Node
			void init() override {
				width = 30;
				height = 5;
				foreground = Palette256::Black;
				background = focused() ? Palette256::White : Palette256::Gray6;
			}
			void draw(Image& target) override {
				for (short ii = item_begin, y = position.top; y < position.bottom; ++y, ++ii) {
					size_t i = 0;

					for (short x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);
						const std::string item = prefix(ii) + items.at(ii);

						apply_style(p);

						if (i < item.size())
							p.character = Utf8::at(item, i);
					}
				}

				if (looping())
					for (short x = position.left; x < position.right; ++x)
						target.at(x, (position.top + ycursor)).properties[Reverse] = true;
			}

		public: // Interact
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if (key.wVirtualKeyCode == VK_RETURN)
					looping(!looping());

				if (looping()) {
					if (key.wVirtualKeyCode == VK_DOWN ||
						key.uChar.AsciiChar == 'j' ||
						key.uChar.AsciiChar == 'J') {
						if (index < (items.size() - 1)) {
							++index;
							move_cursor(1);
						}
					}

					if (key.wVirtualKeyCode == VK_UP ||
						key.uChar.AsciiChar == 'k' ||
						key.uChar.AsciiChar == 'K') {
						if (index > 0) {
							--index;
							move_cursor(-1);
						}
					}

					if (key.uChar.AsciiChar == ' ')
						selected_item = index;

					return true;
				}

				return false;
			}

		private:
			void move_cursor(short y) {
				const short height = position.height();

				if (y > 0)
					if (ycursor < (height - 1)) ++ycursor;
					else ++item_begin;
				else if (y < 0)
					if (ycursor > 0) --ycursor;
					else --item_begin;
			}
			std::string prefix(short& index) {
				if ((selected_item >= 0) && (index == selected_item))
					return "(●)";

				return "( )";
			}

			std::vector<std::string> items;
			short selected_item = -1;
			short item_begin = 0;
			short index = 0;
			short ycursor = 0;
		};
		namespace Input {
			class Base : public Node, public Interact {
			public:
				Base() = default;
				Base(std::string placeholder) :
					placeholder(std::move(placeholder)) {}

				bool empty() { return content.empty(); }
				const std::string& value() { return content; }
				void clear() {
					content.clear();
					text_begin = 0;
					index = 0;
					xcursor = 0;
					ycursor = 0;
				}

			public: // Node
				void init() override {
					width = 30;
					height = 1;
					foreground = content.empty() ? Palette256::Gray : Palette256::Black;
					background = focused() ? Palette256::White : Palette256::Gray6;
				}

			protected:
				void move_cursor(short x, short y) {
					const short width = position.width();
					const short height = position.height();

					if (x > 0)
						if (xcursor < (width - 1)) ++xcursor;
						else if (ycursor < (height - 1)) xcursor = 0, ++ycursor;
						else xcursor = 0, text_begin += width;
					else if (x < 0)
						if (xcursor > 0) --xcursor;
						else if (ycursor > 0) xcursor = (width - 1), --ycursor;
						else xcursor = (width - 1), text_begin -= width;

					if (y > 0)
						if (ycursor < (height - 1)) ++ycursor;
						else text_begin += width;
					else if (y < 0)
						if (ycursor > 0) --ycursor;
						else text_begin -= width;
				}
				std::string repeat(short times, const std::string& value) {
					std::string temp;

					while (times--) temp.append(value);
					return temp;
				}

				std::string content;
				std::string placeholder;
				short text_begin = 0;
				short index = 0;
				short xcursor = 0;
				short ycursor = 0;
			};
			class Text : public Base {
			public:
				using Base::Base;

			public: // Node
				void draw(Image& target) override {
					const std::string& text = content.empty() ? placeholder : content;
					for (short i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (short x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							apply_style(p);

							if (i < text.size())
								target.at(x, y).character = text.at(i++);
						}
					}

					if (looping())
						target.at(position.left + xcursor, position.top + ycursor).properties[Reverse] = true;
				}

			public: // Interact
				bool onkey(const KEY_EVENT_RECORD& key) override {
					if (key.wVirtualKeyCode == VK_RETURN)
						looping(!looping());

					if (looping()) {
						const short width = position.width();
						const short height = position.height();

						switch (key.wVirtualKeyCode) {
						case VK_LEFT:
							if (index > 0) {
								--index;
								move_cursor(-1, 0);
							}
							break;
						case VK_UP:
							if (index - width >= 0) {
								index -= width;
								move_cursor(0, -1);
							}
							else goto $START;
							break;
						case VK_RIGHT:
							if (index < content.size()) {
								++index;
								move_cursor(1, 0);
							}
							break;
						case VK_DOWN:
							if (index + width <= content.size()) {
								index += width;
								move_cursor(0, 1);
							}
							else goto $END;
							break;
						case VK_BACK:
							if (index > 0) {
								content.erase(content.begin() + --index);
								move_cursor(-1, 0);
							}
							break;
						case VK_DELETE:
							if (index < content.size()) {
								content.erase(content.begin() + index);
							}
							break;
						case VK_HOME: $START:
							if (index > 0) {
								index = 0;
								text_begin = 0;
								xcursor = 0;
								ycursor = 0;
							}
							break;
						case VK_END: $END:
							if (index < content.size()) {
								index = static_cast<int>(content.size());
								xcursor = index % width;
								ycursor = std::min(index / width, height - 1);
								text_begin = std::max(0, index - (width * (height - 1)) - xcursor);
							}
							break;
						default:
							if ((key.uChar.AsciiChar > 0x1F) && (key.uChar.AsciiChar < 0x7F)) {
								content.insert(content.begin() + index++, key.uChar.AsciiChar);
								move_cursor(1, 0);
							}
						}

						return true;
					}

					return false;
				}
			};
			class Number : public Base {
			public:
				using Base::Base;

			public: // Node
				void draw(Image& target) override {
					const std::string& text = content.empty() ? placeholder : content;
					for (short i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (short x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							apply_style(p);

							if (i < text.size())
								target.at(x, y).character = text.at(i++);
						}
					}

					if (looping())
						target.at(position.left + xcursor, position.top + ycursor).properties[Reverse] = true;
				}

			public: // Interact
				bool onkey(const KEY_EVENT_RECORD& key) override {
					if (key.wVirtualKeyCode == VK_RETURN)
						looping(!looping());

					if (looping()) {
						const short width = position.width();
						const short height = position.height();

						switch (key.wVirtualKeyCode) {
						case VK_LEFT:
							if (index > 0) {
								--index;
								move_cursor(-1, 0);
							}
							break;
						case VK_UP:
							if (index - width >= 0) {
								index -= width;
								move_cursor(0, -1);
							}
							else goto $START;
							break;
						case VK_RIGHT:
							if (index < content.size()) {
								++index;
								move_cursor(1, 0);
							}
							break;
						case VK_DOWN:
							if (index + width <= content.size()) {
								index += width;
								move_cursor(0, 1);
							}
							else goto $END;
							break;
						case VK_BACK:
							if (index > 0) {
								content.erase(content.begin() + --index);
								move_cursor(-1, 0);
							}
							break;
						case VK_DELETE:
							if (index < content.size()) {
								content.erase(content.begin() + index);
							}
							break;
						case VK_HOME: $START:
							if (index > 0) {
								index = 0;
								text_begin = 0;
								xcursor = 0;
								ycursor = 0;
							}
							break;
						case VK_END: $END:
							if (index < content.size()) {
								index = static_cast<int>(content.size());
								xcursor = index % width;
								ycursor = std::min(index / width, height - 1);
								text_begin = std::max(0, index - (width * (height - 1)) - xcursor);
							}
							break;
						default:
							if ((key.uChar.AsciiChar > 0x2F) && (key.uChar.AsciiChar < 0x3A)) {
								content.insert(content.begin() + index++, key.uChar.AsciiChar);
								move_cursor(1, 0);
							}
						}

						return true;
					}

					return false;
				}
			};
			class Password : public Base {
			public:
				using Base::Base;

			public: // Node
				void draw(Image& target) override {
					size_t i = text_begin;
					const std::string& text = content.empty() ? placeholder : repeat(static_cast<short>(content.size()), "•");
					for (short y = position.top; y < position.bottom; ++y) {
						for (short x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							apply_style(p);

							if (i < text.size())
								target.at(x, y).character = Utf8::at(text, i);
						}
					}

					if (looping())
						target.at(position.left + xcursor, position.top + ycursor).properties[Reverse] = true;
				}

			public: // Interact
				bool onkey(const KEY_EVENT_RECORD& key) override {
					if (key.wVirtualKeyCode == VK_RETURN)
						looping(!looping());

					if (looping()) {
						const short width = position.width();
						const short height = position.height();

						switch (key.wVirtualKeyCode) {
						case VK_LEFT:
							if (index > 0) {
								--index;
								move_cursor(-1, 0);
							}
							break;
						case VK_UP:
							if (index - width >= 0) {
								index -= width;
								move_cursor(0, -1);
							}
							else goto $START;
							break;
						case VK_RIGHT:
							if (index < content.size()) {
								++index;
								move_cursor(1, 0);
							}
							break;
						case VK_DOWN:
							if (index + width <= content.size()) {
								index += width;
								move_cursor(0, 1);
							}
							else goto $END;
							break;
						case VK_BACK:
							if (index > 0) {
								content.erase(content.begin() + --index);
								move_cursor(-1, 0);
							}
							break;
						case VK_DELETE:
							if (index < content.size()) {
								content.erase(content.begin() + index);
							}
							break;
						case VK_HOME: $START:
							if (index > 0) {
								index = 0;
								text_begin = 0;
								xcursor = 0;
								ycursor = 0;
							}
							break;
						case VK_END: $END:
							if (index < content.size()) {
								index = static_cast<int>(content.size());
								xcursor = index % width;
								ycursor = std::min(index / width, height - 1);
								text_begin = std::max(0, index - (width * (height - 1)) - xcursor);
							}
							break;
						default:
							if ((key.uChar.AsciiChar > 0x1F) && (key.uChar.AsciiChar < 0x7F)) {
								content.insert(content.begin() + index++, key.uChar.AsciiChar);
								move_cursor(1, 0);
							}
						}

						return true;
					}

					return false;
				}
			};
			class Pin : public Base {
			public:
				using Base::Base;

			public: // Node
				void draw(Image& target) override {
					size_t i = text_begin;
					const std::string& text = content.empty() ? placeholder : repeat(static_cast<short>(content.size()), "•");
					for (short y = position.top; y < position.bottom; ++y) {
						for (short x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							apply_style(p);

							if (i < text.size())
								target.at(x, y).character = Utf8::at(text, i);
						}
					}

					if (looping())
						target.at(position.left + xcursor, position.top + ycursor).properties[Reverse] = true;
				}

			public: // Interact
				bool onkey(const KEY_EVENT_RECORD& key) override {
					if (key.wVirtualKeyCode == VK_RETURN)
						looping(!looping());

					if (looping()) {
						const short width = position.width();
						const short height = position.height();

						switch (key.wVirtualKeyCode) {
						case VK_LEFT:
							if (index > 0) {
								--index;
								move_cursor(-1, 0);
							}
							break;
						case VK_UP:
							if (index - width >= 0) {
								index -= width;
								move_cursor(0, -1);
							}
							else goto $START;
							break;
						case VK_RIGHT:
							if (index < content.size()) {
								++index;
								move_cursor(1, 0);
							}
							break;
						case VK_DOWN:
							if (index + width <= content.size()) {
								index += width;
								move_cursor(0, 1);
							}
							else goto $END;
							break;
						case VK_BACK:
							if (index > 0) {
								content.erase(content.begin() + --index);
								move_cursor(-1, 0);
							}
							break;
						case VK_DELETE:
							if (index < content.size()) {
								content.erase(content.begin() + index);
							}
							break;
						case VK_HOME: $START:
							if (index > 0) {
								index = 0;
								text_begin = 0;
								xcursor = 0;
								ycursor = 0;
							}
							break;
						case VK_END: $END:
							if (index < content.size()) {
								index = static_cast<int>(content.size());
								xcursor = index % width;
								ycursor = std::min(index / width, height - 1);
								text_begin = std::max(0, index - (width * (height - 1)) - xcursor);
							}
							break;
						default:
							if ((key.uChar.AsciiChar > 0x2F) && (key.uChar.AsciiChar < 0x3A)) {
								content.insert(content.begin() + index++, key.uChar.AsciiChar);
								move_cursor(1, 0);
							}
						}

						return true;
					}

					return false;
				}
			};
		}
	}
}

template<typename F>
std::shared_ptr<Simple::Base::Node> operator |(
	std::shared_ptr<Simple::Base::Node> left,
	F&& right) {
	std::invoke(std::forward<F>(right), left);
	return left;
}
void bold(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::Bold] = true;
}
void dim(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::Dim] = true;
}
void italic(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::Italic] = true;
}
void underline(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::Underline] = true;
}
void blinking(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::Blinking] = true;
}
void reverse(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::Reverse] = true;
}
void hidden(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::Hidden] = true;
}
void strikethrough(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::Strikethrough] = true;
}
void hflex(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::HorizontalFlex] = true;
}
void vflex(std::shared_ptr<Simple::Base::Node> node) {
	node->properties[Simple::Base::VerticalFlex] = true;
}
auto foreground(Simple::Foreground color) {
	return [&](std::shared_ptr<Simple::Base::Node> node) { node->foreground = color; };
}
auto background(Simple::Background color) {
	return [&](std::shared_ptr<Simple::Base::Node> node) { node->background = color; };
}

template<typename T>
std::shared_ptr<Simple::Base::Text> text(T&& value) {
	return std::make_shared<Simple::Base::Text>(std::forward<T>(value));
}
template<typename... T>
std::shared_ptr<Simple::Base::HorizontalLayout> hlayout(T&&... children) {
	return std::make_shared<Simple::Base::HorizontalLayout>(
		std::vector<std::shared_ptr<Simple::Base::Node>>{ std::forward<T>(children)... }
	);
}
template<typename... T>
std::shared_ptr<Simple::Base::VerticalLayout> vlayout(T&&... children) {
	return std::make_shared<Simple::Base::VerticalLayout>(
		std::vector<std::shared_ptr<Simple::Base::Node>>{ std::forward<T>(children)... }
	);
}
template<typename... T>
std::shared_ptr<Simple::Base::FreeLayout> flayout(T&&... children) {
	return std::make_shared<Simple::Base::FreeLayout>(
		std::vector<std::shared_ptr<Simple::Base::Node>>{ std::forward<T>(children)... }
	);
}
std::shared_ptr<Simple::Base::Filler> filler() {
	return std::make_shared<Simple::Base::Filler>();
}
std::shared_ptr<Simple::Base::HorizontalFiller> hfiller() {
	return std::make_shared<Simple::Base::HorizontalFiller>();
}
std::shared_ptr<Simple::Base::VerticalFiller> vfiller() {
	return std::make_shared<Simple::Base::VerticalFiller>();
}
std::shared_ptr<Simple::Base::Space> space() {
	return std::make_shared<Simple::Base::Space>();
}
std::shared_ptr<Simple::Base::Space> space(short size) {
	return std::make_shared<Simple::Base::Space>(size);
}
std::shared_ptr<Simple::Base::HorizontalSpace> hspace() {
	return std::make_shared<Simple::Base::HorizontalSpace>();
}
std::shared_ptr<Simple::Base::HorizontalSpace> hspace(short size) {
	return std::make_shared<Simple::Base::HorizontalSpace>(size);
}
std::shared_ptr<Simple::Base::VerticalSpace> vspace() {
	return std::make_shared<Simple::Base::VerticalSpace>();
}
std::shared_ptr<Simple::Base::VerticalSpace> vspace(short size) {
	return std::make_shared<Simple::Base::VerticalSpace>(size);
}
std::shared_ptr<Simple::Base::HorizontalSeparator> hseparator() {
	return std::make_shared<Simple::Base::HorizontalSeparator>();
}
namespace border {
	template<typename T>
	std::shared_ptr<Simple::Base::Border> ascii(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "-|+++++++++");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> light(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─│┌┬┐├┼┤└┴┘");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> heavy(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "━┃┏┳┓┣╋┫┗┻┛");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> double_light(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "═║╔╦╗╠╬╣╚╩╝");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> rounded(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─│╭┬╮├┼┤╰┴╯");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> hdouble(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "═│╒╤╕╞╪╡╘╧╛");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> vdouble(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─║╓╥╖╟╫╢╙╨╜");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> hheavy(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "━│┍┯┑┝┿┥┕┷┙");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> vheavy(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─┃┎┰┒┞╀┦┖┸┚");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> triple_dash(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "┄┆┌┬┐├┼┤└┴┘");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> quad_dash(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "┈┊┌┬┐├┼┤└┴┘");
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Border> double_dash(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "╌╎┌┬┐├┼┤└┴┘");
	}
}

template<typename N>
std::shared_ptr<Simple::Base::Button> button(N&& name) {
	return std::make_shared<Simple::Base::Button>(std::forward<N>(name));
}
template<typename N, typename F>
std::shared_ptr<Simple::Base::Button> button(N&& name, F&& func) {
	return std::make_shared<Simple::Base::Button>(std::forward<N>(name), std::forward<F>(func));
}
template<typename... T>
std::shared_ptr<Simple::Base::HorizontalContainer> hcontainer(T&&... children) {
	return std::make_shared<Simple::Base::HorizontalContainer>(
		std::vector<std::shared_ptr<Simple::Base::Interact>>{ std::forward<T>(children)... }
	);
}
template<typename... T>
std::shared_ptr<Simple::Base::VerticalContainer> vcontainer(T&&... children) {
	return std::make_shared<Simple::Base::VerticalContainer>(
		std::vector<std::shared_ptr<Simple::Base::Interact>>{ std::forward<T>(children)... }
	);
}
template<typename T>
std::shared_ptr<Simple::Base::Link> link(T&& name) {
	return std::make_shared<Simple::Base::Link>(std::forward<T>(name));
}
template<typename N, typename F>
std::shared_ptr<Simple::Base::Link> link(N&& name, F&& func) {
	return std::make_shared<Simple::Base::Link>(std::forward<N>(name), std::forward<F>(func));
}
template<typename T>
std::shared_ptr<Simple::Base::CheckboxList> checkbox_list(T&& items) {
	return std::make_shared<Simple::Base::CheckboxList>(std::forward<T>(items));
}
template<typename T>
std::shared_ptr<Simple::Base::RadioboxList> radiobox_list(T&& items) {
	return std::make_shared<Simple::Base::RadioboxList>(std::forward<T>(items));
}
namespace input {
	std::shared_ptr<Simple::Base::Input::Text> text() {
		return std::make_shared< Simple::Base::Input::Text>();
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Input::Text> text(T&& placeholder) {
		return std::make_shared< Simple::Base::Input::Text>(std::forward<T>(placeholder));
	}
	std::shared_ptr<Simple::Base::Input::Number> number() {
		return std::make_shared< Simple::Base::Input::Number>();
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Input::Number> number(T&& placeholder) {
		return std::make_shared< Simple::Base::Input::Number>(std::forward<T>(placeholder));
	}
	std::shared_ptr<Simple::Base::Input::Password> password() {
		return std::make_shared< Simple::Base::Input::Password>();
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Input::Password> password(T&& placeholder) {
		return std::make_shared< Simple::Base::Input::Password>(std::forward<T>(placeholder));
	}
	std::shared_ptr<Simple::Base::Input::Pin> pin() {
		return std::make_shared< Simple::Base::Input::Pin>();
	}
	template<typename T>
	std::shared_ptr<Simple::Base::Input::Pin> pin(T&& placeholder) {
		return std::make_shared< Simple::Base::Input::Pin>(std::forward<T>(placeholder));
	}
}

#include <iostream>
class Application {
public:
	Application() :
		image(100, 18) {}

	Application& operator <<(std::shared_ptr<Simple::Base::Node> right) {
		node.push(std::move(right));
		return *this;
	}
	Application& operator <<(std::shared_ptr<Simple::Base::Interact> right) {
		right->focused(true);
		interact.push(std::move(right));
		return *this;
	}
	Application& operator <<(Application& (*func)(Application&)) {
		return func(*this);
	}

	Simple::Image image;
	std::stack<std::shared_ptr<Simple::Base::Node>> node;
	std::stack<std::shared_ptr<Simple::Base::Interact>> interact;
	bool running = true;
} simple;

Application& start(Application& left) {
	SetConsoleOutputCP(CP_UTF8);

	left.node.top()->init();
	left.node.top()->set(left.image.size());
	left.node.top()->draw(left.image);
	left.image.draw(std::cout);

	if (!left.interact.empty()) {
		HANDLE handle = GetStdHandle(STD_INPUT_HANDLE);
		INPUT_RECORD record[128];
		DWORD events;
		bool update = false;

		while (left.running) {
			ReadConsoleInput(handle, record, 128, &events);

			for (DWORD i = 0; i < events; ++i) {
				const KEY_EVENT_RECORD& key = record[i].Event.KeyEvent;

				if (key.bKeyDown) {
					left.interact.top()->onkey(key);
					update = true;
				}
			}

			if (update) {
				left.image.clear();
				left.node.top()->init();
				left.node.top()->set(left.image.size());
				left.node.top()->draw(left.image);
				left.image.draw(std::cout);
			}
		}
	}

	return left;
}