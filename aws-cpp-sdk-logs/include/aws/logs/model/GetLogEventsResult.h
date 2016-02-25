/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OutputLogEvent.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{
  class AWS_CLOUDWATCHLOGS_API GetLogEventsResult
  {
  public:
    GetLogEventsResult();
    GetLogEventsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLogEventsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<OutputLogEvent>& GetEvents() const{ return m_events; }

    
    inline void SetEvents(const Aws::Vector<OutputLogEvent>& value) { m_events = value; }

    
    inline void SetEvents(Aws::Vector<OutputLogEvent>&& value) { m_events = value; }

    
    inline GetLogEventsResult& WithEvents(const Aws::Vector<OutputLogEvent>& value) { SetEvents(value); return *this;}

    
    inline GetLogEventsResult& WithEvents(Aws::Vector<OutputLogEvent>&& value) { SetEvents(value); return *this;}

    
    inline GetLogEventsResult& AddEvents(const OutputLogEvent& value) { m_events.push_back(value); return *this; }

    
    inline GetLogEventsResult& AddEvents(OutputLogEvent&& value) { m_events.push_back(value); return *this; }

    
    inline const Aws::String& GetNextForwardToken() const{ return m_nextForwardToken; }

    
    inline void SetNextForwardToken(const Aws::String& value) { m_nextForwardToken = value; }

    
    inline void SetNextForwardToken(Aws::String&& value) { m_nextForwardToken = value; }

    
    inline void SetNextForwardToken(const char* value) { m_nextForwardToken.assign(value); }

    
    inline GetLogEventsResult& WithNextForwardToken(const Aws::String& value) { SetNextForwardToken(value); return *this;}

    
    inline GetLogEventsResult& WithNextForwardToken(Aws::String&& value) { SetNextForwardToken(value); return *this;}

    
    inline GetLogEventsResult& WithNextForwardToken(const char* value) { SetNextForwardToken(value); return *this;}

    
    inline const Aws::String& GetNextBackwardToken() const{ return m_nextBackwardToken; }

    
    inline void SetNextBackwardToken(const Aws::String& value) { m_nextBackwardToken = value; }

    
    inline void SetNextBackwardToken(Aws::String&& value) { m_nextBackwardToken = value; }

    
    inline void SetNextBackwardToken(const char* value) { m_nextBackwardToken.assign(value); }

    
    inline GetLogEventsResult& WithNextBackwardToken(const Aws::String& value) { SetNextBackwardToken(value); return *this;}

    
    inline GetLogEventsResult& WithNextBackwardToken(Aws::String&& value) { SetNextBackwardToken(value); return *this;}

    
    inline GetLogEventsResult& WithNextBackwardToken(const char* value) { SetNextBackwardToken(value); return *this;}

  private:
    Aws::Vector<OutputLogEvent> m_events;
    Aws::String m_nextForwardToken;
    Aws::String m_nextBackwardToken;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws