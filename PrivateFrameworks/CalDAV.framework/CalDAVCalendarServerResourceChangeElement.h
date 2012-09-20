/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CalDAVUpdateOwnerItem, NSURL;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem  {
    CalDAVUpdateOwnerItem *_changedBy;
}

@property(readonly) NSURL * fullHrefURL;
@property(retain) CalDAVUpdateOwnerItem * changedBy;


- (void)dealloc;
- (id)init;
- (id)changedBy;
- (id)fullHrefURL;
- (void)setChangedBy:(id)arg1;
- (id)copyParseRules;

@end