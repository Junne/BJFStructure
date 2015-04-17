 //
//  SandboxFile.h
//  SKY
//
//  Author LiuXiaoBin   Created by mac  on 12-9-19.
//  Copyright (c) 2012年 SKY. All rights reserved.
//  Sand Box foundation Class


#import <Foundation/Foundation.h>

@interface SandboxFile : NSObject
//获取程序的Home目录路径
+(NSString *)getHomeDirectoryPath;
//获取document目录路径
+(NSString *)getDocumentPath;
//获取Cache目录路径
+(NSString *)getCachePath;
//获取Library目录路径
+(NSString *)getLibraryPath;
//获取Tmp目录路径
+(NSString *)getTmpPath;
//创建目录文件夹
+(NSString *)createList:(NSString *)List ListName:(NSString *)Name;
//写入NsArray文件
+(BOOL)writeFileArray:(NSArray *)ArrarObject SpecifiedFile:(NSString *)path;
//写入NSDictionary文件
+(BOOL)writeFileDictionary:(NSMutableDictionary *)DictionaryObject SpecifiedFile:(NSString *)path;
//是否存在该文件
+(BOOL)isFileExists:(NSString *)filepath;
//删除指定文件
+(void)deleteFile:(NSString*)filepath;
//删除 document/dir 目录下 所有文件
+(void)deleteAllForDocumentsDir:(NSString*)dir;
//获取目录列表里所有的文件名
+(NSArray *)getSubpathsAtPath:(NSString *)path;
//创建文件 New
+(NSString *)getDirectoryForDocuments:(NSString *)dir;
//直接取文件数据
+(NSData*)getDataForResource:(NSString*)name inDir:(NSString*) type;
+(NSData*)getDataForDocuments:(NSString *)name inDir:(NSString*)dir;
+(NSData*)getDataForPath:(NSString*)path;

//获取文件路径
+(NSString*)getPathForCaches:(NSString *)filename;
+(NSString*)getPathForCaches:(NSString *)filename inDir:(NSString*)dir;

+(NSString*)getPathForDocuments:(NSString*)filename;
+(NSString*)getPathForDocuments:(NSString *)filename inDir:(NSString*)dir;

+(NSString*)getPathForResource:(NSString *)name;
+(NSString*)getPathForResource:(NSString *)name inDir:(NSString*)dir;
@end
