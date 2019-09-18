/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEERRORLOGRECORDSREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEERRORLOGRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeErrorLogRecordsRequest : public RpcServiceRequest
			{

			public:
				DescribeErrorLogRecordsRequest();
				~DescribeErrorLogRecordsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getRoleType()const;
				void setRoleType(const std::string& roleType);
				std::string getNodeId()const;
				void setNodeId(const std::string& nodeId);
				long getSQLId()const;
				void setSQLId(long sQLId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDBName()const;
				void setDBName(const std::string& dBName);

            private:
				long resourceOwnerId_;
				std::string startTime_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string securityToken_;
				int pageSize_;
				std::string dBInstanceId_;
				std::string roleType_;
				std::string nodeId_;
				long sQLId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string endTime_;
				long ownerId_;
				std::string dBName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEERRORLOGRECORDSREQUEST_H_