//
// Created by pjs on 2020/10/4.
//

#ifndef JSON_TUTORIAL_LEPTJSON_H
#define JSON_TUTORIAL_LEPTJSON_H

typedef enum {
    LEPT_NULL,
    LEPT_FALSE,
    LEPT_TRUE,
    LEPT_NUMBER,
    LEPT_STRING,
    LEPT_ARRAY,
    LEPT_OBJECT
} lept_type;


typedef struct {
    lept_type type;
} lept_value;

int lept_parse(lept_value *v, const char *json);


enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

lept_type lept_get_type(const lept_value* v);

#endif //JSON_TUTORIAL_LEPTJSON_H
