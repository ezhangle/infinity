//
// Created by JinHai on 2022/11/20.
//

#pragma once

#include "base_mixed_type.h"
#include "mixed_type.h"

namespace infinity {

struct MixedTupleValue {
public:
    ptr_t parent_ptr;
    MixedType array[0];
};


}
