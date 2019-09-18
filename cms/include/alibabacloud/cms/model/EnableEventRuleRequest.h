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

#ifndef ALIBABACLOUD_CMS_MODEL_ENABLEEVENTRULEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_ENABLEEVENTRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT EnableEventRuleRequest : public RpcServiceRequest
			{

			public:
				EnableEventRuleRequest();
				~EnableEventRuleRequest();

				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::vector<std::string> getRuleNames()const;
				void setRuleNames(const std::vector<std::string>& ruleNames);

            private:
				std::string ruleName_;
				std::vector<std::string> ruleNames_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_ENABLEEVENTRULEREQUEST_H_