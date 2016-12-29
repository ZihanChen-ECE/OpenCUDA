// Reduce.h
// 创建人：雷健龙，刘瑶，刘婷
//
// 归约算法（Reduce）
// 功能说明：根据输入的类来实现对该类的归约运算操作
//
// 修订历史：
// 2013年05月20日（雷健龙）
//     初始版本
// 2013年05月22日（雷健龙）
//     改为方法类
// 2013年05月24日（雷健龙）
//     修改了类结构
// 2013年05月25日（雷健龙）
//     修改核函数，使用原子操作在核函数中求和
// 2013年05月29日（雷健龙）
//     修改格式，修改核函数参数名称
// 2013年05月30日（雷健龙）
//     修改代码错误，修改参数为指针调用
// 2013年06月02日（雷健龙）
//     修改代码错误
// 2013年06月04日（雷健龙）
//     调试程序，修改代码错误
// 2013面06月07日（雷健龙）
//     调试程序，修改代码错误，修改格式规范
// 2013年06月08日（雷健龙）
//     取消对长度不符合归约要求的数组判断，在 GPU 端用 0 补足为 2 的整数倍
// 2013年06月09日（雷健龙）
//     修改注释规范
// 2013年06月10日（雷健龙）
//     修改输入数据向共享内存拷贝为累加拷贝，增加 blocksize，增强可读性，增加错
//     误判断
// 2013年06年22日（雷健龙）
//     增加 Device 端函数，形成调用关系

#ifndef __REDUCE_H__
#define __REDUCE_H__

#include "ErrorCode.h"

// 类：Reduce
// 继承自：无
// 根据输入的类实现归约操作
class Reduce {

public:

    // 构造函数：Reduce
    // 无参数构造函数
    __host__ __device__
    Reduce()
    {
        // #do nothing
    }

    // 成员方法：reduceAdd（将输入数组规约求和输出）
    // 将输入数据归约求和输出，目前只接受对 float 类型的数组的加法运算。
    __host__ int            // 返回错误代码
    reduceAdd(
            float input[],  // 输入 
            int inputL,     // 输入数组长度
            float *output   // 输出
    );
};

#endif

