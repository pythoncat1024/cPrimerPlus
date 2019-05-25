//
// Created by cat on 2019/5/8.
//

#ifndef CPRIMERPLUS_PIG_H
#define CPRIMERPLUS_PIG_H

void print_some(void);

void binary(int n);

/**
 * 获取输入的字符串数
 * str : 交互中输入的内容
 * max : 最大长度
 */
char * s_gets(char * str, int max);

char * strrevert(char * str);

int copy_file(const char * src_path, const char * dest_path);

int append_file(const char * src_path, const char * dest_path);

int __operate_file(const char * src, const char * dest, const char * mode);

#endif //CPRIMERPLUS_PIG_H
