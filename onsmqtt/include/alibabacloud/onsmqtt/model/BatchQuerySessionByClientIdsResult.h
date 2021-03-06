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

#ifndef ALIBABACLOUD_ONSMQTT_MODEL_BATCHQUERYSESSIONBYCLIENTIDSRESULT_H_
#define ALIBABACLOUD_ONSMQTT_MODEL_BATCHQUERYSESSIONBYCLIENTIDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/onsmqtt/OnsMqttExport.h>

namespace AlibabaCloud
{
	namespace OnsMqtt
	{
		namespace Model
		{
			class ALIBABACLOUD_ONSMQTT_EXPORT BatchQuerySessionByClientIdsResult : public ServiceResult
			{
			public:
				struct OnlineStatusListItem
				{
					bool onlineStatus;
					std::string clientId;
				};


				BatchQuerySessionByClientIdsResult();
				explicit BatchQuerySessionByClientIdsResult(const std::string &payload);
				~BatchQuerySessionByClientIdsResult();
				std::vector<OnlineStatusListItem> getOnlineStatusList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<OnlineStatusListItem> onlineStatusList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONSMQTT_MODEL_BATCHQUERYSESSIONBYCLIENTIDSRESULT_H_