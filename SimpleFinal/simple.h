#pragma once

#include <bitset>
template<size_t T>
using BitProperties = std::bitset<T>;

#include <functional>
template<typename T>
using Function = std::function<T>;

#include <initializer_list>
template<typename T>
using InitializerList = std::initializer_list<T>;

#include <memory>
template<typename T>
using SharedPointer = std::shared_ptr<T>;

#include <string>
using String = std::string;

#include <vector>
template<typename T>
using Vector = std::vector<T>;

#include <ostream>
using OutStream = std::ostream;

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
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

		virtual void draw(String&) = 0;

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
		void draw(String& target) override {
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
		void draw(String& target) override {
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
		String character = " ";
		Foreground foreground;
		Background background;
		BitProperties<32> properties;
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

		Rectangle size() { return { 0, 0, width, height }; }

		void clear() { std::fill(pixels.begin(), pixels.end(), Pixel{}); }
		void clear(Rectangle position) {
			for (short y = position.top; y < position.bottom; ++y)
				for (short x = position.left; x < position.right; ++x)
					at(x, y) = Pixel{};
		}

		void draw(String& target) {
			const char* on[] = { "1;", "2;", "3;", "4;", "5;", "7;", "8;", "9;" };
			const char* off[] = { "22;", "22;", "23;", "24;", "25;", "27;", "28;", "29;" };

			Pixel prev;
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
		void draw(OutStream& target) {
			String output = "\x1b[H";

			draw(output);
			target << output;
		}

	private:
		Vector<Pixel> pixels;
		short width = 0;
		short height = 0;
	};

	namespace Utf8 {
		size_t size(const String& target) {
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

		String at(const String& target, size_t& temp_index) {
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
		String at(const String& target, size_t&& index) {
			for (size_t i = 0, current = 0; i < target.size(); ++current) {
				String ch = at(target, i);

				if (current == index)
					return ch;
			}

			return "";
		}
		String at(const String& target, short& temp_index) {
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
		String at(const String& target, short&& index) {
			for (short i = 0, current = 0; i < target.size(); ++current) {
				String ch = at(target, i);

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
			VerticalFlex,
			InitializedWidth,
			InitializedHeight
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
			virtual void set(Rectangle position) { this->position = position; }
			virtual void draw(Image&) {}

		protected:
			inline void init_size(short width, short height) {
				if (!properties[InitializedWidth]) this->width = width;
				if (!properties[InitializedHeight]) this->height = height;
			}
			inline void draw_style(Pixel& target) {
				if (foreground.type != Color::Type::Uninitialized)
					target.foreground = foreground;

				if (background.type != Color::Type::Uninitialized)
					target.background = background;

				target.properties = properties;
			}
			inline void draw_style(Image& target) {
				for (short y = position.top; y < position.bottom; ++y)
					for (short x = position.left; x < position.right; ++x)
						draw_style(target.at(x, y));
			}

		public:
			Foreground foreground;
			Background background;
			Rectangle position;
			BitProperties<32> properties;
			short width = 0;
			short height = 0;
		};
		class Interact {
		public:
			bool focused() const { return focus; }
			virtual void focused(bool value) { focus = value; }

			bool looping() const { return loop; }
			virtual void looping(bool value) { loop = value; }

			virtual bool onkey(const KEY_EVENT_RECORD&) { return false; }

		protected:
			bool focus = false;
			bool loop = false;
		};

		class Text : public Node {
		public:
			Text(String content) :
				content(std::move(content)) {}

		public: // Node
			void init() override {
				init_size(static_cast<short>(content.size()), 1);
			}
			void draw(Image& target) override {
				for (short i = 0, y = position.top; y < position.bottom; ++y) {
					for (short x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);

						draw_style(p);

						if (i < content.size())
							p.character = content.at(i++);
					}
				}
			}

		private:
			String content;
		};
		class HorizontalLayout : public Node {
		public:
			HorizontalLayout(InitializerList<SharedPointer<Node>> nodes) :
				nodes(std::move(nodes)) {}

		public: // Node
			void init() override {
				init_size(0, 0);

				for (const auto& node : nodes) {
					node->init();

					if (!properties[InitializedWidth])
						width += node->width;
					if (!properties[InitializedHeight])
						height = std::max(height, node->height);
				}
			}
			void set(Rectangle position) override {
				Node::set(position);

				short total_nodes_flex = 0;
				short total_nodes_width = 0;
				for (const auto& node : nodes) {
					total_nodes_flex += node->properties[HorizontalFlex];
					total_nodes_width += node->width;
				}

				short extra_space = position.width() - total_nodes_width;
				for (const auto& node : nodes) {
					if (node->properties[HorizontalFlex]) {
						short added_space = extra_space / std::max(total_nodes_flex, static_cast<short>(1));

						position.right = position.left + node->width + added_space;
						extra_space -= added_space;
						--total_nodes_flex;
					}
					else position.right = position.left + node->width;

					if (node->properties[VerticalFlex])
						position.bottom = this->position.bottom;
					else position.bottom = position.top + node->height;

					node->set(position);

					position.left = position.right;
				}
			}
			void draw(Image& target) override {
				for (const auto& node : nodes)
					node->draw(target);
			}

		private:
			Vector<SharedPointer<Node>> nodes;
		};
		class VerticalLayout : public Node {
		public:
			VerticalLayout(InitializerList<SharedPointer<Node>> nodes) :
				nodes(std::move(nodes)) {}

		public: // Node
			void init() override {
				init_size(0, 0);

				for (const auto& node : nodes) {
					node->init();

					if (!properties[InitializedWidth])
						width = std::max(width, node->width);
					if (!properties[InitializedHeight])
						height += node->height;
				}
			}
			void set(Rectangle position) override {
				Node::set(position);

				short total_nodes_flex = 0;
				short total_nodes_height = 0;
				for (const auto& node : nodes) {
					total_nodes_flex += node->properties[VerticalFlex];
					total_nodes_height += node->height;
				}

				short extra_space = position.height() - total_nodes_height;
				for (const auto& node : nodes) {
					if (node->properties[HorizontalFlex])
						position.right = this->position.right;
					else position.right = position.left + node->width;

					if (node->properties[VerticalFlex]) {
						short added_space = extra_space / std::max(total_nodes_flex, static_cast<short>(1));

						position.bottom = position.top + node->height + added_space;
						extra_space -= added_space;
						--total_nodes_flex;
					}
					else position.bottom = position.top + node->height;

					node->set(position);

					position.top = position.bottom;
				}
			}
			void draw(Image& target) override {
				for (const auto& node : nodes)
					node->draw(target);
			}

		private:
			Vector<SharedPointer<Node>> nodes;
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
			Border(SharedPointer<Node> node, String style) :
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
			String style;
			SharedPointer<Node> node;
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
			Button(String name) :
				name(std::move(name)) {}
			Button(String name, Function<void()> func) :
				name(std::move(name)),
				func(std::move(func)) {}

		public: // Node
			void init() override {
				init_size(static_cast<short>(2 + name.size()), 1);

				foreground = Palette256::Black;
				background = focused() ? Palette256::White : Palette256::Gray6;
			}
			void draw(Image& target) override {
				short xpos = position.left + ((position.width() - static_cast<short>(name.size())) / 2);

				for (short i = 0, y = position.top; y < position.bottom; ++y) {
					for (short x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);

						draw_style(p);

						if ((x >= xpos) && (i < name.size()))
							p.character = name.at(i++);
					}
				}
			}

		public: // Interact
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if ((key.wVirtualKeyCode == VK_RETURN)
					&& focused()
					&& func) {
					func();
					return true;
				}

				return false;
			}

		private:
			String name;
			Function<void()> func;
		};
		class HorizontalContainer : public Interact {
		public:
			HorizontalContainer(InitializerList<SharedPointer<Interact>> interacts) :
				interacts(std::move(interacts)) {}

		public: // Interact
			void focused(bool value) override {
				Interact::focused(value);

				interacts.at(index)->focused(value);
			}
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if (interacts.at(index)->onkey(key))
					return true;

				if (((key.dwControlKeyState & SHIFT_PRESSED) && (key.wVirtualKeyCode == VK_TAB))
					|| key.wVirtualKeyCode == VK_LEFT
					|| key.uChar.AsciiChar == 'h'
					|| key.uChar.AsciiChar == 'H') {
					if (index > 0) {
						interacts.at(index)->focused(false);
						--index;
						interacts.at(index)->focused(true);
						return true;
					}
					return false;
				}

				if (key.wVirtualKeyCode == VK_TAB
					|| key.wVirtualKeyCode == VK_RIGHT
					|| key.uChar.AsciiChar == 'l'
					|| key.uChar.AsciiChar == 'L') {
					if (index < (interacts.size() - 1)) {
						interacts.at(index)->focused(false);
						++index;
						interacts.at(index)->focused(true);
						return true;
					}
					return false;
				}

				return false;
			}

		private:
			Vector<SharedPointer<Interact>> interacts;
			short index = 0;
		};
		class VerticalContainer : public Interact {
		public:
			VerticalContainer(InitializerList<SharedPointer<Interact>> interacts) :
				interacts(std::move(interacts)) {}

		public: // Interact
			void focused(bool value) override {
				Interact::focused(value);

				interacts.at(index)->focused(value);
			}
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if (interacts.at(index)->onkey(key))
					return true;

				if (((key.dwControlKeyState & SHIFT_PRESSED) && (key.wVirtualKeyCode == VK_TAB))
					|| key.wVirtualKeyCode == VK_UP
					|| key.uChar.AsciiChar == 'k'
					|| key.uChar.AsciiChar == 'K') {
					if (index > 0) {
						interacts.at(index)->focused(false);
						--index;
						interacts.at(index)->focused(true);
						return true;
					}
					return false;
				}

				if (key.wVirtualKeyCode == VK_TAB
					|| key.wVirtualKeyCode == VK_DOWN
					|| key.uChar.AsciiChar == 'j'
					|| key.uChar.AsciiChar == 'J') {
					if (index < (interacts.size() - 1)) {
						interacts.at(index)->focused(false);
						++index;
						interacts.at(index)->focused(true);
						return true;
					}
					return false;
				}

				return false;
			}

		private:
			Vector<SharedPointer<Interact>> interacts;
			short index = 0;
		};
		class Link : public Node, public Interact {
		public:
			Link(String name) :
				name(std::move(name)) {}
			Link(String name, Function<void()> func) :
				name(std::move(name)),
				func(std::move(func)) {}

		public: // Node
			void init() override {
				init_size(static_cast<short>(name.size()), 1);

				properties[Underline] = true;
				properties[Reverse] = focused() ? true : false;
			}
			void draw(Image& target) override {
				for (short i = 0, y = position.top; y < position.bottom; ++y) {
					for (short x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);

						draw_style(p);

						if (i < name.size())
							p.character = name.at(i++);
					}
				}
			}

		public: // Interact
			bool onkey(const KEY_EVENT_RECORD& key) override {
				if ((key.wVirtualKeyCode == VK_RETURN)
					&& focused()
					&& func) {
					func();
					return true;
				}

				return false;
			}

		private:
			String name;
			Function<void()> func;
		};
		class CheckBoxList : public Node, public Interact {
		public:
			CheckBoxList(InitializerList<String> items) :
				items(std::move(items)) {}

		public: // Node
			void init() override {
				init_size(30, 5);

				foreground = Palette256::Black;
				background = focused() ? Palette256::White : Palette256::Gray6;
			}
			void draw(Image& target) override {
				for (short ii = item_begin, y = position.top; y < position.bottom; ++ii, ++y) {
					for (short i = 0, x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);
						String item = prefix(ii) + items.at(ii);

						draw_style(p);

						if (i < item.size())
							p.character = Utf8::at(item, i);
					}
				}

				if (looping())
					for (; position.left < position.right; ++position.left)
						target.at(position.left, (position.top + ycursor)).properties[Reverse] = true;
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

			String prefix(const short& index) {
				if ((!selected_items.empty())
					&& (std::find(selected_items.begin(), selected_items.end(), index) != selected_items.end()))
					return "[■]";

				return "[ ]";
			}

			Vector<String> items;
			Vector<short> selected_items;
			short item_begin = 0;
			short index = 0;
			short ycursor = 0;
		};
		class RadioBoxList : public Node, public Interact {
		public:
			RadioBoxList(InitializerList<String> items) :
				items(std::move(items)) {}

		public: // Node
			void init() override {
				init_size(30, 5);

				foreground = Palette256::Black;
				background = focused() ? Palette256::White : Palette256::Gray6;
			}
			void draw(Image& target) override {
				for (short ii = item_begin, y = position.top; y < position.bottom; ++ii, ++y) {
					for (short i = 0, x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);
						String item = prefix(ii) + items.at(ii);

						draw_style(p);

						if (i < item.size())
							p.character = Utf8::at(item, i);
					}
				}

				if (looping())
					for (; position.left < position.right; ++position.left)
						target.at(position.left, (position.top + ycursor)).properties[Reverse] = true;
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

			String prefix(const short& index) {
				if ((selected_item >= 0) && (index == selected_item))
					return "(●)";

				return "( )";
			}

			Vector<String> items;
			short selected_item = -1;
			short item_begin = 0;
			short index = 0;
			short ycursor = 0;
		};
		namespace Input {
			class Base : public Node, public Interact {
			public:
				Base() = default;
				Base(String placeholder) :
					placeholder(std::move(placeholder)) {}

				void clear() {
					content.clear();
					text_begin = 0;
					index = 0;
					xcursor = 0;
					ycursor = 0;
				}

				bool empty() { return content.empty(); }

				const String& value() { return content; }

			public: // Node
				void init() override {
					init_size(30, 1);

					foreground = content.empty() ? Palette256::Gray : Palette256::Black;
					background = focused() ? Palette256::White : Palette256::Gray6;
				}

			protected:
				void move_cursor(short x, short y, const short& width, const short& height) {
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

				String repeat(short times, const String& value) {
					String temp;

					while (times--) temp.append(value);
					return temp;
				}

				String content;
				String placeholder;
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
					const String& text = content.empty() ? placeholder : content;
					for (short i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (short x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							draw_style(p);

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
								move_cursor(-1, 0, width, height);
							}
							break;
						case VK_UP:
							if (index - width >= 0) {
								index -= width;
								move_cursor(0, -1, width, height);
							}
							else goto $START;
							break;
						case VK_RIGHT:
							if (index < content.size()) {
								++index;
								move_cursor(1, 0, width, height);
							}
							break;
						case VK_DOWN:
							if (index + width <= content.size()) {
								index += width;
								move_cursor(0, 1, width, height);
							}
							else goto $END;
							break;
						case VK_BACK:
							if (index > 0) {
								content.erase(content.begin() + --index);
								move_cursor(-1, 0, width, height);
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
								move_cursor(1, 0, width, height);
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
					const String& text = content.empty() ? placeholder : content;
					for (short i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (short x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							draw_style(p);

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
								move_cursor(-1, 0, width, height);
							}
							break;
						case VK_UP:
							if (index - width >= 0) {
								index -= width;
								move_cursor(0, -1, width, height);
							}
							else goto $START;
							break;
						case VK_RIGHT:
							if (index < content.size()) {
								++index;
								move_cursor(1, 0, width, height);
							}
							break;
						case VK_DOWN:
							if (index + width <= content.size()) {
								index += width;
								move_cursor(0, 1, width, height);
							}
							else goto $END;
							break;
						case VK_BACK:
							if (index > 0) {
								content.erase(content.begin() + --index);
								move_cursor(-1, 0, width, height);
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
								move_cursor(1, 0, width, height);
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
					const String& text = content.empty() ? placeholder : repeat(static_cast<short>(content.size()), "•");
					for (short i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (short x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							draw_style(p);

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
								move_cursor(-1, 0, width, height);
							}
							break;
						case VK_UP:
							if (index - width >= 0) {
								index -= width;
								move_cursor(0, -1, width, height);
							}
							else goto $START;
							break;
						case VK_RIGHT:
							if (index < content.size()) {
								++index;
								move_cursor(1, 0, width, height);
							}
							break;
						case VK_DOWN:
							if (index + width <= content.size()) {
								index += width;
								move_cursor(0, 1, width, height);
							}
							else goto $END;
							break;
						case VK_BACK:
							if (index > 0) {
								content.erase(content.begin() + --index);
								move_cursor(-1, 0, width, height);
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
								move_cursor(1, 0, width, height);
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
					const String& text = content.empty() ? placeholder : repeat(static_cast<short>(content.size()), "•");
					for (short i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (short x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							draw_style(p);

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
								move_cursor(-1, 0, width, height);
							}
							break;
						case VK_UP:
							if (index - width >= 0) {
								index -= width;
								move_cursor(0, -1, width, height);
							}
							else goto $START;
							break;
						case VK_RIGHT:
							if (index < content.size()) {
								++index;
								move_cursor(1, 0, width, height);
							}
							break;
						case VK_DOWN:
							if (index + width <= content.size()) {
								index += width;
								move_cursor(0, 1, width, height);
							}
							else goto $END;
							break;
						case VK_BACK:
							if (index > 0) {
								content.erase(content.begin() + --index);
								move_cursor(-1, 0, width, height);
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
								move_cursor(1, 0, width, height);
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

template<typename T>
concept NodeCallback = std::invocable<T, SharedPointer<Simple::Base::Node>>
&& std::same_as<std::invoke_result_t<T, SharedPointer<Simple::Base::Node>>, void>;

template<typename T>
concept ButtonLinkCallback = std::invocable<T&> && std::same_as<std::invoke_result_t<T&>, void>;

template<typename T>
concept TypeNumber = std::integral<T> || std::floating_point<T>;

template<typename T>
concept TypeText = std::same_as<std::remove_cvref_t<T>, std::string>
|| (std::is_array_v<std::remove_reference_t<T>> && std::same_as<std::remove_cv_t<std::remove_extent_t<std::remove_reference_t<T>>>, char>);

template<typename T>
struct is_node_shared_pointer : std::false_type {};
template<typename T> requires std::derived_from<T, Simple::Base::Node>
struct is_node_shared_pointer<SharedPointer<T>> : std::true_type {};
template<typename T>
concept ChildOfNode = is_node_shared_pointer<std::remove_cvref_t<T>>::value;

template<typename T>
struct is_interact_shared_pointer : std::false_type {};
template<typename T> requires std::derived_from<T, Simple::Base::Interact>
struct is_interact_shared_pointer<SharedPointer<T>> : std::true_type {};
template<typename T>
concept ChildOfInteract = is_interact_shared_pointer<std::remove_cvref_t<T>>::value;

template <typename T>
struct is_shared_pointer_type : std::false_type {};
template <typename T>
struct is_shared_pointer_type<std::shared_ptr<T>> : std::true_type {};
template <typename T>
concept is_shared_pointer = is_shared_pointer_type<std::remove_cvref_t<T>>::value;

template<NodeCallback T>
SharedPointer<Simple::Base::Node> operator |(
	SharedPointer<Simple::Base::Node> left,
	T&& right) {
	std::invoke(std::forward<T>(right), left);
	return left;
}

void bold(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::Bold] = true;
}
void dim(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::Dim] = true;
}
void italic(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::Italic] = true;
}
void underline(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::Underline] = true;
}
void blinking(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::Blinking] = true;
}
void reverse(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::Reverse] = true;
}
void hidden(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::Hidden] = true;
}
void strikethrough(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::Strikethrough] = true;
}
void hflex(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::HorizontalFlex] = true;
}
void vflex(SharedPointer<Simple::Base::Node> node) {
	node->properties[Simple::Base::VerticalFlex] = true;
}
auto foreground(Simple::Foreground color) {
	return [color](SharedPointer<Simple::Base::Node> node) { node->foreground = color; };
}
auto background(Simple::Background color) {
	return [color](SharedPointer<Simple::Base::Node> node) { node->background = color; };
}
auto width(short size) {
	return [size](SharedPointer<Simple::Base::Node> node) {
		node->properties[Simple::Base::InitializedWidth] = true;
		node->width = size;
		};
}
auto height(short size) {
	return [size](SharedPointer<Simple::Base::Node> node) {
		node->properties[Simple::Base::InitializedHeight] = true;
		node->height = size;
		};
}

template<TypeText T>
SharedPointer<Simple::Base::Text> text(T&& value) {
	return std::make_shared<Simple::Base::Text>(std::forward<T>(value));
}
template<ChildOfNode... T>
SharedPointer<Simple::Base::HorizontalLayout> hlayout(T&&... nodes) {
	return std::make_shared<Simple::Base::HorizontalLayout>(
		InitializerList<SharedPointer<Simple::Base::Node>> { std::forward<T>(nodes)... }
	);
}
template<ChildOfNode... T>
SharedPointer<Simple::Base::VerticalLayout> vlayout(T&&... nodes) {
	return std::make_shared<Simple::Base::VerticalLayout>(
		InitializerList<SharedPointer<Simple::Base::Node>> { std::forward<T>(nodes)... }
	);
}
SharedPointer<Simple::Base::Filler> filler() {
	return std::make_shared<Simple::Base::Filler>();
}
SharedPointer<Simple::Base::HorizontalFiller> hfiller() {
	return std::make_shared<Simple::Base::HorizontalFiller>();
}
SharedPointer<Simple::Base::VerticalFiller> vfiller() {
	return std::make_shared<Simple::Base::VerticalFiller>();
}
SharedPointer<Simple::Base::Space> space() {
	return std::make_shared<Simple::Base::Space>();
}
template<TypeNumber T>
SharedPointer<Simple::Base::Space> space(T&& value) {
	return std::make_shared<Simple::Base::Space>(std::forward<T>(value));
}
SharedPointer<Simple::Base::HorizontalSpace> hspace() {
	return std::make_shared<Simple::Base::HorizontalSpace>();
}
template<TypeNumber T>
SharedPointer<Simple::Base::HorizontalSpace> hspace(T&& value) {
	return std::make_shared<Simple::Base::HorizontalSpace>(std::forward<T>(value));
}
SharedPointer<Simple::Base::VerticalSpace> vspace() {
	return std::make_shared<Simple::Base::VerticalSpace>();
}
template<TypeNumber T>
SharedPointer<Simple::Base::VerticalSpace> vspace(T&& value) {
	return std::make_shared<Simple::Base::VerticalSpace>(std::forward<T>(value));
}
SharedPointer<Simple::Base::HorizontalSeparator> hseparator() {
	return std::make_shared<Simple::Base::HorizontalSeparator>();
}
namespace border {
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> ascii(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "-|+++++++++");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> light(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─│┌┬┐├┼┤└┴┘");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> heavy(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "━┃┏┳┓┣╋┫┗┻┛");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> double_light(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "═║╔╦╗╠╬╣╚╩╝");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> rounded(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─│╭┬╮├┼┤╰┴╯");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> hdouble(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "═│╒╤╕╞╪╡╘╧╛");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> vdouble(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─║╓╥╖╟╫╢╙╨╜");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> hheavy(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "━│┍┯┑┝┿┥┕┷┙");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> vheavy(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─┃┎┰┒┞╀┦┖┸┚");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> triple_dash(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "┄┆┌┬┐├┼┤└┴┘");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> quad_dash(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "┈┊┌┬┐├┼┤└┴┘");
	}
	template<ChildOfNode T>
	SharedPointer<Simple::Base::Border> double_dash(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "╌╎┌┬┐├┼┤└┴┘");
	}
}

template<TypeText N>
SharedPointer<Simple::Base::Button> button(N&& name) {
	return std::make_shared<Simple::Base::Button>(std::forward<N>(name));
}
template<TypeText N, ButtonLinkCallback F>
SharedPointer<Simple::Base::Button> button(N&& name, F&& callback) {
	return std::make_shared<Simple::Base::Button>(std::forward<N>(name), std::forward<F>(callback));
}
template<ChildOfInteract... T>
SharedPointer<Simple::Base::HorizontalContainer> hcontainer(T&&... interacts) {
	return std::make_shared<Simple::Base::HorizontalContainer>(
		InitializerList<SharedPointer<Simple::Base::Interact>>{ std::forward<T>(interacts)... }
	);
}
template<ChildOfInteract... T>
SharedPointer<Simple::Base::VerticalContainer> vcontainer(T&&... interacts) {
	return std::make_shared<Simple::Base::VerticalContainer>(
		InitializerList<SharedPointer<Simple::Base::Interact>>{ std::forward<T>(interacts)... }
	);
}
template<TypeText N>
SharedPointer<Simple::Base::Link> link(N&& name) {
	return std::make_shared<Simple::Base::Button>(std::forward<N>(name));
}
template<TypeText N, ButtonLinkCallback F>
SharedPointer<Simple::Base::Link> link(N&& name, F&& callback) {
	return std::make_shared<Simple::Base::Link>(std::forward<N>(name), std::forward<F>(callback));
}
template<TypeText... T>
SharedPointer<Simple::Base::CheckBoxList> checkbox_list(T&&... items) {
	return std::make_shared<Simple::Base::CheckBoxList>(
		InitializerList<String>{ std::forward<T>(items)... }
	);
}
SharedPointer<Simple::Base::CheckBoxList> checkbox_list(InitializerList<String> item) {
	return std::make_shared<Simple::Base::CheckBoxList>(std::move(item));
}
template<TypeText... T>
SharedPointer<Simple::Base::RadioBoxList> radiobox_list(T&&... items) {
	return std::make_shared<Simple::Base::RadioBoxList>(
		InitializerList<String>{ std::forward<T>(items)... }
	);
}
SharedPointer<Simple::Base::RadioBoxList> radiobox_list(InitializerList<String> item) {
	return std::make_shared<Simple::Base::RadioBoxList>(std::move(item));
}
namespace input {
	SharedPointer<Simple::Base::Input::Text> text() {
		return std::make_shared<Simple::Base::Input::Text>();
	}
	template<TypeText T>
	SharedPointer<Simple::Base::Input::Text> text(T&& placeholder) {
		return std::make_shared<Simple::Base::Input::Text>(std::forward<T>(placeholder));
	}
	SharedPointer<Simple::Base::Input::Number> number() {
		return std::make_shared<Simple::Base::Input::Number>();
	}
	template<TypeText T>
	SharedPointer<Simple::Base::Input::Number> number(T&& placeholder) {
		return std::make_shared<Simple::Base::Input::Number>(std::forward<T>(placeholder));
	}
	SharedPointer<Simple::Base::Input::Password> password() {
		return std::make_shared<Simple::Base::Input::Password>();
	}
	template<TypeText T>
	SharedPointer<Simple::Base::Input::Password> password(T&& placeholder) {
		return std::make_shared<Simple::Base::Input::Password>(std::forward<T>(placeholder));
	}
	SharedPointer<Simple::Base::Input::Pin> pin() {
		return std::make_shared<Simple::Base::Input::Pin>();
	}
	template<TypeText T>
	SharedPointer<Simple::Base::Input::Pin> pin(T&& placeholder) {
		return std::make_shared<Simple::Base::Input::Pin>(std::forward<T>(placeholder));
	}
}

#include <stack>
#include <iostream>
class Application {
public:
	Application() :
		image(100, 18) {}

	template<typename T>
	Application& operator <<(T&& right) {
		if constexpr (is_shared_pointer<T>) {
			using left = typename std::remove_cvref_t<T>::element_type;

			if constexpr (std::derived_from<left, Simple::Base::Node>)
				node.push(std::forward<T>(right));
			else if constexpr (std::derived_from<left, Simple::Base::Interact>) {
				right->focused(true);
				interact.push(std::forward<T>(right));
			}
		}

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

Application& back(Application& left) {
	left.node.pop();
	left.interact.pop();

	return left;
}
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