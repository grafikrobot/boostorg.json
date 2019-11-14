// Copyright 2018 Ulf Adams
//
// The contents of this file may be used under the terms of the Apache License,
// Version 2.0.
//
//    (See accompanying file LICENSE-Apache or copy at
//     http://www.apache.org/licenses/LICENSE-2.0)
//
// Alternatively, the contents of this file may be used under the terms of
// the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE-Boost or copy at
//     https://www.boost.org/LICENSE_1_0.txt)
//
// Unless required by applicable law or agreed to in writing, this software
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.

/*
    This is a derivative work
*/

#ifndef BOOST_JSON_DETAIL_RYU_HPP
#define BOOST_JSON_DETAIL_RYU_HPP

#include <boost/json/config.hpp>
#include <stdint.h>

namespace boost {
namespace json {
namespace detail {

namespace ryu {

BOOST_JSON_DECL
int d2s_buffered_n(double f, char* result) noexcept;

BOOST_JSON_DECL
void d2s_buffered(double f, char* result) noexcept;

BOOST_JSON_DECL
char* d2s(double f) noexcept;

} // ryu

} // detail
} // json
} // boost

#ifdef BOOST_JSON_HEADER_ONLY
#include <boost/json/detail/ryu/impl/d2s.ipp>
#endif

#endif
