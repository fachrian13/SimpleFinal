#include <regex>
#include <fstream>
#include "simple.h"

int main() {
	// ===== Notification =====

	auto notification = [&](const char* message) {
		auto ok = button("Ok", [&]() { simple.node.pop(); simple.interact.pop(); });
		auto layout = hlayout(
			hfiller(),
			vlayout(
				vfiller(),
				border::hdouble(vlayout(
					hlayout(
						hfiller(),
						text("Notification"),
						hfiller()
					) | hflex,
					hseparator(),
					vspace(),
					hlayout(
						hspace(2),
						text(message),
						hspace(2)
					),
					vspace(),
					hlayout(
						hfiller(),
						ok,
						hfiller()
					) | hflex
				)),
				vfiller()
			) | vflex,
			hfiller()
		);

		simple << layout << static_cast<std::shared_ptr<Simple::Base::Interact>>(ok);
		};

	// ===== REGISTER PAGE =====

	const std::regex email_pattern(R"(^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}$)");

	struct Data {
		char first_name[64];
		char last_name[64];
		char email[32];
		char username[16];
		char password[16];

		void crypt() {
			for (short i = 0; i < 64; ++i)
				first_name[i] ^= 0x5A;
			for (short i = 0; i < 64; ++i)
				last_name[i] ^= 0x5A;
			for (short i = 0; i < 32; ++i)
				email[i] ^= 0x5A;
			for (short i = 0; i < 16; ++i)
				username[i] ^= 0x5A;
			for (short i = 0; i < 16; ++i)
				password[i] ^= 0x5A;
		}
	};
	std::fstream file;

	auto register_first_name = input::text();
	auto register_last_name = input::text();
	auto register_email = input::text();
	auto register_username = input::text();
	auto register_password = input::password();
	auto register_confirm_password = input::password();
	auto register_back = button("Back", [&]() { simple.node.pop(); simple.interact.pop(); });
	auto register_register = button("Register", [&]() {
		if (register_first_name->empty())
			notification("Please fill First Name.");
		else if (register_last_name->empty())
			notification("Please fill Last Name.");
		else if (register_email->empty())
			notification("Please fill Email.");
		else if (register_username->empty())
			notification("Please fill Username.");
		else if (register_password->empty())
			notification("Please fill Password.");
		else if (!std::regex_match(register_email->value(), email_pattern))
			notification("Email not valid!");
		else if (register_password->value() != register_confirm_password->value())
			notification("Password does not match.");
		else {
			file.open("data.bin", std::ios::out | std::ios::app | std::ios::binary);
			if (file.is_open()) {
				Data data;
				strcpy_s(data.first_name, register_first_name->value().c_str());
				strcpy_s(data.last_name, register_last_name->value().c_str());
				strcpy_s(data.email, register_email->value().c_str());
				strcpy_s(data.username, register_username->value().c_str());
				strcpy_s(data.password, register_password->value().c_str());
				data.crypt();

				file.write(reinterpret_cast<char*>(&data), sizeof(Data));
				file.close();

				register_first_name->clear();
				register_last_name->clear();
				register_email->clear();
				register_username->clear();
				register_password->clear();
				register_confirm_password->clear();

				simple.node.pop();
				simple.interact.pop();

				notification("User successfully registered.");
			}
			else notification("Could not open the file.");
		}
		});

	auto register_container = vcontainer(
		hcontainer(
			register_first_name,
			register_last_name
		),
		register_email,
		register_username,
		hcontainer(
			register_password,
			register_confirm_password
		),
		hcontainer(
			register_back,
			register_register
		)
	);

	auto register_layout = hlayout(
		hfiller(),
		border::hdouble(vlayout(
			hlayout(
				hfiller(),
				text("Register new User"),
				hfiller()
			) | hflex,
			hseparator(),
			hlayout(
				vlayout(
					text("First Name"),
					register_first_name
				),
				hspace(),
				vlayout(
					text("Last Name"),
					register_last_name
				)
			),
			text("Email"),
			register_email | hflex,
			text("Username"),
			register_username | hflex,
			hlayout(
				vlayout(
					text("Password"),
					register_password
				),
				hspace(),
				vlayout(
					text("Confirm Password"),
					register_confirm_password
				)
			),
			vspace(2),
			hlayout(
				hfiller(),
				register_back,
				hspace(),
				register_register
			) | hflex
		)),
		hfiller()
	);

	// ===== LOGIN PAGE =====

	auto login_username = input::text();
	auto login_password = input::password();
	auto login_exit = button("Exit", [&]() { simple.running = false; });
	auto login_login = button("Login", [&]() {
		if (login_username->empty())
			notification("Please fill Username.");
		else if (login_password->empty())
			notification("Please fill Password.");
		else {
			file.open("data.bin", std::ios::in | std::ios::binary);
			if (file.is_open()) {
				Data temp;

				while (file.read(reinterpret_cast<char*>(&temp), sizeof(Data))) {
					temp.crypt();

					if (login_username->value() == temp.username)
						break;
				}
				file.close();

				if (login_username->value() != temp.username)
					notification("Username could not be found.");
				else if (login_password->value() != temp.password)
					notification("Wrong password.");
				else notification("You are logged in.");
			}
			else notification("Could not open the file.");
		}
		});
	auto link_register = link("here.", [&]() { simple << register_layout << register_container; });

	auto login_container = vcontainer(
		login_username,
		login_password,
		link_register,
		hcontainer(
			login_exit,
			login_login
		)
	);
	auto login_layout = hlayout(
		hfiller(),
		border::hdouble(vlayout(
			hlayout(
				hfiller(),
				text("Login to your Account"),
				hfiller()
			) | hflex,
			hseparator(),
			text("Username"),
			login_username,
			text("Password"),
			login_password,
			hlayout(
				hfiller(),
				text("Register "),
				link_register
			) | hflex,
			vspace(2),
			hlayout(
				login_exit | hflex,
				hspace(),
				login_login | hflex
			) | hflex
		)),
		hfiller()
	);

	simple << login_layout << login_container << start;
}