
#import "IPContentProvider.h"

@interface itemisAppProviders : NSObject {

}

-(IPContentProvider*)providerForallCommitsByRepository:(id)path;
-(IPContentProvider*)providerForuserData:(id)login;
-(IPContentProvider*)providerForallRepositoriesByUser:(id)login;
-(IPContentProvider*)providerForallFollowersByUser:(id)login;

@end
