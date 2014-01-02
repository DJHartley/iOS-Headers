/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AXHearingAidMode, AXTimer, NSArray, NSDate, NSString;

@interface AXRemoteHearingAidDevice : NSObject
{
    AXTimer *_propertyWriteTimer;
    _Bool _keepInSync;
    _Bool _isPaired;
    _Bool _isConnecting;
    int _availableEars;
    double _rightMicrophoneVolume;
    double _leftMicrophoneVolume;
    double _rightStreamVolume;
    double _leftStreamVolume;
    NSString *_name;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_leftFirmwareVersion;
    NSString *_rightFirmwareVersion;
    NSString *_leftHardwareVersion;
    NSString *_rightHardwareVersion;
    NSString *_rightUUID;
    NSString *_leftUUID;
    NSString *_leftPeripheralUUID;
    NSString *_rightPeripheralUUID;
    double _rightBatteryLevel;
    double _leftBatteryLevel;
    NSDate *_leftBatteryLowDate;
    NSDate *_rightBatteryLowDate;
    NSArray *_rightPrograms;
    NSArray *_leftPrograms;
    AXHearingAidMode *_leftSelectedProgram;
    AXHearingAidMode *_rightSelectedProgram;
    NSString *_deviceUUID;
    long long _loadedProperties;
    long long _pendingPropertyWrites;
}

@property(nonatomic) long long pendingPropertyWrites; // @synthesize pendingPropertyWrites=_pendingPropertyWrites;
@property(nonatomic) long long loadedProperties; // @synthesize loadedProperties=_loadedProperties;
@property(nonatomic) int availableEars; // @synthesize availableEars=_availableEars;
@property(retain, nonatomic) NSString *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(retain, nonatomic) AXHearingAidMode *rightSelectedProgram; // @synthesize rightSelectedProgram=_rightSelectedProgram;
@property(retain, nonatomic) AXHearingAidMode *leftSelectedProgram; // @synthesize leftSelectedProgram=_leftSelectedProgram;
@property(copy, nonatomic) NSArray *leftPrograms; // @synthesize leftPrograms=_leftPrograms;
@property(copy, nonatomic) NSArray *rightPrograms; // @synthesize rightPrograms=_rightPrograms;
@property(retain, nonatomic) NSDate *rightBatteryLowDate; // @synthesize rightBatteryLowDate=_rightBatteryLowDate;
@property(retain, nonatomic) NSDate *leftBatteryLowDate; // @synthesize leftBatteryLowDate=_leftBatteryLowDate;
@property(nonatomic) double leftBatteryLevel; // @synthesize leftBatteryLevel=_leftBatteryLevel;
@property(nonatomic) double rightBatteryLevel; // @synthesize rightBatteryLevel=_rightBatteryLevel;
@property(retain, nonatomic) NSString *rightPeripheralUUID; // @synthesize rightPeripheralUUID=_rightPeripheralUUID;
@property(retain, nonatomic) NSString *leftPeripheralUUID; // @synthesize leftPeripheralUUID=_leftPeripheralUUID;
@property(retain, nonatomic) NSString *leftUUID; // @synthesize leftUUID=_leftUUID;
@property(retain, nonatomic) NSString *rightUUID; // @synthesize rightUUID=_rightUUID;
@property(retain, nonatomic) NSString *rightHardwareVersion; // @synthesize rightHardwareVersion=_rightHardwareVersion;
@property(retain, nonatomic) NSString *leftHardwareVersion; // @synthesize leftHardwareVersion=_leftHardwareVersion;
@property(retain, nonatomic) NSString *rightFirmwareVersion; // @synthesize rightFirmwareVersion=_rightFirmwareVersion;
@property(retain, nonatomic) NSString *leftFirmwareVersion; // @synthesize leftFirmwareVersion=_leftFirmwareVersion;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isConnecting; // @synthesize isConnecting=_isConnecting;
@property(nonatomic) _Bool isPaired; // @synthesize isPaired=_isPaired;
@property(nonatomic) double leftStreamVolume; // @synthesize leftStreamVolume=_leftStreamVolume;
@property(nonatomic) double rightStreamVolume; // @synthesize rightStreamVolume=_rightStreamVolume;
@property(nonatomic) double leftMicrophoneVolume; // @synthesize leftMicrophoneVolume=_leftMicrophoneVolume;
@property(nonatomic) double rightMicrophoneVolume; // @synthesize rightMicrophoneVolume=_rightMicrophoneVolume;
@property(nonatomic) _Bool keepInSync; // @synthesize keepInSync=_keepInSync;
- (id)description;
- (void)setValue:(id)arg1 forProperty:(long long)arg2;
- (id)selectedProgramIndexes;
- (id)selectedPrograms;
- (void)selectProgram:(id)arg1;
- (id)programs;
- (void)writeVolumesForProperty:(long long)arg1;
- (void)_delayWriteProperties;
- (void)loadRequiredProperties;
- (_Bool)didLoadRequiredProperties;
- (_Bool)didLoadBasicProperties;
- (_Bool)didLoadProperty:(long long)arg1;
- (_Bool)containsPeripheralWithUUID:(id)arg1;
- (_Bool)isRightConnected;
- (_Bool)isLeftConnected;
- (_Bool)isConnected;
- (_Bool)rightAvailable;
- (_Bool)leftAvailable;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (id)initWithRemoteRepresentation:(id)arg1 andDeviceID:(id)arg2;

@end
