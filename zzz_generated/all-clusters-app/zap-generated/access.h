/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

#include <app/util/privilege-storage.h>

// Prevent changing generated format
// clang-format off

////////////////////////////////////////////////////////////////////////////////

// Parallel array data (*cluster*, attribute, privilege) for read attribute
#define GENERATED_ACCESS_READ_ATTRIBUTE__CLUSTER { \
    31, /* Cluster: Access Control, Attribute: ACL, Privilege: administer */ \
    31, /* Cluster: Access Control, Attribute: Extension, Privilege: administer */ \
    /* Cluster: Door Lock, Attribute: DoorOpenEvents, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: DoorClosedEvents, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: OpenPeriod, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: Language, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: AutoRelockTime, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: SoundVolume, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: OperatingMode, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: EnableOneTouchLocking, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: EnableInsideStatusLED, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: EnablePrivacyModeButton, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: WrongCodeEntryLimit, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: UserCodeTemporaryDisableTime, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: RequirePINforRemoteOperation, Privilege: view */ \
    /* Cluster: Window Covering, Attribute: Mode, Privilege: view */ \
}

// Parallel array data (cluster, *attribute*, privilege) for read attribute
#define GENERATED_ACCESS_READ_ATTRIBUTE__ATTRIBUTE { \
    0, /* Cluster: Access Control, Attribute: ACL, Privilege: administer */ \
    1, /* Cluster: Access Control, Attribute: Extension, Privilege: administer */ \
    /* Cluster: Door Lock, Attribute: DoorOpenEvents, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: DoorClosedEvents, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: OpenPeriod, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: Language, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: AutoRelockTime, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: SoundVolume, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: OperatingMode, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: EnableOneTouchLocking, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: EnableInsideStatusLED, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: EnablePrivacyModeButton, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: WrongCodeEntryLimit, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: UserCodeTemporaryDisableTime, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: RequirePINforRemoteOperation, Privilege: view */ \
    /* Cluster: Window Covering, Attribute: Mode, Privilege: view */ \
}

// Parallel array data (cluster, attribute, *privilege*) for read attribute
#define GENERATED_ACCESS_READ_ATTRIBUTE__PRIVILEGE { \
    kMatterAccessPrivilegeAdminister, /* Cluster: Access Control, Attribute: ACL, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Access Control, Attribute: Extension, Privilege: administer */ \
    /* Cluster: Door Lock, Attribute: DoorOpenEvents, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: DoorClosedEvents, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: OpenPeriod, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: Language, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: AutoRelockTime, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: SoundVolume, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: OperatingMode, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: EnableOneTouchLocking, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: EnableInsideStatusLED, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: EnablePrivacyModeButton, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: WrongCodeEntryLimit, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: UserCodeTemporaryDisableTime, Privilege: view */ \
    /* Cluster: Door Lock, Attribute: RequirePINforRemoteOperation, Privilege: view */ \
    /* Cluster: Window Covering, Attribute: Mode, Privilege: view */ \
}

////////////////////////////////////////////////////////////////////////////////

// Parallel array data (*cluster*, attribute, privilege) for write attribute
#define GENERATED_ACCESS_WRITE_ATTRIBUTE__CLUSTER { \
    31, /* Cluster: Access Control, Attribute: ACL, Privilege: administer */ \
    31, /* Cluster: Access Control, Attribute: Extension, Privilege: administer */ \
    257, /* Cluster: Door Lock, Attribute: DoorOpenEvents, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: DoorClosedEvents, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: OpenPeriod, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: Language, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: AutoRelockTime, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: SoundVolume, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: OperatingMode, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: EnableOneTouchLocking, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: EnableInsideStatusLED, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: EnablePrivacyModeButton, Privilege: manage */ \
    257, /* Cluster: Door Lock, Attribute: WrongCodeEntryLimit, Privilege: administer */ \
    257, /* Cluster: Door Lock, Attribute: UserCodeTemporaryDisableTime, Privilege: administer */ \
    257, /* Cluster: Door Lock, Attribute: RequirePINforRemoteOperation, Privilege: administer */ \
    258, /* Cluster: Window Covering, Attribute: Mode, Privilege: manage */ \
}

// Parallel array data (cluster, *attribute*, privilege) for write attribute
#define GENERATED_ACCESS_WRITE_ATTRIBUTE__ATTRIBUTE { \
    0, /* Cluster: Access Control, Attribute: ACL, Privilege: administer */ \
    1, /* Cluster: Access Control, Attribute: Extension, Privilege: administer */ \
    4, /* Cluster: Door Lock, Attribute: DoorOpenEvents, Privilege: manage */ \
    5, /* Cluster: Door Lock, Attribute: DoorClosedEvents, Privilege: manage */ \
    6, /* Cluster: Door Lock, Attribute: OpenPeriod, Privilege: manage */ \
    33, /* Cluster: Door Lock, Attribute: Language, Privilege: manage */ \
    35, /* Cluster: Door Lock, Attribute: AutoRelockTime, Privilege: manage */ \
    36, /* Cluster: Door Lock, Attribute: SoundVolume, Privilege: manage */ \
    37, /* Cluster: Door Lock, Attribute: OperatingMode, Privilege: manage */ \
    41, /* Cluster: Door Lock, Attribute: EnableOneTouchLocking, Privilege: manage */ \
    42, /* Cluster: Door Lock, Attribute: EnableInsideStatusLED, Privilege: manage */ \
    43, /* Cluster: Door Lock, Attribute: EnablePrivacyModeButton, Privilege: manage */ \
    48, /* Cluster: Door Lock, Attribute: WrongCodeEntryLimit, Privilege: administer */ \
    49, /* Cluster: Door Lock, Attribute: UserCodeTemporaryDisableTime, Privilege: administer */ \
    51, /* Cluster: Door Lock, Attribute: RequirePINforRemoteOperation, Privilege: administer */ \
    23, /* Cluster: Window Covering, Attribute: Mode, Privilege: manage */ \
}

// Parallel array data (cluster, attribute, *privilege*) for write attribute
#define GENERATED_ACCESS_WRITE_ATTRIBUTE__PRIVILEGE { \
    kMatterAccessPrivilegeAdminister, /* Cluster: Access Control, Attribute: ACL, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Access Control, Attribute: Extension, Privilege: administer */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: DoorOpenEvents, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: DoorClosedEvents, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: OpenPeriod, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: Language, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: AutoRelockTime, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: SoundVolume, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: OperatingMode, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: EnableOneTouchLocking, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: EnableInsideStatusLED, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Door Lock, Attribute: EnablePrivacyModeButton, Privilege: manage */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Door Lock, Attribute: WrongCodeEntryLimit, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Door Lock, Attribute: UserCodeTemporaryDisableTime, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Door Lock, Attribute: RequirePINforRemoteOperation, Privilege: administer */ \
    kMatterAccessPrivilegeManage, /* Cluster: Window Covering, Attribute: Mode, Privilege: manage */ \
}

////////////////////////////////////////////////////////////////////////////////

// Parallel array data (*cluster*, command, privilege) for invoke command
#define GENERATED_ACCESS_INVOKE_COMMAND__CLUSTER { \
    257, /* Cluster: Door Lock, Command: ClearCredential, Privilege: administer */ \
    257, /* Cluster: Door Lock, Command: ClearUser, Privilege: administer */ \
    257, /* Cluster: Door Lock, Command: GetCredentialStatus, Privilege: administer */ \
    257, /* Cluster: Door Lock, Command: GetUser, Privilege: administer */ \
    257, /* Cluster: Door Lock, Command: SetCredential, Privilege: administer */ \
    257, /* Cluster: Door Lock, Command: SetUser, Privilege: administer */ \
}

// Parallel array data (cluster, *command*, privilege) for invoke command
#define GENERATED_ACCESS_INVOKE_COMMAND__COMMAND { \
    38, /* Cluster: Door Lock, Command: ClearCredential, Privilege: administer */ \
    29, /* Cluster: Door Lock, Command: ClearUser, Privilege: administer */ \
    36, /* Cluster: Door Lock, Command: GetCredentialStatus, Privilege: administer */ \
    27, /* Cluster: Door Lock, Command: GetUser, Privilege: administer */ \
    34, /* Cluster: Door Lock, Command: SetCredential, Privilege: administer */ \
    26, /* Cluster: Door Lock, Command: SetUser, Privilege: administer */ \
}

// Parallel array data (cluster, command, *privilege*) for invoke command
#define GENERATED_ACCESS_INVOKE_COMMAND__PRIVILEGE { \
    kMatterAccessPrivilegeAdminister, /* Cluster: Door Lock, Command: ClearCredential, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Door Lock, Command: ClearUser, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Door Lock, Command: GetCredentialStatus, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Door Lock, Command: GetUser, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Door Lock, Command: SetCredential, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Door Lock, Command: SetUser, Privilege: administer */ \
}

////////////////////////////////////////////////////////////////////////////////

// Parallel array data (*cluster*, event, privilege) for read event
#define GENERATED_ACCESS_READ_EVENT__CLUSTER { \
    31, /* Cluster: Access Control, Event: AccessControlEntryChanged, Privilege: administer */ \
    31, /* Cluster: Access Control, Event: AccessControlExtensionChanged, Privilege: administer */ \
}

// Parallel array data (cluster, *event*, privilege) for read event
#define GENERATED_ACCESS_READ_EVENT__EVENT { \
    0, /* Cluster: Access Control, Event: AccessControlEntryChanged, Privilege: administer */ \
    1, /* Cluster: Access Control, Event: AccessControlExtensionChanged, Privilege: administer */ \
}

// Parallel array data (cluster, event, *privilege*) for read event
#define GENERATED_ACCESS_READ_EVENT__PRIVILEGE { \
    kMatterAccessPrivilegeAdminister, /* Cluster: Access Control, Event: AccessControlEntryChanged, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Access Control, Event: AccessControlExtensionChanged, Privilege: administer */ \
}

////////////////////////////////////////////////////////////////////////////////

// clang-format on
