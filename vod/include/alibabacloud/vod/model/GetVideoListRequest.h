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

#ifndef ALIBABACLOUD_VOD_MODEL_GETVIDEOLISTREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETVIDEOLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetVideoListRequest : public RpcServiceRequest
			{

			public:
				GetVideoListRequest();
				~GetVideoListRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getStorageLocation()const;
				void setStorageLocation(const std::string& storageLocation);
				long getCateId()const;
				void setCateId(long cateId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNo()const;
				void setPageNo(int pageNo);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string startTime_;
				std::string storageLocation_;
				long cateId_;
				int pageSize_;
				std::string resourceOwnerAccount_;
				std::string endTime_;
				long ownerId_;
				int pageNo_;
				std::string sortBy_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETVIDEOLISTREQUEST_H_