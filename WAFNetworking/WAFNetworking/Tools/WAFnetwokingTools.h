//
//  WAFnetwokingTools.h
//  WAFNetworking
//
//  Created by wupeige on 2017/5/25.
//  Copyright © 2017年 WPG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WAFnetwokingTools : NSObject


/**
 *  post请求
 *
 *  @param url          请求URL
 *  @param params       普通的请求参数
 *  @param progress     进度
 *  @param success      请求成功后的回调
 *  @param failure      请求失败后的回调
 */
+ (void)post:(NSString *)url params:(id)params progress:(void (^)(NSProgress *progress))progress success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;

/**
 *  post请求
 *
 *  @param url          请求URL
 *  @param contentType  参数类型
 *  @param params       普通的请求参数
 *  @param progress     进度
 *  @param success      请求成功后的回调
 *  @param failure      请求失败后的回调
 */

+ (void)post:(NSString *)url contentType:(NSString*)contentType params:(id)params progress:(void (^)(NSProgress *progress))progress success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;


/**
 *  get请求
 *
 *  @param url     请求URL
 *  @param params  普通的请求参数
 *  @param success 请求成功后的回调
 *  @param failure 请求失败后的回调
 */
+ (void)get:(NSString *)url params:(id)params success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;


/**
 *  文件上传
 *
 *  @param url     请求URL
 *  @param params  普通的请求参数
 *  @param files   文件参数(里面都是HWHttpFile模型)
 *  @param success 请求成功后的回调
 *  @param failure 请求失败后的回调
 */
+ (void)post:(NSString *)url params:(id)params files:(NSArray *)files success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;

@end

@interface XTBHttpFile : NSObject

/** 文件参数名 */
@property (nonatomic, copy) NSString *name;
/** 文件数据 */
@property (nonatomic, strong) NSData *data;
/** 文件类型 */
@property (nonatomic, copy) NSString *mimeType;
/** 文件名 */
@property (nonatomic, copy) NSString *filename;

+ (instancetype)fileWithName:(NSString *)name data:(NSData *)data mimeType:(NSString *)mimeType filename:(NSString *)filename;




@end
