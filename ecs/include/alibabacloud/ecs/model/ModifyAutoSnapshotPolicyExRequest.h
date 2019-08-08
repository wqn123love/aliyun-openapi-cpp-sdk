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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT ModifyAutoSnapshotPolicyExRequest : public RpcServiceRequest
			{

			public:
				ModifyAutoSnapshotPolicyExRequest();
				~ModifyAutoSnapshotPolicyExRequest();

				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAutoSnapshotPolicyId()const;
				void setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId);
				std::string getTimePoints()const;
				void setTimePoints(const std::string& timePoints);
				int getRetentionDays()const;
				void setRetentionDays(int retentionDays);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRepeatWeekdays()const;
				void setRepeatWeekdays(const std::string& repeatWeekdays);
				std::string getAutoSnapshotPolicyName()const;
				void setAutoSnapshotPolicyName(const std::string& autoSnapshotPolicyName);

            private:
				std::string sourceRegionId_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string autoSnapshotPolicyId_;
				std::string timePoints_;
				int retentionDays_;
				long ownerId_;
				std::string repeatWeekdays_;
				std::string autoSnapshotPolicyName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_H_