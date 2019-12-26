//
//  stats.hpp
//  noncestatistics
//
//  Created by tihmstar on 09.09.16.
//  Copyright © 2016 tihmstar. All rights reserved.
//

#ifndef stats_hpp
#define stats_hpp

#include <map>
#include <vector>
#include <string>

std::vector<std::pair<std::string, int> > sortNonceList(std::map<std::string, int>& nonceList);
void cmd_statistics(const char* filename);

#endif /* stats_hpp */
