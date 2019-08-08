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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATENATGATEWAYREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATENATGATEWAYREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT CreateNatGatewayRequest : public RpcServiceRequest
			{
				struct BandwidthPackage
				{
					int bandwidth;
					std::string zone;
					int ipCount;
				};

			public:
				CreateNatGatewayRequest();
				~CreateNatGatewayRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<BandwidthPackage> getBandwidthPackage()const;
				void setBandwidthPackage(const std::vector<BandwidthPackage>& bandwidthPackage);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string clientToken_;
				std::string ownerAccount_;
				std::string vpcId_;
				std::string name_;
				std::string description_;
				long ownerId_;
				std::vector<BandwidthPackage> bandwidthPackage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATENATGATEWAYREQUEST_H_