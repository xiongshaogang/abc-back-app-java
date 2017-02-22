#import <Foundation/Foundation.h>


@interface B2bOrderPkg : NSObject
	
	
    /**
     * ?��?????�C????
     **/
    @property(nonatomic,copy)NSString * payType ;
    /**
     * ?????��ID
     **/
    @property(nonatomic,copy)NSString * customerId ;
    /**
     * ��???????��ID
     **/
    @property(nonatomic,copy)NSString * orderPkgId ;
    /**
     * ?????��????���
     **/
    @property(nonatomic,copy)NSString * customerName ;
    /**
     * ��?????????���
     **/
    @property(nonatomic,copy)NSString * orderPkgName ;
    /**
     * ??????��???????????
     **/
    @property(nonatomic,copy)NSString * exceptionDesc ;
    /**
     * ?????��???ID
     **/
    @property(nonatomic,copy)NSString * supplierId ;
    /**
     * ???������??�C??????��?��
     **/
    @property(nonatomic,copy)NSString * strategyDesc ;
    /**
     * ?????��??????��??��?��CUST|BUSI??��
     **/
    @property(nonatomic,copy)NSString * targetClient ;
    /**
     * ��??????��?ID
     **/
    @property(nonatomic,copy)NSString * orderHeadId ;
    /**
     * ????��?
     **/
    @property(nonatomic,copy)NSString * allDiscount ;
    /**
     * ?????��???????���
     **/
    @property(nonatomic,copy)NSString * supplierName ;
    /**
     * ?��???��????��?(0????��?��?��???1??��?��???��???2��?��????��???��???3?��??��???��)
     **/
    @property(nonatomic,copy)NSString * storageStatus ;
    /**
     * ��???????��??�C??��
     **/
    @property(nonatomic,copy)NSString * orderPkgCode ;
    /**
     * ????��????��?����???��??����????��???????????�㡮
     **/
    @property(nonatomic,copy)NSString * unpaidAmount ;
    /**
     * ?��???��
     **/
    @property(nonatomic,copy)NSString * remark ;
    @property(nonatomic,copy)NSString * restName ;
    /**
     * ��???��?��??id
     **/
    @property(nonatomic,copy)NSString * cartId ;
    /**
     * ��?????????��????��?��
     **/
    @property(nonatomic,copy)NSString * statusDesc ;
    /**
     * ????��?��?����??
     **/
    @property(nonatomic,copy)NSString * amountPaid ;
    /**
     * ??????��??????��??????��??????��?��
     **/
    @property(nonatomic,copy)NSString * exceptionSolve ;
    /**
     * ???������??�C???
     **/
    @property(nonatomic,copy)NSString * slsPmtnId ;
    /**
     * ??????
     **/
    @property(nonatomic,copy)NSString * allPrivilege ;
    /**
     * ?��?????��????
     **/
    @property(nonatomic,copy)NSString * codelessSum ;
    @property(nonatomic,copy)NSString * restId ;
    /**
     * ??��?��?��?����??
     **/
    @property(nonatomic,copy)NSString * amount ;
 
@end