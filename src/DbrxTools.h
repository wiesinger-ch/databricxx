// Copyright (C) 2014 Oliver Schulz <oschulz@mpp.mpg.de>

// This is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation; either version 2.1 of the License, or
// (at your option) any later version.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.


#ifndef DBRX_DBRXTOOLS_H
#define DBRX_DBRXTOOLS_H

#include <string>


namespace dbrx {


/// @brief Class for static utility methods.
///
/// Currently, ROOT doesn't support auto-loading of libraries based on
/// function calls, so static methods have to be used instead.

class DbrxTools {
public:
	/// Get DatABriCxx version
	static const std::string& version();
};


} // namespace dbrx

#endif // DBRX_DBRXTOOLS_H
