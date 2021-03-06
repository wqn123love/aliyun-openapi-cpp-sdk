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

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTLUNGNODULEREQUEST_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTLUNGNODULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/imageprocess/ImageprocessExport.h>

namespace AlibabaCloud
{
	namespace Imageprocess
	{
		namespace Model
		{
			class ALIBABACLOUD_IMAGEPROCESS_EXPORT DetectLungNoduleRequest : public RpcServiceRequest
			{
			public:
				struct URLList
				{
					std::string uRL;
				};

			public:
				DetectLungNoduleRequest();
				~DetectLungNoduleRequest();

				std::vector<URLList> getURLList()const;
				void setURLList(const std::vector<URLList>& uRLList);
				bool getAsync()const;
				void setAsync(bool async);

            private:
				std::vector<URLList> uRLList_;
				bool async_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTLUNGNODULEREQUEST_H_