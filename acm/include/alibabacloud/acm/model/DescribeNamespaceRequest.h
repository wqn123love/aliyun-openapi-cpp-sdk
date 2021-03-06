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

#ifndef ALIBABACLOUD_ACM_MODEL_DESCRIBENAMESPACEREQUEST_H_
#define ALIBABACLOUD_ACM_MODEL_DESCRIBENAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/acm/AcmExport.h>

namespace AlibabaCloud
{
	namespace Acm
	{
		namespace Model
		{
			class ALIBABACLOUD_ACM_EXPORT DescribeNamespaceRequest : public RoaServiceRequest
			{

			public:
				DescribeNamespaceRequest();
				~DescribeNamespaceRequest();

				std::string getNamespaceId()const;
				void setNamespaceId(const std::string& namespaceId);

            private:
				std::string namespaceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACM_MODEL_DESCRIBENAMESPACEREQUEST_H_