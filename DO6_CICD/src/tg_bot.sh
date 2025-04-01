#!/bin/bash

TIME=10

TELEGRAM_BOT_TOKEN="7854711536:AAHWK5jEebWhvRr1E6oGvs6V6HUtyrU96KU"
TELEGRAM_USER_ID="825254022"
URL="https://api.telegram.org/bot$TELEGRAM_BOT_TOKEN/sendMessage"

STATUS=""

if [ -f src/build_result.txt ]; then
    STATUS+="Build: $(cat src/build_result.txt)%0A"
fi
if [ -f src/linter_result.txt ]; then
    STATUS+="Code style: $(cat src/linter_result.txt)%0A"
fi
if [ -f src/tests_result.txt ]; then
    STATUS+="Integration tests: $(cat src/tests_result.txt)%0A"
fi
if [ -f src/deploy_result.txt ]; then
    STATUS+="Deploy: $(cat src/deploy_result.txt)%0A"
fi
if [ -z "$STATUS" ]; then
  STATUS="No stages completed%0A"
fi

TEXT="$STATUS%0AProject:+$CI_PROJECT_NAME%0AURL:+$CI_PROJECT_URL/pipelines/$CI_PIPELINE_ID/%0ABranch:+$CI_COMMIT_REF_SLUG"
curl -s --max-time $TIME -d "chat_id=$TELEGRAM_USER_ID&disable_web_page_preview=1&text=$TEXT" $URL > /dev/null
