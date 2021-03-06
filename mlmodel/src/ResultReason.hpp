//
//  ResultReason.hpp
//  CoreML
//
//  Created by Jeff Kilpatrick on 12/16/19.
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#pragma once

namespace CoreML {

/**
 Super specific reasons for non-good Results.
 */
enum class ResultReason {
    UNKNOWN,

    // -----------------------------------------
    // Model validation
    MODEL_INPUT_TYPE_INVALID,
    MODEL_OUTPUT_TYPE_INVALID,

    // -----------------------------------------
    // Program validation
    BLOCK_INPUT_COUNT_MISMATCHED,
    BLOCK_OUTPUT_NAME_EMPTY,
    BLOCK_OUTPUT_COUNT_MISMATCHED,
    BLOCK_OUTPUT_TYPE_MISMATCHED,
    BLOCK_OUTPUT_VALUE_UNDEFINED,
    BLOCK_PARAM_NAME_EMPTY,
    BLOCK_PARAM_NAME_SHADOWS,

    FUNCTION_BLOCK_RETURN_COUNT_MISMATCHED,
    FUNCTION_BLOCK_RETURN_TYPE_MISMATCHED,
    FUNCTION_NAME_EMPTY,
    FUNCTION_PARAM_NAME_EMPTY,
    FUNCTION_PARAM_NAME_SHADOWS,
    FUNCTION_PARAM_TYPE_NULL,

    MODEL_MAIN_IMAGE_INPUT_SIZE_BAD,
    MODEL_MAIN_IMAGE_INPUT_TYPE_BAD,
    MODEL_MAIN_IMAGE_OUTPUT_SIZE_BAD,
    MODEL_MAIN_IMAGE_OUTPUT_TYPE_BAD,
    MODEL_MAIN_INPUT_COUNT_MISMATCHED,
    MODEL_MAIN_INPUT_OUTPUT_MISSING,
    MODEL_MAIN_INPUT_OUTPUT_TYPE_INVALID,
    MODEL_MAIN_INPUT_RANK_MISMATCHED,
    MODEL_MAIN_INPUT_SHAPE_MISMATCHED,
    MODEL_MAIN_INPUT_TYPE_MISMATCHED,
    MODEL_MAIN_OUTPUT_COUNT_MISMATCHED,
    MODEL_MAIN_OUTPUT_RANK_MISMATCHED,
    MODEL_MAIN_OUTPUT_SHAPE_MISMATCHED,
    MODEL_MAIN_OUTPUT_TYPE_MISMATCHED,

    OP_ARG_COUNT_MISMATCH,
    OP_ARG_NAME_EMPTY,
    OP_ARG_OUTPUT_CIRCULAR_DEFINITION,
    OP_ARG_TYPE_MISMATCH,
    OP_ARG_VALUE_UNDEFINED,
    OP_ATTRIBUTE_NAME_EMPTY,
    OP_ATTRIBUTE_VALUE_UNDEFINED,
    OP_BLOCK_COUNT_INVALID,
    OP_INVALID_IN_CONTEXT,
    OP_NAME_EMPTY,
    OP_OUTPUT_COUNT_MISMATCHED,
    OP_OUTPUT_NAME_EMPTY,
    OP_OUTPUT_NAME_SHADOWS,
    OP_OUTPUT_TYPE_INVALID,
    OP_PARAM_COUNT_MISMATCHED,
    OP_PARAM_INVALID,
    OP_PARAM_NAME_EMPTY,
    OP_REQUIRED_ARG_NOT_FOUND,

    PARAMETER_NAME_EMPTY,
    PARAMETER_VALUE_UNDEFINED,

    PROGRAM_MAIN_FUNCTION_MISSING,
    PROGRAM_NULL,
    PROGRAM_PARSE_THREW,
};

}
