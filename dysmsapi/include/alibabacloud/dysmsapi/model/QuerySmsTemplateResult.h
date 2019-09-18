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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_QUERYSMSTEMPLATERESULT_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_QUERYSMSTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dysmsapi/DysmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dysmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYSMSAPI_EXPORT QuerySmsTemplateResult : public ServiceResult
			{
			public:


				QuerySmsTemplateResult();
				explicit QuerySmsTemplateResult(const std::string &payload);
				~QuerySmsTemplateResult();
				std::string getTemplateCode()const;
				std::string getMessage()const;
				std::string getTemplateContent()const;
				std::string getTemplateName()const;
				int getTemplateType()const;
				std::string getCode()const;
				std::string getCreateDate()const;
				std::string getReason()const;
				int getTemplateStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string templateCode_;
				std::string message_;
				std::string templateContent_;
				std::string templateName_;
				int templateType_;
				std::string code_;
				std::string createDate_;
				std::string reason_;
				int templateStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_QUERYSMSTEMPLATERESULT_H_