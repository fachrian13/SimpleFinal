#pragma once

#include <bitset>
namespace Simple {
	template<size_t Bits>
	using BitProperties = std::bitset<Bits>;
}

#include <functional>
namespace Simple {
	template<typename T>
	using Function = std::function<T>;
}

#include <memory>
namespace Simple {
	template<typename T>
	using SharedMemory = std::shared_ptr<T>;
}

#include <ostream>
namespace Simple {
	using OutputStream = std::ostream;
}

#include <string>
namespace Simple {
	namespace To {
		template<typename T>
			requires std::is_integral_v<T> || std::is_floating_point_v<T>
		constexpr auto String(T value) {
			return std::to_string(value);
		}
	}

	using String = std::string;
}

#include <vector>
namespace Simple {
	template<typename T>
	using Vector = std::vector<T>;
}

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
namespace Simple {
	using KeyEvent = KEY_EVENT_RECORD;
}

#include <stdint.h>
namespace Simple {
	namespace To {
		template<typename T>
			requires std::is_enum_v<T> || std::is_integral_v<T>
		constexpr auto i8(T value) {
			return static_cast<signed char>(value);
		}

		template<typename T>
			requires std::is_enum_v<T> || std::is_integral_v<T>
		constexpr auto i16(T value) {
			return static_cast<short>(value);
		}

		template<typename T>
			requires std::is_enum_v<T> || std::is_integral_v<T>
		constexpr auto i32(T value) {
			return static_cast<int>(value);
		}

		template<typename T>
			requires std::is_enum_v<T> || std::is_integral_v<T>
		constexpr auto i64(T value) {
			return static_cast<long long>(value);
		}

		template<typename T>
			requires std::is_enum_v<T> || std::is_integral_v<T>
		constexpr auto u8(T value) {
			return static_cast<unsigned char>(value);
		}

		template<typename T>
			requires std::is_enum_v<T> || std::is_integral_v<T>
		constexpr auto u16(T value) {
			return static_cast<unsigned short>(value);
		}

		template<typename T>
			requires std::is_enum_v<T> || std::is_integral_v<T>
		constexpr auto u32(T value) {
			return static_cast<unsigned int>(value);
		}

		template<typename T>
			requires std::is_enum_v<T> || std::is_integral_v<T>
		constexpr auto u64(T value) {
			return static_cast<unsigned long long>(value);
		}
	}

	using i8 = signed char;
	using i16 = short;
	using i32 = int;
	using i64 = long long;
	using u8 = unsigned char;
	using u16 = unsigned short;
	using u32 = unsigned int;
	using u64 = unsigned long long;
}

#include <vcruntime.h>
namespace Simple {
	namespace To {
		template<typename T>
			requires std::is_enum_v<T> || std::is_integral_v<T>
		constexpr auto u0(T value) {
			return static_cast<size_t>(value);
		}
	}

	using u0 = size_t;
}

// Utility
namespace Simple {
	namespace To {
		template<typename T>
			requires std::is_enum_v<T>
		constexpr auto Base(T value) {
			return static_cast<std::underlying_type_t<T>>(value);
		}
	}
}

namespace Simple {
	enum class Palette1 : u8 {
		Default = 39
	};
	enum class Palette16 : u8 {
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
	enum class Palette256 : u8 {
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
			red(To::Base(color)),
			green(To::Base(color)),
			blue(To::Base(color)) {}

		Color(Palette256 color) :
			type(Type::Palette256),
			red(To::Base(color)),
			green(To::Base(color)),
			blue(To::Base(color)) {}

		Color(u8 red, u8 green, u8 blue) :
			type(Type::TrueColor),
			red(red),
			green(green),
			blue(blue) {}

		Color(u8 rgb[3]) :
			type(Type::TrueColor),
			red(rgb[0]),
			green(rgb[1]),
			blue(rgb[2]) {}

		bool operator ==(const Color& right) {
			return type == right.type
				&& red == right.red
				&& green == right.green
				&& blue == right.blue;
		}

		bool operator !=(const Color& right) {
			return !(*this == right);
		}

		operator bool() {
			return type != Type::Uninitialized;
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
		u8 red = 0;
		u8 green = 0;
		u8 blue = 0;
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
				target.append(To::String(red));
				break;
			case Type::Palette256:
				target.append("38;5;")
					.append(To::String(red));
				break;
			case Type::TrueColor:
				target.append("38;2;")
					.append(To::String(red) + ";")
					.append(To::String(green) + ";")
					.append(To::String(blue));
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
				target.append(To::String(red + 10));
				break;
			case Type::Palette256:
				target.append("48;5;")
					.append(To::String(red));
				break;
			case Type::TrueColor:
				target.append("48;2;")
					.append(To::String(red) + ";")
					.append(To::String(green) + ";")
					.append(To::String(blue));
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
		BitProperties<8> style;
	};

	class Rectangle {
	public:
		i16 width() const { return right - left; }
		i16 height() const { return bottom - top; }

		i16 left = 0;
		i16 top = 0;
		i16 right = 0;
		i16 bottom = 0;
	};

	class Image {
	public:
		Image() = default;

		Image(i16 width, i16 height) :
			width(width),
			height(height),
			pixels(width * height) {}

		Pixel& at(i16 x, i16 y) {
			static Pixel nullpxl;
			if ((x < 0) || (x >= width) || (y < 0) || (y >= height))
				return nullpxl;

			return pixels.at(width * y + x);
		}

		Rectangle size() {
			return { 0, 0, width, height };
		}

		void clear() {
			std::fill(pixels.begin(), pixels.end(), Pixel{});
		}

		void clear(Rectangle position) {
			for (i16 y = position.top; y < position.bottom; ++y)
				for (i16 x = position.left; x < position.right; ++x)
					at(x, y) = Pixel{};
		}

		void draw(String& target) {
			const char* on[] = { "1;", "2;", "3;", "4;", "5;", "7;", "8;", "9;" };
			const char* off[] = { "22;", "22;", "23;", "24;", "25;", "27;", "28;", "29;" };

			Pixel prev;
			for (i16 y = 0; y < height; ++y, target.append("\n")) {
				for (i16 x = 0; x < width; ++x) {
					Pixel& next = at(x, y);

					if (next.foreground != prev.foreground)
						next.foreground.draw(target);

					if (next.background != prev.background)
						next.background.draw(target);

					if (next.style != prev.style) {
						target.append("\x1b[");
						for (short i = 0; i < 8; ++i)
							if (next.style[i] != prev.style[i])
								target.append(next.style[i] ? on[i] : off[i]);
						target.pop_back();
						target.append("m");
					}

					target.append(next.character);

					prev = next;
				}
			}

			target.pop_back();
			target.append("\x1b[m");
		}

		void draw(OutputStream& target) {
			String output = "\x1b[H";

			draw(output);
			target << std::move(output);
		}

	private:
		Vector<Pixel> pixels;
		i16 width = 0;
		i16 height = 0;
	};

	namespace Utf8 {
		u0 size(const String& target) {
			u0 result = 0;

			for (u0 i = 0; i < target.size(); ++result) {
				u8 ch = target.at(i);

				if (ch < 0x80) i += 1;
				else if ((ch & 0xE0) == 0xC0) i += 2;
				else if ((ch & 0xF0) == 0xE0) i += 3;
				else if ((ch & 0xF8) == 0xF0) i += 4;
				else return 0;
			}

			return result;
		}

		String at(const String& target, u0& temp_index) {
			u8 ch = target.at(temp_index);
			u8 char_size = 0;

			if (ch < 0x80) char_size = 1;
			else if ((ch & 0xE0) == 0xC0) char_size = 2;
			else if ((ch & 0xF0) == 0xE0) char_size = 3;
			else if ((ch & 0xF8) == 0xF0) char_size = 4;
			else return "";

			temp_index += char_size;

			return target.substr((temp_index - char_size), char_size);
		}

		String at(const String& target, u0&& index) {
			for (u0 i = 0, current = 0; i < target.size(); ++current) {
				String ch = at(target, i);

				if (current == index)
					return ch;
			}

			return "";
		}
	}

	namespace Base {
		enum class NodeProperties : u8 {
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
		enum class BorderChar : u8 {
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
			template<typename W, typename H>
				requires std::is_integral_v<W> && std::is_integral_v<H>
			inline void init_size(W width, H height) {
				if (!properties[To::Base(NodeProperties::InitializedWidth)])
					this->width = To::i16(width);
				if (!properties[To::Base(NodeProperties::InitializedHeight)])
					this->height = To::i16(height);
			}

			inline void draw_style(Pixel& target) {
				if (foreground.type != Color::Type::Uninitialized)
					target.foreground = foreground;

				if (background.type != Color::Type::Uninitialized)
					target.background = background;

				for (u8 i = 0; i < 8; ++i)
					target.style[i] = properties[i];
			}

			inline void draw_style(Image& target) {
				for (i16 y = position.top; y < position.bottom; ++y)
					for (i16 x = position.left; x < position.right; ++x)
						draw_style(target.at(x, y));
			}

		public:
			Foreground foreground;
			Background background;
			Rectangle position;
			BitProperties<32> properties;
			i16 width = 0;
			i16 height = 0;
		};
		class Interact {
		public:
			bool focused() const { return focus; }
			virtual void focused(bool value) { focus = value; }

			bool looping() const { return loop; }
			virtual void looping(bool value) { loop = value; }

			virtual bool onkey(const KeyEvent&) { return false; }

		protected:
			bool focus = false;
			bool loop = false;
		};

		class Text final : public Node {
		public:
			Text(String content) :
				content(std::move(content)) {}

		public: // Node
			void init() override {
				init_size(content.size(), 1);
			}

			void draw(Image& target) override {
				for (i16 i = 0, y = position.top; y < position.bottom; ++y) {
					for (i16 x = position.left; x < position.right; ++x) {
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
		class HorizontalLayout final : public Node {
		public:
			HorizontalLayout(Vector<SharedMemory<Node>> nodes) :
				nodes(std::move(nodes)) {}

		public: // Node
			void init() override {
				init_size(0, 0);

				for (const auto& node : nodes) {
					node->init();

					if (!properties[To::Base(NodeProperties::InitializedWidth)])
						width += node->width;
					if (!properties[To::Base(NodeProperties::InitializedHeight)])
						height = std::max(height, node->height);
				}
			}

			void set(Rectangle position) override {
				Node::set(position);

				i16 total_nodes_flex = 0;
				i16 total_nodes_width = 0;
				for (const auto& node : nodes) {
					total_nodes_flex += node->properties[To::Base(NodeProperties::HorizontalFlex)];
					total_nodes_width += node->width;
				}

				i16 extra_space = position.width() - total_nodes_width;
				for (const auto& node : nodes) {
					if (node->properties[To::Base(NodeProperties::HorizontalFlex)]) {
						i16 added_space = extra_space / std::max(total_nodes_flex, To::i16(1));

						position.right = position.left + node->width + added_space;
						extra_space -= added_space;
						--total_nodes_flex;
					}
					else position.right = position.left + node->width;

					if (node->properties[To::Base(NodeProperties::VerticalFlex)])
						position.bottom = this->position.bottom;
					else position.bottom = position.top + node->height;

					node->set(position);

					position.left = position.right;
				}
			}

			void draw(Image& target) override {
				draw_style(target);

				for (const auto& node : nodes)
					node->draw(target);
			}

		private:
			Vector<SharedMemory<Node>> nodes;
		};
		class VerticalLayout : public Node {
		public:
			VerticalLayout(Vector<SharedMemory<Node>> nodes) :
				nodes(std::move(nodes)) {}

		public: // Node
			void init() override {
				init_size(0, 0);

				for (const auto& node : nodes) {
					node->init();

					if (!properties[To::Base(NodeProperties::InitializedWidth)])
						width = std::max(width, node->width);
					if (!properties[To::Base(NodeProperties::InitializedHeight)])
						height += node->height;
				}
			}

			void set(Rectangle position) override {
				Node::set(position);

				i16 total_nodes_flex = 0;
				i16 total_nodes_height = 0;
				for (const auto& node : nodes) {
					total_nodes_flex += node->properties[To::Base(NodeProperties::VerticalFlex)];
					total_nodes_height += node->height;
				}

				i16 extra_space = position.height() - total_nodes_height;
				for (const auto& node : nodes) {
					if (node->properties[To::Base(NodeProperties::HorizontalFlex)])
						position.right = this->position.right;
					else position.right = position.left + node->width;

					if (node->properties[To::Base(NodeProperties::VerticalFlex)]) {
						i16 added_space = extra_space / std::max(total_nodes_flex, To::i16(1));

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
				draw_style(target);

				for (const auto& node : nodes)
					node->draw(target);
			}

		private:
			Vector<SharedMemory<Node>> nodes;
		};
		class Filler final : public Node {
		public: // Node
			void init() override {
				properties[To::Base(NodeProperties::HorizontalFlex)] = true;
				properties[To::Base(NodeProperties::VerticalFlex)] = true;
			}
		};
		class HorizontalFiller final : public Node {
		public: // Node
			void init() override {
				properties[To::Base(NodeProperties::HorizontalFlex)] = true;
			}
		};
		class VerticalFiller final : public Node {
		public: // Node
			void init() override {
				properties[To::Base(NodeProperties::VerticalFlex)] = true;
			}
		};
		class Space : public Node {
		public:
			Space() = default;
			Space(i16 size) :
				size(size) {}

		public: // Node
			void init() override {
				width = size;
				height = size;
			}

		protected:
			i16 size = 1;
		};
		class HorizontalSpace final : public Space {
		public: // Space
			using Space::Space;

		public: // Node
			void init() override {
				width = size;
			}
		};
		class VerticalSpace final : public Space {
		public: // Space
			using Space::Space;

		public: // Node
			void init() override {
				height = size;
			}
		};
		class Border final : public Node {
		public:
			Border(SharedMemory<Node> node, String style) :
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

				++position.left;
				++position.top;
				--position.right;
				--position.bottom;
				node->set(position);
			}

			void draw(Image& target) override {
				target.at(position.left, position.top).character = Utf8::at(style, To::Base(BorderChar::TopLeft));
				target.at(position.right - 1, position.top).character = Utf8::at(style, To::Base(BorderChar::TopRight));
				target.at(position.left, position.bottom - 1).character = Utf8::at(style, To::Base(BorderChar::BottomLeft));
				target.at(position.right - 1, position.bottom - 1).character = Utf8::at(style, To::Base(BorderChar::BottomRight));

				for (i16 x = position.left + 1; x < position.right - 1; ++x) {
					target.at(x, position.top).character = Utf8::at(style, To::Base(BorderChar::Horizontal));
					target.at(x, position.bottom - 1).character = Utf8::at(style, To::Base(BorderChar::Horizontal));
				}

				for (i16 y = position.top + 1; y < position.bottom - 1; ++y) {
					target.at(position.left, y).character = Utf8::at(style, To::Base(BorderChar::Vertical));
					target.at(position.right - 1, y).character = Utf8::at(style, To::Base(BorderChar::Vertical));
				}

				node->draw(target);
			}

		private:
			String style;
			SharedMemory<Node> node;
		};
		class HorizontalSeparator final : public Node {
		public: // Node
			void init() override {
				height = 1;
				properties[To::Base(NodeProperties::HorizontalFlex)] = true;
			}

			void draw(Image& target) override {
				Pixel& leftchar = target.at((position.left - 1), position.top);
				if (leftchar.character == "│")
					leftchar.character = "├";

				Pixel& rightchar = target.at(position.right, position.top);
				if (rightchar.character == "│")
					rightchar.character = "┤";

				for (i16 y = position.top; y < position.bottom; ++y)
					for (i16 x = position.left; x < position.right; ++x)
						target.at(x, y).character = "─";
			}
		};

		class Button final : public Node, public Interact {
		public:
			Button(String name) :
				name(std::move(name)) {}

			Button(String name, Function<void()> func) :
				name(std::move(name)),
				func(std::move(func)) {}

		public: // Node
			void init() override {
				init_size(2 + name.size(), 1);

				foreground = Palette256::Black;
				background = focused() ? Palette256::White : Palette256::Gray6;
			}

			void draw(Image& target) override {
				i16 xpos = position.left + ((position.width() - To::i16(name.size())) / 2);

				for (i16 i = 0, y = position.top; y < position.bottom; ++y) {
					for (i16 x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);

						draw_style(p);

						if ((x >= xpos) && (i < name.size()))
							p.character = name.at(i++);
					}
				}
			}

		public: // Interact
			bool onkey(const KeyEvent& key) override {
				if (
					(key.wVirtualKeyCode == VK_RETURN)
					&& focused()
					&& func
					) {
					func();
					return true;
				}

				return false;
			}

		private:
			String name;
			Function<void()> func;
		};
		class HorizontalContainer final : public Interact {
		public:
			HorizontalContainer(Vector<SharedMemory<Interact>> interacts) :
				interacts(std::move(interacts)) {}

		public: // Interact
			void focused(bool value) override {
				Interact::focused(value);

				interacts.at(index)->focused(value);
			}

			bool onkey(const KeyEvent& key) override {
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
			Vector<SharedMemory<Interact>> interacts;
			i16 index = 0;
		};
		class VerticalContainer final : public Interact {
		public:
			VerticalContainer(Vector<SharedMemory<Interact>> interacts) :
				interacts(std::move(interacts)) {}

		public: // Interact
			void focused(bool value) override {
				Interact::focused(value);

				interacts.at(index)->focused(value);
			}

			bool onkey(const KeyEvent& key) override {
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
			Vector<SharedMemory<Interact>> interacts;
			i16 index = 0;
		};
		class Link final : public Node, public Interact {
		public:
			Link(String name) :
				name(std::move(name)) {}

			Link(String name, Function<void()> func) :
				name(std::move(name)),
				func(std::move(func)) {}

		public: // Node
			void init() override {
				init_size(name.size(), 1);

				properties[To::Base(NodeProperties::Underline)] = true;
				properties[To::Base(NodeProperties::Reverse)] = focused() ? true : false;
			}

			void draw(Image& target) override {
				for (i16 i = 0, y = position.top; y < position.bottom; ++y) {
					for (i16 x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);

						draw_style(p);

						if (i < name.size())
							p.character = name.at(i++);
					}
				}
			}

		public: // Interact
			bool onkey(const KeyEvent& key) override {
				if (
					(key.wVirtualKeyCode == VK_RETURN)
					&& focused()
					&& func
					) {
					func();
					return true;
				}

				return false;
			}

		private:
			String name;
			Function<void()> func;
		};
		class CheckBoxList final : public Node, public Interact {
		public:
			CheckBoxList(Vector<String> items) :
				items(std::move(items)) {}

		public: // Node
			void init() override {
				init_size(30, 5);

				foreground = Palette256::Black;
				background = focused() ? Palette256::White : Palette256::Gray6;
			}

			void draw(Image& target) override {
				for (i16 ii = item_begin, y = position.top; y < position.bottom; ++ii, ++y) {
					for (i16 i = 0, x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);
						String item = prefix(ii) + items.at(ii);

						draw_style(p);

						if (i < item.size())
							p.character = Utf8::at(item, i);
					}
				}

				if (looping())
					for (; position.left < position.right; ++position.left)
						target.at(position.left, (position.top + ycursor)).style[To::Base(NodeProperties::Reverse)] = true;
			}

		public: // Interact
			bool onkey(const KeyEvent& key) override {
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
			void move_cursor(i16 y) {
				const i16 height = position.height();

				if (y > 0)
					if (ycursor < (height - 1)) ++ycursor;
					else ++item_begin;
				else if (y < 0)
					if (ycursor > 0) --ycursor;
					else --item_begin;
			}

			String prefix(const i16& index) {
				if ((!selected_items.empty())
					&& (std::find(selected_items.begin(), selected_items.end(), index) != selected_items.end()))
					return "[■]";

				return "[ ]";
			}

			Vector<String> items;
			Vector<i16> selected_items;
			i16 item_begin = 0;
			i16 index = 0;
			i16 ycursor = 0;
		};
		class RadioBoxList final : public Node, public Interact {
		public:
			RadioBoxList(Vector<String> items) :
				items(std::move(items)) {}

		public: // Node
			void init() override {
				init_size(30, 5);

				foreground = Palette256::Black;
				background = focused() ? Palette256::White : Palette256::Gray6;
			}

			void draw(Image& target) override {
				for (i16 ii = item_begin, y = position.top; y < position.bottom; ++ii, ++y) {
					for (i16 i = 0, x = position.left; x < position.right; ++x) {
						Pixel& p = target.at(x, y);
						String item = prefix(ii) + items.at(ii);

						draw_style(p);

						if (i < item.size())
							p.character = Utf8::at(item, i);
					}
				}

				if (looping())
					for (; position.left < position.right; ++position.left)
						target.at(position.left, (position.top + ycursor)).style[To::Base(NodeProperties::Reverse)] = true;
			}

		public: // Interact
			bool onkey(const KeyEvent& key) override {
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
			void move_cursor(i16 y) {
				const i16 height = position.height();

				if (y > 0)
					if (ycursor < (height - 1)) ++ycursor;
					else ++item_begin;
				else if (y < 0)
					if (ycursor > 0) --ycursor;
					else --item_begin;
			}

			String prefix(const i16& index) {
				if ((selected_item >= 0) && (index == selected_item))
					return "(●)";

				return "( )";
			}

			Vector<String> items;
			i16 selected_item = -1;
			i16 item_begin = 0;
			i16 index = 0;
			i16 ycursor = 0;
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
				void move_cursor(i16 x, i16 y, const i16& width, const i16& height) {
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

				String repeat(i16 times, const String& value) {
					String temp;

					while (times--) temp.append(value);
					return temp;
				}

				String content;
				String placeholder;
				i16 text_begin = 0;
				i16 index = 0;
				i16 xcursor = 0;
				i16 ycursor = 0;
			};
			class Text final : public Base {
			public: // Base
				using Base::Base;

			public: // Node
				void draw(Image& target) override {
					const String& text = content.empty() ? placeholder : content;
					for (i16 i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (i16 x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							draw_style(p);

							if (i < text.size())
								target.at(x, y).character = text.at(i++);
						}
					}

					if (looping())
						target.at(position.left + xcursor, position.top + ycursor).style[To::Base(NodeProperties::Reverse)] = true;
				}

			public: // Interact
				bool onkey(const KeyEvent& key) override {
					if (key.wVirtualKeyCode == VK_RETURN)
						looping(!looping());

					if (looping()) {
						const i16 width = position.width();
						const i16 height = position.height();

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
			class Number final : public Base {
			public: // Base
				using Base::Base;

			public: // Node
				void draw(Image& target) override {
					const String& text = content.empty() ? placeholder : content;
					for (i16 i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (i16 x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							draw_style(p);

							if (i < text.size())
								target.at(x, y).character = text.at(i++);
						}
					}

					if (looping())
						target.at(position.left + xcursor, position.top + ycursor).style[To::Base(NodeProperties::Reverse)] = true;
				}

			public: // Interact
				bool onkey(const KeyEvent& key) override {
					if (key.wVirtualKeyCode == VK_RETURN)
						looping(!looping());

					if (looping()) {
						const i16 width = position.width();
						const i16 height = position.height();

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
			class Password final : public Base {
			public:
				using Base::Base;

			public: // Node
				void draw(Image& target) override {
					const String& text = content.empty() ? placeholder : repeat(static_cast<i16>(content.size()), "•");
					for (i16 i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (i16 x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							draw_style(p);

							if (i < text.size())
								target.at(x, y).character = Utf8::at(text, i);
						}
					}

					if (looping())
						target.at(position.left + xcursor, position.top + ycursor).style[To::Base(NodeProperties::Reverse)] = true;
				}

			public: // Interact
				bool onkey(const KeyEvent& key) override {
					if (key.wVirtualKeyCode == VK_RETURN)
						looping(!looping());

					if (looping()) {
						const i16 width = position.width();
						const i16 height = position.height();

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
			class Pin final : public Base {
			public: // Base
				using Base::Base;

			public: // Node
				void draw(Image& target) override {
					const String& text = content.empty() ? placeholder : repeat(static_cast<i16>(content.size()), "•");
					for (i16 i = text_begin, y = position.top; y < position.bottom; ++y) {
						for (i16 x = position.left; x < position.right; ++x) {
							Pixel& p = target.at(x, y);

							draw_style(p);

							if (i < text.size())
								target.at(x, y).character = Utf8::at(text, i);
						}
					}

					if (looping())
						target.at(position.left + xcursor, position.top + ycursor).style[To::Base(NodeProperties::Reverse)] = true;
				}

			public: // Interact
				bool onkey(const KeyEvent& key) override {
					if (key.wVirtualKeyCode == VK_RETURN)
						looping(!looping());

					if (looping()) {
						const i16 width = position.width();
						const i16 height = position.height();

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
concept NodeCallback = std::invocable<T, Simple::SharedMemory<Simple::Base::Node>>
&& std::same_as<std::invoke_result_t<T, Simple::SharedMemory<Simple::Base::Node>>, void>;

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
struct is_node_shared_pointer<Simple::SharedMemory<T>> : std::true_type {};
template<typename T>
concept ChildOfNode = is_node_shared_pointer<std::remove_cvref_t<T>>::value;

template<typename T>
struct is_interact_shared_pointer : std::false_type {};
template<typename T> requires std::derived_from<T, Simple::Base::Interact>
struct is_interact_shared_pointer<Simple::SharedMemory<T>> : std::true_type {};
template<typename T>
concept ChildOfInteract = is_interact_shared_pointer<std::remove_cvref_t<T>>::value;

template <typename T>
struct is_shared_pointer_type : std::false_type {};
template <typename T>
struct is_shared_pointer_type<std::shared_ptr<T>> : std::true_type {};
template <typename T>
concept is_shared_pointer = is_shared_pointer_type<std::remove_cvref_t<T>>::value;

template<NodeCallback T>
Simple::SharedMemory<Simple::Base::Node> operator |(
	Simple::SharedMemory<Simple::Base::Node> left,
	T&& right) {
	std::invoke(std::forward<T>(right), left);
	return left;
}

void bold(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::Bold)] = true;
}
void dim(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::Dim)] = true;
}
void italic(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::Italic)] = true;
}
void underline(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::Underline)] = true;
}
void blinking(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::Blinking)] = true;
}
void reverse(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::Reverse)] = true;
}
void hidden(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::Hidden)] = true;
}
void strikethrough(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::Strikethrough)] = true;
}
void hflex(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::HorizontalFlex)] = true;
}
void vflex(const Simple::SharedMemory<Simple::Base::Node>& node) {
	node->properties[Simple::To::Base(Simple::Base::NodeProperties::VerticalFlex)] = true;
}
auto foreground(Simple::Foreground color) {
	return [color](const Simple::SharedMemory<Simple::Base::Node>& node) { node->foreground = color; };
}
auto background(Simple::Background color) {
	return [color](const Simple::SharedMemory<Simple::Base::Node>& node) { node->background = color; };
}
auto width(Simple::i16 size) {
	return [size](const Simple::SharedMemory<Simple::Base::Node>& node) {
		node->properties[Simple::To::Base(Simple::Base::NodeProperties::InitializedWidth)] = true;
		node->width = size;
		};
}
auto height(Simple::i16 size) {
	return [size](const Simple::SharedMemory<Simple::Base::Node>& node) {
		node->properties[Simple::To::Base(Simple::Base::NodeProperties::InitializedHeight)] = true;
		node->height = size;
		};
}

template<TypeText T>
Simple::SharedMemory<Simple::Base::Text> text(T&& value) {
	return std::make_shared<Simple::Base::Text>(std::forward<T>(value));
}
template<ChildOfNode... T>
Simple::SharedMemory<Simple::Base::HorizontalLayout> hlayout(T&&... nodes) {
	return std::make_shared<Simple::Base::HorizontalLayout>(
		Simple::Vector<Simple::SharedMemory<Simple::Base::Node>> { std::forward<T>(nodes)... }
	);
}
template<ChildOfNode... T>
Simple::SharedMemory<Simple::Base::VerticalLayout> vlayout(T&&... nodes) {
	return std::make_shared<Simple::Base::VerticalLayout>(
		Simple::Vector<Simple::SharedMemory<Simple::Base::Node>> { std::forward<T>(nodes)... }
	);
}
Simple::SharedMemory<Simple::Base::Filler> filler() {
	return std::make_shared<Simple::Base::Filler>();
}
Simple::SharedMemory<Simple::Base::HorizontalFiller> hfiller() {
	return std::make_shared<Simple::Base::HorizontalFiller>();
}
Simple::SharedMemory<Simple::Base::VerticalFiller> vfiller() {
	return std::make_shared<Simple::Base::VerticalFiller>();
}
Simple::SharedMemory<Simple::Base::Space> space() {
	return std::make_shared<Simple::Base::Space>();
}
template<TypeNumber T>
Simple::SharedMemory<Simple::Base::Space> space(T&& value) {
	return std::make_shared<Simple::Base::Space>(std::forward<T>(value));
}
Simple::SharedMemory<Simple::Base::HorizontalSpace> hspace() {
	return std::make_shared<Simple::Base::HorizontalSpace>();
}
template<TypeNumber T>
Simple::SharedMemory<Simple::Base::HorizontalSpace> hspace(T&& value) {
	return std::make_shared<Simple::Base::HorizontalSpace>(std::forward<T>(value));
}
Simple::SharedMemory<Simple::Base::VerticalSpace> vspace() {
	return std::make_shared<Simple::Base::VerticalSpace>();
}
template<TypeNumber T>
Simple::SharedMemory<Simple::Base::VerticalSpace> vspace(T&& value) {
	return std::make_shared<Simple::Base::VerticalSpace>(std::forward<T>(value));
}
Simple::SharedMemory<Simple::Base::HorizontalSeparator> hseparator() {
	return std::make_shared<Simple::Base::HorizontalSeparator>();
}
namespace border {
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> ascii(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "-|+++++++++");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> light(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─│┌┬┐├┼┤└┴┘");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> heavy(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "━┃┏┳┓┣╋┫┗┻┛");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> double_light(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "═║╔╦╗╠╬╣╚╩╝");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> rounded(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─│╭┬╮├┼┤╰┴╯");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> hdouble(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "═│╒╤╕╞╪╡╘╧╛");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> vdouble(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─║╓╥╖╟╫╢╙╨╜");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> hheavy(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "━│┍┯┑┝┿┥┕┷┙");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> vheavy(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "─┃┎┰┒┞╀┦┖┸┚");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> triple_dash(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "┄┆┌┬┐├┼┤└┴┘");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> quad_dash(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "┈┊┌┬┐├┼┤└┴┘");
	}
	template<ChildOfNode T>
	Simple::SharedMemory<Simple::Base::Border> double_dash(T&& node) {
		return std::make_shared<Simple::Base::Border>(std::forward<T>(node), "╌╎┌┬┐├┼┤└┴┘");
	}
}

template<TypeText N>
Simple::SharedMemory<Simple::Base::Button> button(N&& name) {
	return std::make_shared<Simple::Base::Button>(std::forward<N>(name));
}
template<TypeText N, ButtonLinkCallback F>
Simple::SharedMemory<Simple::Base::Button> button(N&& name, F&& callback) {
	return std::make_shared<Simple::Base::Button>(std::forward<N>(name), std::forward<F>(callback));
}
template<ChildOfInteract... T>
Simple::SharedMemory<Simple::Base::HorizontalContainer> hcontainer(T&&... interacts) {
	return std::make_shared<Simple::Base::HorizontalContainer>(
		Simple::Vector<Simple::SharedMemory<Simple::Base::Interact>>{ std::forward<T>(interacts)... }
	);
}
template<ChildOfInteract... T>
Simple::SharedMemory<Simple::Base::VerticalContainer> vcontainer(T&&... interacts) {
	return std::make_shared<Simple::Base::VerticalContainer>(
		Simple::Vector<Simple::SharedMemory<Simple::Base::Interact>>{ std::forward<T>(interacts)... }
	);
}
template<TypeText N>
Simple::SharedMemory<Simple::Base::Link> link(N&& name) {
	return std::make_shared<Simple::Base::Button>(std::forward<N>(name));
}
template<TypeText N, ButtonLinkCallback F>
Simple::SharedMemory<Simple::Base::Link> link(N&& name, F&& callback) {
	return std::make_shared<Simple::Base::Link>(std::forward<N>(name), std::forward<F>(callback));
}
template<TypeText... T>
Simple::SharedMemory<Simple::Base::CheckBoxList> checkbox_list(T&&... items) {
	return std::make_shared<Simple::Base::CheckBoxList>(
		Simple::Vector<Simple::String>{ std::forward<T>(items)... }
	);
}
Simple::SharedMemory<Simple::Base::CheckBoxList> checkbox_list(Simple::Vector<Simple::String> item) {
	return std::make_shared<Simple::Base::CheckBoxList>(std::move(item));
}
template<TypeText... T>
Simple::SharedMemory<Simple::Base::RadioBoxList> radiobox_list(T&&... items) {
	return std::make_shared<Simple::Base::RadioBoxList>(
		Simple::Vector<Simple::String>{ std::forward<T>(items)... }
	);
}
Simple::SharedMemory<Simple::Base::RadioBoxList> radiobox_list(Simple::Vector<Simple::String> item) {
	return std::make_shared<Simple::Base::RadioBoxList>(std::move(item));
}
namespace input {
	Simple::SharedMemory<Simple::Base::Input::Text> text() {
		return std::make_shared<Simple::Base::Input::Text>();
	}
	template<TypeText T>
	Simple::SharedMemory<Simple::Base::Input::Text> text(T&& placeholder) {
		return std::make_shared<Simple::Base::Input::Text>(std::forward<T>(placeholder));
	}
	Simple::SharedMemory<Simple::Base::Input::Number> number() {
		return std::make_shared<Simple::Base::Input::Number>();
	}
	template<TypeText T>
	Simple::SharedMemory<Simple::Base::Input::Number> number(T&& placeholder) {
		return std::make_shared<Simple::Base::Input::Number>(std::forward<T>(placeholder));
	}
	Simple::SharedMemory<Simple::Base::Input::Password> password() {
		return std::make_shared<Simple::Base::Input::Password>();
	}
	template<TypeText T>
	Simple::SharedMemory<Simple::Base::Input::Password> password(T&& placeholder) {
		return std::make_shared<Simple::Base::Input::Password>(std::forward<T>(placeholder));
	}
	Simple::SharedMemory<Simple::Base::Input::Pin> pin() {
		return std::make_shared<Simple::Base::Input::Pin>();
	}
	template<TypeText T>
	Simple::SharedMemory<Simple::Base::Input::Pin> pin(T&& placeholder) {
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
				const Simple::KeyEvent& key = record[i].Event.KeyEvent;

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