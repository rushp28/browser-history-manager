#ifndef BROWSERHISTORYMANAGER_BROWSERHISTORYITEM_H
#define BROWSERHISTORYMANAGER_BROWSERHISTORYITEM_H

#include "date.h"
#include "webPage.h"

typedef struct BrowserHistoryItem {
    unsigned int browserHistoryItemId;
    WebPage* pWebPage;
    Date* dateVisited;
    struct BrowserHistoryItem* pNext;
    struct BrowserHistoryItem* pPrevious;
} BrowserHistoryItem;

BrowserHistoryItem* createBrowserHistoryItem(WebPage* pWebPage, Date* pDateVisited);

void destroyBrowserHistoryItem(BrowserHistoryItem* pBrowserHistoryItem);

void printBrowserHistoryItem(BrowserHistoryItem* pBrowserHistoryItem);

#endif //BROWSERHISTORYMANAGER_BROWSERHISTORYITEM_H
