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

#ifndef ALIBABACLOUD_ESS_MODEL_DETACHLOADBALANCERSREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DETACHLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DetachLoadBalancersRequest : public RpcServiceRequest
			{

			public:
				DetachLoadBalancersRequest();
				~DetachLoadBalancersRequest();

				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<std::string> getLoadBalancer()const;
				void setLoadBalancer(const std::vector<std::string>& loadBalancer);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				bool getForceDetach()const;
				void setForceDetach(bool forceDetach);

            private:
				std::string scalingGroupId_;
				std::string accessKeyId_;
				std::vector<std::string> loadBalancer_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				bool forceDetach_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DETACHLOADBALANCERSREQUEST_H_