/*
    This file is part of ghsmtp - Gene's simple SMTP server.
    Copyright (C) 2013  Gene Hightower <gene@digilicious.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Sock.hpp"

int main(int argc, char* argv[])
{
  Logging::init(argv[0]);

  Sock sock(STDIN_FILENO, STDOUT_FILENO);

  char const* us = sock.us_c_str();
  if (*us) {
    std::cout << us << std::endl;
  }

  char const* them = sock.them_c_str();
  if (*them) {
    std::cout << them << std::endl;
  }

  std::cout << "sizeof(Sock) == " << sizeof(Sock) << std::endl;
}
